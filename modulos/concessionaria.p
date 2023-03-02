#include 	<YSI\y_hooks>

#include  "../scriptfiles/JFSConcessionaria/DefinicoesJFS.pwn"

hook OnGameModeInit()
{
	CreatePickup(1239, 23, 2132.0010,-1149.9999,24.2075);
 	Create3DTextLabel("Sistema de Concessionária\nAperte 'F'", -1, 2132.0010,-1149.9999,24.207, 40.0, 0);
 	format(Celulas, sizeof(Celulas), "/JFSConcessionaria");
 	if(!DOF2::FileExists(Celulas))
 	{
        for(new x=0; x < 20; ++x) {
		print("[JFS Concessionária] - NÃO EXISTE A PASTA JFSConcessionaria NO SCRIPTFILES ! CRIE AGORA !");
		}
		SendRconCommand("exit");
	}
 	format(Celulas, sizeof(Celulas), "/JFSConcessionaria/Veiculos");
 	if(!DOF2::FileExists(Celulas))
 	{
        for(new x=0; x < 20; ++x) {
		print("[JFS Concessionária] - NÃO EXISTE A PASTA Veiculos EM JFSConcessionaria NOS SCRIPTFILES ! CRIE AGORA !");
		}
		SendRconCommand("exit");
	}
	print("[JFS Concessionária] - Carregado com Sucesso !");
	return true;
}

hook OnGameModeExit()
{
	DOF2::Exit();
	return true;
}

hook OnPlayerConnect(playerid)
{
    CarregarCarro(playerid);
    gHeaderTextDrawId[playerid] = PlayerText:INVALID_TEXT_DRAW;
    gBackgroundTextDrawId[playerid] = PlayerText:INVALID_TEXT_DRAW;
    gCurrentPageTextDrawId[playerid] = PlayerText:INVALID_TEXT_DRAW;
    gNextButtonTextDrawId[playerid] = PlayerText:INVALID_TEXT_DRAW;
    gPrevButtonTextDrawId[playerid] = PlayerText:INVALID_TEXT_DRAW;

    for(new x=0; x < CARROSPAGINA; x++) {
        gSelectionItems[playerid][x] = PlayerText:INVALID_TEXT_DRAW;
	}

	gItemAt[playerid] = 0;

	return true;
}

hook OnPlayerDisconnect(playerid)
{
    JFSDestroyVehicle(playerid);
	return true;
}

hook OnPlayerClickTextDraw(playerid, Text:clickedid)
{
   	if(GetPVarInt(playerid, "JFSTextAtivado") == 0) return false;

	if(clickedid == Text:INVALID_TEXT_DRAW) {
        DestroySelectionMenu(playerid);
        SetPVarInt(playerid, "JFSTextAtivado", 0);
        PlayerPlaySound(playerid, 1085, 0.0, 0.0, 0.0);
        return true;
	}
	return false;
}

hook OnPlayerClickPlayerTextDraw(playerid, PlayerText:playertextid)
{
	if(GetPVarInt(playerid, "JFSTextAtivado") == 0) return false;
	new curpage = GetPVarInt(playerid, "JFSPagina");

	if(playertextid == gNextButtonTextDrawId[playerid])
	{
	    if(curpage < (GETNumeroPaginas() - 1))
		{
	        SetPVarInt(playerid, "JFSPagina", curpage + 1);
	        ShowPlayerModelPreviews(playerid);
         	UpdatePageTextDraw(playerid);
         	PlayerPlaySound(playerid, 1083, 0.0, 0.0, 0.0);
		} else {
		    PlayerPlaySound(playerid, 1085, 0.0, 0.0, 0.0);
		}
		return true;
	}
	if(playertextid == gPrevButtonTextDrawId[playerid])
	{
	    if(curpage > 0)
		{
	    	SetPVarInt(playerid, "JFSPagina", curpage - 1);
	    	ShowPlayerModelPreviews(playerid);
	    	UpdatePageTextDraw(playerid);
	    	PlayerPlaySound(playerid, 1084, 0.0, 0.0, 0.0);
		} else {
		    PlayerPlaySound(playerid, 1085, 0.0, 0.0, 0.0);
		}
		return true;
	}
	new x=0;
	while(x != CARROSPAGINA)
	{
	    if(GetPlayerMoney(playerid) < PrecoCarros) return SendClientMessage(playerid, -1, "Você não tem dinheiro suficiente ! R$20.000");
	    if(playertextid == gSelectionItems[playerid][x])
		{
	        JFSComprouVeiculo(playerid, x);
	        PlayerPlaySound(playerid, 1083, 0.0, 0.0, 0.0);
	        DestroySelectionMenu(playerid);
	        CancelSelectTextDraw(playerid);
        	SetPVarInt(playerid, "JFSTextAtivado", 0);
        	return true;
		}
		x++;
	}
	return false;
}

hook OnPlayerCommandText(playerid, cmdtext[]) return false;

hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
	if (PRESSED(KEY_SECONDARY_ATTACK))
	{
	    if(IsPlayerInRangeOfPoint(playerid, 1.0, 2132.0010, -1149.9999, 24.2075))
	    {
			if(IsPlayerInAnyVehicle(playerid)) return SendClientMessage(playerid, -1, "Você Não comprar veiculo dentro de um.");
			if((CarroJFS[playerid] == 1)) return SendClientMessage(playerid, -1, "Você Já Tem um Veiculo.");
			#if(AdicionarVIP == 1)
			if(VariavelVIP < 1)  return SendClientMessage(playerid, -1, "Você Não é VIP.");
			#endif
			DestroySelectionMenu(playerid);
	    	SetPVarInt(playerid, "JFSTextAtivado", 1);
	    	CreateSelectionMenu(playerid);
	    	SelectTextDraw(playerid, 0xACCBF1FF);
		}
	}
	return true;
}


CMD:excluirveiculo(playerid, params[])
{
    if(!IsPlayerAdmin(playerid)) return SendClientMessage(playerid, 0xDEEE20FF, "Apenas Para Administrador Logado na RCON!");
	format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
	if(!DOF2::FileExists(Celulas)) return SendClientMessage(playerid, -1, "Esse Úsuario não tem veiculo!");
	format(Celulas, sizeof(Celulas), "Arquivo Veiculo_%s.ini Excluido com Sucesso dos ScriptFiles !", PlayerName(playerid));
	SendClientMessage(playerid, -1, Celulas);
	DOF2::RemoveFile(Celulas);
	DOF2::SaveFile();
	if(IsPlayerConnected(strlen(PlayerName(playerid))))
	{
	    JFSID[strlen(params)] = 0;
	    DestroyVehicle(JFSID[strlen(PlayerName(playerid))]);
	}
	return true;
}

CMD:veiculomenu(playerid, params[])
{
    format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
	if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "Você não tem um veiculo!" ) ;
 	if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "Você não está em seu veiculo." ) ;
	ShowPlayerDialog(playerid, 7337, DIALOG_STYLE_LIST, "JFS Concessionária - Menu", "Estacionar Neste Lugar\nCor do Veiculo\nVender Veiculo\nPlaca Veiculo\nGrana Veiculo", "Selecionar", "Cancelar");
	return true;
}

CMD:grana(playerid, params[])
{
	GivePlayerMoney(playerid, 500000);
	return true;
}

CMD:irla(playerid, params[])
{
//    if(!IsPlayerAdmin(playerid)) return SendClientMessage(playerid, 0xDEEE20FF, "Apenas Para Administrador Logado na RCON!");
    SetPlayerPos(playerid, 2132.0010,-1149.9999,24.2075);
    return true;
}

CMD:localizarveiculo(playerid, params[])
{
    format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
	if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "Você não tem um veiculo!" ) ;
	JFSCheck[playerid] = 1;
	static Float:CordX, Float:CordY, Float:CordZ;
	GetVehiclePos(JFSID[playerid], CordX, CordY, CordZ);
	SetPlayerCheckpoint (playerid , CordX, CordY, CordZ, 10.0);
 	SendClientMessage(playerid , -1, "Seu Veículo Está Marcado no Mapa !");
	return true;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
  	  if(dialogid == 7337)
	  {
			if(response)
			{
			    if(listitem == 0)
			    {
   					new VeiculoID = JFSID[playerid];
    				static Float:CordX, Float:CordY, Float:CordZ, Float:Angulo;
 			    	GetVehiclePos(VeiculoID, CordX, CordY, CordZ);
					GetVehicleZAngle(VeiculoID, Angulo);
					JFSCarros[playerid][JFSCorX] = CordX;
					JFSCarros[playerid][JFSCorY] = CordY;
					JFSCarros[playerid][JFSCorZ] = CordZ;
					JFSCarros[playerid][JFSAngulo] = Angulo;
			      	DestroyVehicle(VeiculoID);
      				JFSID[playerid] = CreateVehicle(JFSCarros[playerid][JFSModelo], JFSCarros[playerid][JFSCorX], JFSCarros[playerid][JFSCorY], JFSCarros[playerid][JFSCorZ], JFSCarros[playerid][JFSAngulo], JFSCarros[playerid][JFSCor1] , JFSCarros[playerid][JFSCor2], 0);
    				PutPlayerInVehicle(playerid, JFSID[playerid], 0);
					SendClientMessage(playerid, -1, "Seu Veiculo vai da Spawn Aqui Agora!");
					SalvarArquivos(playerid);
          		}
			    if(listitem == 1)
			    {
			      	ShowPlayerDialog(playerid, 3773, DIALOG_STYLE_INPUT, "JFS Concessionária v1.0 - Cor", "DIGITE O ID DA COR 1 DE SEU VEICULO\n\n\nPS: As Cores Foram Modificadas na versão 0.3x.", "Comprar", "Cancelar");
				}
			    if(listitem == 2)
			    {
			      	format(Celulas, sizeof(Celulas), "[JFS Concessionária] - Seu Veiculo Será Vendido Por %d.\n\nCaso Queria Vender seu Veículo, Confirme Abaixo.\n\n", GranaVenderCarro);
			      	ShowPlayerDialog(playerid, 4217, DIALOG_STYLE_MSGBOX, "JFS Concessionária v1.0 - Vender Veiculo", Celulas, "Confirmar", "Cancelar");
				}
			    if(listitem == 3)
			    {
			      	ShowPlayerDialog(playerid, 2461, DIALOG_STYLE_INPUT, "JFS Concessionária v1.0 - Placa", "DIGITE A PLACA DO SEU VEICULO\n\n", "Trocar", "Cancelar");
				}
			    if(listitem == 4)
			    {
			        GivePlayerMoney(playerid, JFSCarros[playerid][JFSCofre]);
		         	format(Celulas, sizeof(Celulas), "[JFS Concessionária] - Você retirou %d de seu veiculo.", JFSCarros[playerid][JFSCofre]);
		         	SendClientMessage(playerid, -1, Celulas);
			        JFSCarros[playerid][JFSCofre] = 0;
			        SalvarArquivos(playerid);
				}
          	}
          	return true;
      }
   	  if(dialogid == 4217)
	  {
			if(response)
			{
			    format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
			   	DOF2::RemoveFile(Celulas);
			  	DOF2::SaveFile();
			  	DestroyVehicle(JFSID[playerid]);
          		CarroJFS[playerid] = 0;
  				RemovePlayerFromVehicle(playerid);
  				format(Celulas, sizeof(Celulas), "[JFS Concessionária] - Você Vendeu seu veiculo e ganhou %d.", GranaVenderCarro);
  				SendClientMessage(playerid, -1, Celulas);
  				GivePlayerMoney(playerid, GranaVenderCarro);
			}
          	return true;
      }
   	  if(dialogid == 2461)
	  {
			if(response)
			{
			    if(strlen(inputtext) > 1 && strlen(inputtext) < 9)
			    {
			        format(Celulas,sizeof(Celulas),"%s", inputtext);
					static Float:CordX, Float:CordY, Float:CordZ, Float:Angulo;
	       			new VeiculoID = JFSID[playerid];
				    SetVehicleNumberPlate(VeiculoID, Celulas);
				    GetVehiclePos(VeiculoID, CordX, CordY, CordZ);
					GetVehicleZAngle(VeiculoID, Angulo);
					SetVehicleToRespawn(VeiculoID);
					SetVehiclePos(VeiculoID, CordX, CordY, CordZ);
	                SetVehicleZAngle(VeiculoID, Angulo);
					PutPlayerInVehicle(playerid, VeiculoID, 0);
					format(JFSCarros[playerid][JFSPlaca] , 9,"%s", inputtext);
					SalvarArquivos(playerid);
				}
				else SendClientMessage(playerid, -1, "Apenas Caractéristicas de 2 a 8 !");
			}
          	return true;
      }
   	  if(dialogid == 3773)
	  {
			if(response)
			{
       			new VeiculoID = JFSID[playerid];
			    if(!strval(inputtext)) return SendClientMessage(playerid, -1, "Apenas Numeros!"), true;
			    if(strval(inputtext) < 0 || strval(inputtext) > 255) return SendClientMessage(playerid, -1, "Existes Cores Apenas Entre 0 á 255."), true;
                JFSCarros[playerid][JFSCor1] = strval(inputtext);
                ChangeVehicleColor(VeiculoID, JFSCarros[playerid][JFSCor1], -1);
				ShowPlayerDialog(playerid, 7733, DIALOG_STYLE_INPUT, "JFS Concessionária v1.0 - Cor", "DIGITE O ID DA COR 2 DE SEU VEICULO\n\n\nPS: As Cores Foram Modificadas na versão 0.3x.", "Comprar", "Cancelar");
          	}
          	return true;
      }
   	  if(dialogid == 7733)
	  {
			if(response)
			{
			    new VeiculoID = JFSID[playerid];
			    if(!strval(inputtext)) return SendClientMessage(playerid, -1, "Apenas Numeros!"), ShowPlayerDialog(playerid, 7733, DIALOG_STYLE_INPUT, "JFS Concessionária v1.0 - Cor", "DIGITE O ID DA COR 2 DE SEU VEICULO\n\n\nPS: As Cores Foram Modificadas na versão 0.3x.", "Comprar", "Cancelar"), true;
			    if(strval(inputtext) < 0 || strval(inputtext) > 255) return SendClientMessage(playerid, -1, "Existes Cores Apenas Entre 0 á 255."), ShowPlayerDialog(playerid, 7733, DIALOG_STYLE_INPUT, "JFS Concessionária v1.0 - Cor", "DIGITE O ID DA COR 2 DE SEU VEICULO\n\n\nPS: As Cores Foram Modificadas na versão 0.3x.", "Comprar", "Cancelar"), true;
                JFSCarros[playerid][JFSCor2] = strval(inputtext);
                ChangeVehicleColor(VeiculoID, JFSCarros[playerid][JFSCor1], JFSCarros[playerid][JFSCor2]);
                SendClientMessage(playerid, -1, "Cores Definidas com Sucesso!");
                SalvarArquivos(playerid);
          	}
          	else ShowPlayerDialog(playerid, 7733, DIALOG_STYLE_INPUT, "JFS Concessionária v1.0 - Cor", "DIGITE O ID DA COR 2 DE SEU VEICULO\n\n\nPS: As Cores Foram Modificadas na versão 0.3x.", "Comprar", "Cancelar");
          	return true;
      }
      return true;
}

hook OnPlayerStateChange(playerid, newstate, oldstate)
{
	    if(newstate == PLAYER_STATE_DRIVER)
	    {
			for(new carro, JFS = sizeof(JFSCarros); carro != JFS; carro++)
        	{
        		if(JFSID[carro] == GetPlayerVehicleID(playerid) && strcmp(PlayerName(playerid), JFSCarros[carro][JFSDono], true))
        		{
	         		format(Celulas, sizeof(Celulas), "[JFS Concessionária] - Você pagou para %s R$%d por entrar no seu veiculo.", JFSCarros[carro][JFSDono], GranaAoEntrar);
	         		SendClientMessage(playerid, -1, Celulas);
			        GivePlayerMoney(playerid, -GranaAoEntrar);
		      	    JFSCarros[playerid][JFSCofre] += GranaAoEntrar;
		      	    SalvarArquivos(playerid);
        		}
        		if(JFSID[carro] == GetPlayerVehicleID(playerid) && !strcmp(PlayerName(playerid), JFSCarros[carro][JFSDono], true))
        		{
	         		SendClientMessage(playerid, -1, "[JFS Concessionária] - Bem Vindo ao Seu Veiculo! Use: /veiculomenu");
        		}
        	}
	    }
    	return true;
}

hook OnPlayerEnterCheckpoint (playerid)
{
    if (JFSCheck[playerid] == 1 )
    {
        SendClientMessage (playerid , -1 , "[JFS Concessionária] - Aqui Está Seu Veículo!");
        DisablePlayerCheckpoint (playerid);
        return true;
    }
    return true;
}

