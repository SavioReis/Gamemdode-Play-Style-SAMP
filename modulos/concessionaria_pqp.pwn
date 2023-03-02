#include 	<YSI\y_hooks>

#include  "../scriptfiles/Conce_Configs.pwn"

// 1.2
#define jCOR_FUNDO 0xF0F8FFFF  // altera cor de fundo dos veнculos ( na imagem, preta )
#define COR_DIALOGS_CONCE 0XFA8072

#define DIALOG_MEUSCARROS 31343

#define MENU_VEICULO_1 25390

// 1.0 e 1.1
#define AdicionarVIP 0

#define MaxCarros_Conce 100

#define DIALOG_SLT_SLOT_DT 1887
#define DIALOG_DT_IN_VALOR 1889

hook OnGameModeInit()
{
 	format(Celulas, sizeof(Celulas), "/Veiculos_pqp");
 	if(!DOF2::FileExists(Celulas))
 	{
        for(new x=0; x < 20; ++x) {
		print("Pasta Veiculos_pqp não esta criada.");
		}
		SendRconCommand("exit");
	}
	print("Sistema de concessionaria/veiculos carregado com sucesso!");
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
    CarregarCarro_2(playerid);
    CarregarCarro_3(playerid);
    CarregarCarro_4(playerid);
    CarregarCarro_5(playerid);


	possui_veh1[playerid] = 0;
	possui_veh2[playerid] = 0;
	possui_veh3[playerid] = 0;
	possui_veh4[playerid] = 0;
	possui_veh5[playerid] = 0;


    format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh1[playerid] = 1;
	}
    format(Celulas, sizeof(Celulas), JFSCON_2, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh2[playerid] = 1;
	}
    format(Celulas, sizeof(Celulas), JFSCON_3, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh3[playerid] = 1;
	}
    format(Celulas, sizeof(Celulas), JFSCON_4, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh4[playerid] = 1;
	}
    format(Celulas, sizeof(Celulas), JFSCON_5, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh5[playerid] = 1;
	}

	return true;
}

hook OnPlayerDisconnect(playerid)
{
    pqp_DestroyVehicle(playerid);

    DestroyVehicle(JFSID[playerid]);
    DestroyVehicle(JFSID_2[playerid]);
    DestroyVehicle(JFSID_3[playerid]);
    DestroyVehicle(JFSID_4[playerid]);
    DestroyVehicle(JFSID_5[playerid]);
	return true;
}

hook OnPlayerCommandText(playerid, cmdtext[]) return false;

CMD:excluirveiculo(playerid, params[])
{
  //  if(!IsPlayerAdmin(playerid)) return SendClientMessage(playerid, 0xDEEE20FF, "| VEICULO | RCON necessário para excluir veiculo.");
	if(PlayerInfo[playerid][pAdmin] < MAX_ADM_LEVEL)
	return ErroMSG(playerid, "{FA8072}| VEICULO | Voce nao tem permissao administrativa para remover um veiculo!");

	new jogador_veh[MAX_PLAYER_NAME];
	if(sscanf(params, "s", jogador_veh)) return SendClientMessage(playerid, -1, "| VEICULO | Digite /excluirveiculo [Jogador]");

	format(Celulas, sizeof(Celulas), JFSCON, jogador_veh);
	if(!DOF2::FileExists(Celulas)) return SendClientMessage(playerid, -1, "| VEICULO | Este jogador não possui um veiculo.");

	new aviso_pqp[220];
	format(aviso_pqp, sizeof(aviso_pqp), "{FA8072}| VEICULO | O Carro do jogador %s foi excluido permanentemente com sucesso por estar em local inapropriado!", PlayerName(playerid));
	SendClientMessageToAll(-1, aviso_pqp);

	DOF2::RemoveFile(Celulas);
	DOF2::SaveFile();

    new vehicleid = GetPlayerVehicleID(playerid);
    DestroyVehicle(vehicleid);
	return true;
}
/*
CMD:menuveiculo(playerid)
{
    format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
	if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo!" ) ;
 	//if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "| VEICULO | Você não está em seu veiculo." ) ;
	ShowPlayerDialog(playerid, 7337, DIALOG_STYLE_LIST, "Menu do Veiculo:", "Estacionar Neste Lugar\nCor do Veiculo\nVender Veiculo\nPlaca Veiculo\nTrancar Portas\nDestrancar Portas\n\n", "Selecionar", "Cancelar");
	return true;
}*/

CMD:meuscarros(playerid){
	new 
		str_pqp[300]

	;
	possui_veh1[playerid] = 0;
	possui_veh2[playerid] = 0;
	possui_veh3[playerid] = 0;
	possui_veh4[playerid] = 0;
	possui_veh5[playerid] = 0;


    format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh1[playerid] = 1;
	}
    format(Celulas, sizeof(Celulas), JFSCON_2, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh2[playerid] = 1;
	}
    format(Celulas, sizeof(Celulas), JFSCON_3, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh3[playerid] = 1;
	}
    format(Celulas, sizeof(Celulas), JFSCON_4, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh4[playerid] = 1;
	}
    format(Celulas, sizeof(Celulas), JFSCON_5, PlayerName(playerid));
	if (DOF2::FileExists(Celulas)){
		possui_veh5[playerid] = 1;
	}




	if(PlayerInfo[playerid][pVIP] == 1 || PlayerInfo[playerid][pVIP] == 2 || PlayerInfo[playerid][pVIP] == 3){

		format(str_pqp, sizeof(str_pqp), "{FA8072}Veiculo 01: {4EEE94}%s\n{FA8072}Veiculo 02: {4EEE94}%s\n{FA8072}Veiculo 03: {4EEE94}%s\n{FA8072}Veiculo 04: {4EEE94}%s\n{FA8072}Veiculo 05: {4EEE94}%s\n",
			possui_veh1[playerid] == 1 ? (SkVeh[JFSCarros[playerid][JFSModelo]-400]) : ("{D4D6D4}Slot Vazio"),
			possui_veh2[playerid] == 1 ? (SkVeh[JFSCarros[playerid][JFSModelo_2]-400]) : ("{D4D6D4}Slot Vazio"),
			possui_veh3[playerid] == 1 ? (SkVeh[JFSCarros[playerid][JFSModelo_3]-400]) : ("{D4D6D4}Slot Vazio"),
			possui_veh4[playerid] == 1 ? (SkVeh[JFSCarros[playerid][JFSModelo_4]-400]) : ("{D4D6D4}Slot Vazio"),
			possui_veh5[playerid] == 1 ? (SkVeh[JFSCarros[playerid][JFSModelo_5]-400]) : ("{D4D6D4}Slot Vazio"))
		;
		ShowPlayerDialog(playerid, DIALOG_MEUSCARROS, DIALOG_STYLE_LIST, "Meus Carros VIP", str_pqp, "Acessar", "Sair");
	}
	else{

		format(str_pqp, sizeof(str_pqp), "{FA8072}Veiculo 01: {4EEE94}%s\n{FA8072}Veiculo 02: {4EEE94}%s\n{FA8072}Veiculo 03: {4EEE94}%s\n",
			possui_veh1[playerid] == 1 ? (SkVeh[JFSCarros[playerid][JFSModelo]-400]) : ("{D4D6D4}Slot Vazio"),
			possui_veh2[playerid] == 1 ? (SkVeh[JFSCarros[playerid][JFSModelo_2]-400]) : ("{D4D6D4}Slot Vazio"),
			possui_veh3[playerid] == 1 ? (SkVeh[JFSCarros[playerid][JFSModelo_3]-400]) : ("{D4D6D4}Slot Vazio"))
		;
		ShowPlayerDialog(playerid, DIALOG_MEUSCARROS, DIALOG_STYLE_LIST, "Meus Carros", str_pqp, "Acessar", "Sair");		
	}
	return 1;
}

CMD:grana(playerid, params[])
{
	GivePlayerMoney(playerid, 50000);
	return true;
}

CMD:localizarveiculo(playerid)
{
    format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
	if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo nesse slot!" ) ;
	JFSCheck[playerid] = 1;
	static Float:CordX, Float:CordY, Float:CordZ;
	GetVehiclePos(JFSID[playerid], CordX, CordY, CordZ);
	SetPlayerCheckpoint (playerid , CordX, CordY, CordZ, 10.0);
 	SendClientMessage(playerid , 0xe34234, "{FA8072}| VEICULO | Seu veículo está marcado no mapa!");
	return true;
}


CMD:localizarveiculo_2(playerid)
{
    format(Celulas, sizeof(Celulas), JFSCON_2, PlayerName(playerid));
	if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo nesse slot!" ) ;
	JFSCheck[playerid] = 1;
	static Float:CordX, Float:CordY, Float:CordZ;
	GetVehiclePos(JFSID_2[playerid], CordX, CordY, CordZ);
	SetPlayerCheckpoint (playerid , CordX, CordY, CordZ, 10.0);
 	SendClientMessage(playerid , 0xe34234, "{FA8072}| VEICULO | Seu veículo está marcado no mapa!");
	return true;
}

CMD:localizarveiculo_3(playerid)
{
    format(Celulas, sizeof(Celulas), JFSCON_3, PlayerName(playerid));
	if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo nesse slot!" ) ;
	JFSCheck[playerid] = 1;
	static Float:CordX, Float:CordY, Float:CordZ;
	GetVehiclePos(JFSID_3[playerid], CordX, CordY, CordZ);
	SetPlayerCheckpoint (playerid , CordX, CordY, CordZ, 10.0);
 	SendClientMessage(playerid , 0xe34234, "{FA8072}| VEICULO | Seu veículo está marcado no mapa!");
	return true;
}

CMD:localizarveiculo_4(playerid)
{
    format(Celulas, sizeof(Celulas), JFSCON_4, PlayerName(playerid));
	if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo nesse slot!" ) ;
	JFSCheck[playerid] = 1;
	static Float:CordX, Float:CordY, Float:CordZ;
	GetVehiclePos(JFSID_4[playerid], CordX, CordY, CordZ);
	SetPlayerCheckpoint (playerid , CordX, CordY, CordZ, 10.0);
 	SendClientMessage(playerid , 0xe34234, "{FA8072}| VEICULO | Seu veículo está marcado no mapa!");
	return true;
}
CMD:localizarveiculo_5(playerid)
{
    format(Celulas, sizeof(Celulas), JFSCON_5, PlayerName(playerid));
	if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo nesse slot!" ) ;
	JFSCheck[playerid] = 1;
	static Float:CordX, Float:CordY, Float:CordZ;
	GetVehiclePos(JFSID_5[playerid], CordX, CordY, CordZ);
	SetPlayerCheckpoint (playerid , CordX, CordY, CordZ, 10.0);
 	SendClientMessage(playerid , 0xe34234, "{FA8072}| VEICULO | Seu veículo está marcado no mapa!");
	return true;
}

hook OnPlayerEnterCheckpoint(playerid){
    DisablePlayerCheckpoint(playerid);
    return 1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	if(dialogid == DIALOG_MEUSCARROS){
		if(!response) return SendClientMessage(playerid, -1, "| VEICULO | Você saiu do menu de seleção dos seus veiculos!");

		if(response){
			switch(listitem){
				case 0:{ // VEH 01
				    format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
					if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo neste slot!" ) ;
					//ShowPlayerDialog(playerid, 7337, DIALOG_STYLE_LIST, "Menu do Veiculo:", "Estacionar Neste Lugar\nCor do Veiculo\nVender Veiculo\nPlaca Veiculo\nTrancar Portas\nDestrancar Portas\n\n", "Selecionar", "Cancelar");
					callcmd::menu_veiculo_1(playerid);
				}
				case 1:{ // veh 2
				    format(Celulas, sizeof(Celulas), JFSCON_2, PlayerName(playerid));
					if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo neste slot!" ) ;		
					callcmd::menu_veiculo_2(playerid);			
				}
				case 2:{ // veh 3
				    format(Celulas, sizeof(Celulas), JFSCON_3, PlayerName(playerid));
					if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo neste slot!" ) ;				
					callcmd::menu_veiculo_3(playerid);
				}
				case 3:{ // SO VIP
					if(PlayerInfo[playerid][pVIP] == 0) return SendClientMessage(playerid, -1, "| VEICULO | Slot de veiculos liberado apenas para jogadores vips!");

				    format(Celulas, sizeof(Celulas), JFSCON_4, PlayerName(playerid));
					if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo neste slot!" ) ;

					callcmd::menu_veiculo_4(playerid);
				}
				case 4:{ // SO VIP
					if(PlayerInfo[playerid][pVIP] == 0) return SendClientMessage(playerid, -1, "| VEICULO | Slot de veiculos liberado apenas para jogadores vips!");

				    format(Celulas, sizeof(Celulas), JFSCON_5, PlayerName(playerid));
					if (!DOF2::FileExists(Celulas)) return SendClientMessage ( playerid , -1 , "{FA8072}| VEICULO | Você não possui um veiculo neste slot!" ) ;

					callcmd::menu_veiculo_5(playerid);
				}

			}
		}
		return 1;
	}
	if(dialogid == 25390){ // MENU VEICULO 1
		if(response){
			switch(listitem){ // SALVAR POSICAO VEH!
				case 0:{
			    	if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
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
					SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Spawn do veiculo alterado! Seu veiculo spawnara aqui a partir de agora!");
					SalvarArquivos(playerid);				
				}	
				case 1:{ // PORTAS >>> 0 = ABERTO 1 = FECHADO
			    	if(JFSCarros[playerid][Portas] == 0){ // aberto
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram trancadas com sucesso!");

			    		JFSCarros[playerid][Portas] = 1;	
			    		SalvarArquivos(playerid);
			    		SetVehicleParamsForPlayer(JFSID[playerid], playerid,0,1);
			    	}
			    	else if(JFSCarros[playerid][Portas] == 1){ // fechado
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram destrancadas com sucesso!");

			    		JFSCarros[playerid][Portas] = 0;	
			    		SalvarArquivos(playerid);
			    		//SetVehicleParamsForPlayer(Veh_PQP[playerid][VehPortasID], playerid,0,0);
			    		SetVehicleParamsForPlayer(JFSID[playerid], playerid,0,0);
			    		
			    		callcmd::menu_veiculo_1(playerid);

			    	}
			    }
			    case 2:{ // capo

			    	if(JFSCarros[playerid][Capo] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID[playerid], mot, lu, alar, JFSCarros[playerid][Portas], VEHICLE_PARAMS_ON, porma, ob);

						JFSCarros[playerid][Capo] = 1;
						SalvarArquivos(playerid);	

						callcmd::menu_veiculo_1(playerid);

					} else if(JFSCarros[playerid][Capo] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID[playerid], mot, lu, alar, JFSCarros[playerid][Portas], VEHICLE_PARAMS_OFF, porma, ob);

						JFSCarros[playerid][Capo] = 0;
						SalvarArquivos(playerid);

						callcmd::menu_veiculo_1(playerid);
					}
			    }
			    case 3:{ // malas

			    	if(JFSCarros[playerid][Malas] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID[playerid], mot, lu, alar, JFSCarros[playerid][Portas], cap, VEHICLE_PARAMS_ON, ob);

						JFSCarros[playerid][Malas] = 1;
						SalvarArquivos(playerid);	

						callcmd::menu_veiculo_1(playerid);

					} else if(JFSCarros[playerid][Malas] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID[playerid], mot, lu, alar, JFSCarros[playerid][Portas], cap, VEHICLE_PARAMS_OFF, ob);

						JFSCarros[playerid][Malas] = 0;
						SalvarArquivos(playerid);

						callcmd::menu_veiculo_1(playerid);
					}

			    }
			    case 4:{ // alarme


			    }	
			    case 5:{ // neon
			    	ShowPlayerDialog(playerid, 15428, DIALOG_STYLE_LIST, "Neon", "Adicionar Neon\n Remover neon", "Aplicar", "Cancelar");
			    }	
			    case 6:{ // localizar veiculo
			    	callcmd::localizarveiculo(playerid);
			    }
			}
		}
		return 1;
	}
	if(dialogid == 25391){ // MENU VEICULO 2
		if(response){
			switch(listitem){ // SALVAR POSICAO VEH!
				case 0:{
			    	if (!IsPlayerInVehicle(playerid, JFSID_2[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
   					new VeiculoID = JFSID_2[playerid];
    				static Float:CordX, Float:CordY, Float:CordZ, Float:Angulo;
 			    	GetVehiclePos(VeiculoID, CordX, CordY, CordZ);
					GetVehicleZAngle(VeiculoID, Angulo);
					JFSCarros[playerid][JFSCorX_2] = CordX;
					JFSCarros[playerid][JFSCorY_2] = CordY;
					JFSCarros[playerid][JFSCorZ_2] = CordZ;
					JFSCarros[playerid][JFSAngulo_2] = Angulo;
			      	DestroyVehicle(VeiculoID);
      				JFSID_2[playerid] = CreateVehicle(JFSCarros[playerid][JFSModelo_2], JFSCarros[playerid][JFSCorX_2], JFSCarros[playerid][JFSCorY_2], JFSCarros[playerid][JFSCorZ_2], JFSCarros[playerid][JFSAngulo_2], JFSCarros[playerid][JFSCor1_2] , JFSCarros[playerid][JFSCor2_2], 0);
    				PutPlayerInVehicle(playerid, JFSID_2[playerid], 0);
					SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Spawn do veiculo alterado! Seu veiculo spawnara aqui a partir de agora!");
					SalvarArquivos_2(playerid);				
				}	
				case 1:{ // PORTAS >>> 0 = ABERTO 1 = FECHADO
			    	if(JFSCarros[playerid][Portas_2] == 0){ // aberto
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram trancadas com sucesso!");

			    		JFSCarros[playerid][Portas_2] = 1;	
			    		SalvarArquivos_2(playerid);
			    		SetVehicleParamsForPlayer(JFSID_2[playerid], playerid,0,1);
			    	}
			    	else if(JFSCarros[playerid][Portas_2] == 1){ // fechado
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram destrancadas com sucesso!");

			    		JFSCarros[playerid][Portas_2] = 0;	
			    		SalvarArquivos_2(playerid);
			    		//SetVehicleParamsForPlayer(Veh_PQP[playerid][VehPortasID], playerid,0,0);
			    		SetVehicleParamsForPlayer(JFSID_2[playerid], playerid,0,0);
			    		
			    		callcmd::menu_veiculo_2(playerid);

			    	}
			    }
			    case 2:{ // capo

			    	if(JFSCarros[playerid][Capo_2] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_2[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_2[playerid], mot, lu, alar, JFSCarros[playerid][Portas_2], VEHICLE_PARAMS_ON, porma, ob);

						JFSCarros[playerid][Capo_2] = 1;
						SalvarArquivos_2(playerid);	

						callcmd::menu_veiculo_2(playerid);

					} else if(JFSCarros[playerid][Capo_2] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_2[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_2[playerid], mot, lu, alar, JFSCarros[playerid][Portas_2], VEHICLE_PARAMS_OFF, porma, ob);

						JFSCarros[playerid][Capo_2] = 0;
						SalvarArquivos_2(playerid);

						callcmd::menu_veiculo_2(playerid);
					}
			    }
			    case 3:{ // malas

			    	if(JFSCarros[playerid][Malas_2] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_2[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_2[playerid], mot, lu, alar, JFSCarros[playerid][Portas_2], cap, VEHICLE_PARAMS_ON, ob);

						JFSCarros[playerid][Malas_2] = 1;
						SalvarArquivos_2(playerid);	

						callcmd::menu_veiculo_2(playerid);

					} else if(JFSCarros[playerid][Malas_2] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_2[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_2[playerid], mot, lu, alar, JFSCarros[playerid][Portas_2], cap, VEHICLE_PARAMS_OFF, ob);

						JFSCarros[playerid][Malas_2] = 0;
						SalvarArquivos_2(playerid);

						callcmd::menu_veiculo_2(playerid);
					}

			    }
			    case 4:{ // alarme


			    }	
			    case 5:{ // neon
			    	ShowPlayerDialog(playerid, 15429, DIALOG_STYLE_LIST, "Remover Neon", "Remover neon do veiculo", "Aplicar", "Cancelar");
			    }	
			    case 6:{ // localizar veiculo
			    	callcmd::localizarveiculo_2(playerid);
			    }
			}
		}
		return 1;
	}
	if(dialogid == 25392){ // MENU VEICULO 3
		if(response){
			switch(listitem){ // SALVAR POSICAO VEH!
				case 0:{
			    	if (!IsPlayerInVehicle(playerid, JFSID_3[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
   					new VeiculoID = JFSID_3[playerid];
    				static Float:CordX, Float:CordY, Float:CordZ, Float:Angulo;
 			    	GetVehiclePos(VeiculoID, CordX, CordY, CordZ);
					GetVehicleZAngle(VeiculoID, Angulo);
					JFSCarros[playerid][JFSCorX_3] = CordX;
					JFSCarros[playerid][JFSCorY_3] = CordY;
					JFSCarros[playerid][JFSCorZ_3] = CordZ;
					JFSCarros[playerid][JFSAngulo_3] = Angulo;
			      	DestroyVehicle(VeiculoID);
      				JFSID_3[playerid] = CreateVehicle(JFSCarros[playerid][JFSModelo_3], JFSCarros[playerid][JFSCorX_3], JFSCarros[playerid][JFSCorY_3], JFSCarros[playerid][JFSCorZ_3], JFSCarros[playerid][JFSAngulo_3], JFSCarros[playerid][JFSCor1_3] , JFSCarros[playerid][JFSCor2_3], 0);
    				PutPlayerInVehicle(playerid, JFSID_3[playerid], 0);
					SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Spawn do veiculo alterado! Seu veiculo spawnara aqui a partir de agora!");
					SalvarArquivos_3(playerid);				
				}	
				case 1:{ // PORTAS >>> 0 = ABERTO 1 = FECHADO
			    	if(JFSCarros[playerid][Portas_3] == 0){ // aberto
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram trancadas com sucesso!");

			    		JFSCarros[playerid][Portas_3] = 1;	
			    		SalvarArquivos_3(playerid);
			    		SetVehicleParamsForPlayer(JFSID_3[playerid], playerid,0,1);
			    	}
			    	else if(JFSCarros[playerid][Portas_3] == 1){ // fechado
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram destrancadas com sucesso!");

			    		JFSCarros[playerid][Portas_3] = 0;	
			    		SalvarArquivos_3(playerid);
			    		//SetVehicleParamsForPlayer(Veh_PQP[playerid][VehPortasID], playerid,0,0);
			    		SetVehicleParamsForPlayer(JFSID_3[playerid], playerid,0,0);
			    		
			    		callcmd::menu_veiculo_3(playerid);

			    	}
			    }
			    case 2:{ // capo

			    	if(JFSCarros[playerid][Capo_3] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_3[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_3[playerid], mot, lu, alar, JFSCarros[playerid][Portas_3], VEHICLE_PARAMS_ON, porma, ob);

						JFSCarros[playerid][Capo_3] = 1;
						SalvarArquivos_3(playerid);	

						callcmd::menu_veiculo_3(playerid);

					} else if(JFSCarros[playerid][Capo_3] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_3[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_3[playerid], mot, lu, alar, JFSCarros[playerid][Portas_3], VEHICLE_PARAMS_OFF, porma, ob);

						JFSCarros[playerid][Capo_3] = 0;
						SalvarArquivos_3(playerid);

						callcmd::menu_veiculo_3(playerid);
					}
			    }
			    case 3:{ // malas

			    	if(JFSCarros[playerid][Malas_3] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_3[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_3[playerid], mot, lu, alar, JFSCarros[playerid][Portas_3], cap, VEHICLE_PARAMS_ON, ob);

						JFSCarros[playerid][Malas_3] = 1;
						SalvarArquivos_3(playerid);	

						callcmd::menu_veiculo_3(playerid);

					} else if(JFSCarros[playerid][Malas_3] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_3[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_3[playerid], mot, lu, alar, JFSCarros[playerid][Portas_3], cap, VEHICLE_PARAMS_OFF, ob);

						JFSCarros[playerid][Malas_3] = 0;
						SalvarArquivos_3(playerid);

						callcmd::menu_veiculo_3(playerid);
					}

			    }
			    case 4:{ // alarme


			    }	
			    case 5:{ // neon
			    	ShowPlayerDialog(playerid, 15430, DIALOG_STYLE_LIST, "Remover Neon", "Remover neon do veiculo", "Aplicar", "Cancelar");
			    }	
			    case 6:{ // localizar veiculo
			    	callcmd::localizarveiculo_3(playerid);
			    }
			}
		}
		return 1;
	}
	if(dialogid == 25393){ // MENU VEICULO 4
		if(response){
			switch(listitem){ // SALVAR POSICAO VEH!
				case 0:{
			    	if (!IsPlayerInVehicle(playerid, JFSID_4[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
   					new VeiculoID = JFSID_4[playerid];
    				static Float:CordX, Float:CordY, Float:CordZ, Float:Angulo;
 			    	GetVehiclePos(VeiculoID, CordX, CordY, CordZ);
					GetVehicleZAngle(VeiculoID, Angulo);
					JFSCarros[playerid][JFSCorX_4] = CordX;
					JFSCarros[playerid][JFSCorY_4] = CordY;
					JFSCarros[playerid][JFSCorZ_4] = CordZ;
					JFSCarros[playerid][JFSAngulo_4] = Angulo;
			      	DestroyVehicle(VeiculoID);
      				JFSID_4[playerid] = CreateVehicle(JFSCarros[playerid][JFSModelo_4], JFSCarros[playerid][JFSCorX_4], JFSCarros[playerid][JFSCorY_4], JFSCarros[playerid][JFSCorZ_4], JFSCarros[playerid][JFSAngulo_4], JFSCarros[playerid][JFSCor1_4] , JFSCarros[playerid][JFSCor2_4], 0);
    				PutPlayerInVehicle(playerid, JFSID_4[playerid], 0);
					SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Spawn do veiculo alterado! Seu veiculo spawnara aqui a partir de agora!");
					SalvarArquivos_4(playerid);				
				}	
				case 1:{ // PORTAS >>> 0 = ABERTO 1 = FECHADO
			    	if(JFSCarros[playerid][Portas_4] == 0){ // aberto
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram trancadas com sucesso!");

			    		JFSCarros[playerid][Portas_4] = 1;	
			    		SalvarArquivos_4(playerid);
			    		SetVehicleParamsForPlayer(JFSID_4[playerid], playerid,0,1);

			    		callcmd::menu_veiculo_4(playerid);
			    	}
			    	else if(JFSCarros[playerid][Portas_4] == 1){ // fechado
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram destrancadas com sucesso!");

			    		JFSCarros[playerid][Portas_4] = 0;	
			    		SalvarArquivos_4(playerid);
			    		//SetVehicleParamsForPlayer(Veh_PQP[playerid][VehPortasID], playerid,0,0);
			    		SetVehicleParamsForPlayer(JFSID_4[playerid], playerid,0,0);
			    		
			    		callcmd::menu_veiculo_4(playerid);

			    	}
			    }
			    case 2:{ // capo

			    	if(JFSCarros[playerid][Capo_4] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_4[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_4[playerid], mot, lu, alar, JFSCarros[playerid][Portas_4], VEHICLE_PARAMS_ON, porma, ob);

						JFSCarros[playerid][Capo_4] = 1;
						SalvarArquivos_4(playerid);	

						callcmd::menu_veiculo_4(playerid);

					} else if(JFSCarros[playerid][Capo_4] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_4[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_4[playerid], mot, lu, alar, JFSCarros[playerid][Portas_4], VEHICLE_PARAMS_OFF, porma, ob);

						JFSCarros[playerid][Capo_4] = 0;
						SalvarArquivos_4(playerid);

						callcmd::menu_veiculo_4(playerid);
					}
			    }
			    case 3:{ // malas

			    	if(JFSCarros[playerid][Malas_4] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_4[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_4[playerid], mot, lu, alar, JFSCarros[playerid][Portas_4], cap, VEHICLE_PARAMS_ON, ob);

						JFSCarros[playerid][Malas_4] = 1;
						SalvarArquivos_4(playerid);	

						callcmd::menu_veiculo_4(playerid);

					} else if(JFSCarros[playerid][Malas_4] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_4[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_4[playerid], mot, lu, alar, JFSCarros[playerid][Portas_4], cap, VEHICLE_PARAMS_OFF, ob);

						JFSCarros[playerid][Malas_4] = 0;
						SalvarArquivos_4(playerid);

						callcmd::menu_veiculo_4(playerid);
					}

			    }
			    case 4:{ // alarme


			    }	
			    case 5:{ // neon
			    	ShowPlayerDialog(playerid, 15431, DIALOG_STYLE_LIST, "Remover Neon", "Remover neon do veiculo", "Aplicar", "Cancelar");
			    }	
			    case 6:{ // localizar veiculo
			    	callcmd::localizarveiculo_4(playerid);
			    }
			}
		}
		return 1;
	}
	if(dialogid == 25394){ // MENU VEICULO 5
		if(response){
			switch(listitem){ // SALVAR POSICAO VEH!
				case 0:{
			    	if (!IsPlayerInVehicle(playerid, JFSID_5[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
   					new VeiculoID = JFSID_5[playerid];
    				static Float:CordX, Float:CordY, Float:CordZ, Float:Angulo;
 			    	GetVehiclePos(VeiculoID, CordX, CordY, CordZ);
					GetVehicleZAngle(VeiculoID, Angulo);
					JFSCarros[playerid][JFSCorX_5] = CordX;
					JFSCarros[playerid][JFSCorY_5] = CordY;
					JFSCarros[playerid][JFSCorZ_5] = CordZ;
					JFSCarros[playerid][JFSAngulo_5] = Angulo;
			      	DestroyVehicle(VeiculoID);
      				JFSID_5[playerid] = CreateVehicle(JFSCarros[playerid][JFSModelo_5], JFSCarros[playerid][JFSCorX_5], JFSCarros[playerid][JFSCorY_5], JFSCarros[playerid][JFSCorZ_5], JFSCarros[playerid][JFSAngulo_5], JFSCarros[playerid][JFSCor1_5] , JFSCarros[playerid][JFSCor2_5], 0);
    				PutPlayerInVehicle(playerid, JFSID_5[playerid], 0);
					SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Spawn do veiculo alterado! Seu veiculo spawnara aqui a partir de agora!");
					SalvarArquivos_5(playerid);				
				}	
				case 1:{ // PORTAS >>> 0 = ABERTO 1 = FECHADO
			    	if(JFSCarros[playerid][Portas_5] == 0){ // aberto
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram trancadas com sucesso!");

			    		JFSCarros[playerid][Portas_5] = 1;	
			    		SalvarArquivos_5(playerid);
			    		SetVehicleParamsForPlayer(JFSID_5[playerid], playerid,0,1);

			    		callcmd::menu_veiculo_5(playerid);
			    	}
			    	else if(JFSCarros[playerid][Portas_5] == 1){ // fechado
			    		SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram destrancadas com sucesso!");

			    		JFSCarros[playerid][Portas_5] = 0;	
			    		SalvarArquivos_5(playerid);
			    		//SetVehicleParamsForPlayer(Veh_PQP[playerid][VehPortasID], playerid,0,0);
			    		SetVehicleParamsForPlayer(JFSID_5[playerid], playerid,0,0);
			    		
			    		callcmd::menu_veiculo_5(playerid);

			    	}
			    }
			    case 2:{ // capo

			    	if(JFSCarros[playerid][Capo_5] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_5[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_5[playerid], mot, lu, alar, JFSCarros[playerid][Portas_5], VEHICLE_PARAMS_ON, porma, ob);

						JFSCarros[playerid][Capo_5] = 1;
						SalvarArquivos_5(playerid);	

						callcmd::menu_veiculo_5(playerid);

					} else if(JFSCarros[playerid][Capo_5] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o capo do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_5[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_5[playerid], mot, lu, alar, JFSCarros[playerid][Portas_5], VEHICLE_PARAMS_OFF, porma, ob);

						JFSCarros[playerid][Capo_5] = 0;
						SalvarArquivos_5(playerid);

						callcmd::menu_veiculo_5(playerid);
					}
			    }
			    case 3:{ // malas

			    	if(JFSCarros[playerid][Malas_5] == 0){
				    	SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce abriu o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_5[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_5[playerid], mot, lu, alar, JFSCarros[playerid][Portas_5], cap, VEHICLE_PARAMS_ON, ob);

						JFSCarros[playerid][Malas_5] = 1;
						SalvarArquivos_5(playerid);	

						callcmd::menu_veiculo_5(playerid);

					} else if(JFSCarros[playerid][Malas_5] == 1){
						SCM(playerid, -1, "{62C1B2}| Veiculo | - Voce fechou o porta malas do seu veiculo!");

				    	new mot, lu, alar, por, cap, porma, ob;
			            GetVehicleParamsEx(JFSID_5[playerid], mot, lu, alar, por, cap, porma, ob);
			            SetVehicleParamsEx(JFSID_5[playerid], mot, lu, alar, JFSCarros[playerid][Portas_5], cap, VEHICLE_PARAMS_OFF, ob);

						JFSCarros[playerid][Malas_5] = 0;
						SalvarArquivos_5(playerid);

						callcmd::menu_veiculo_5(playerid);
					}

			    }
			    case 4:{ // alarme


			    }	
			    case 5:{ // neon
			    	ShowPlayerDialog(playerid, 15432, DIALOG_STYLE_LIST, "Remover Neon", "Remover neon do veiculo", "Aplicar", "Cancelar");
			    }	
			    case 6:{ // localizar veiculo
			    	callcmd::localizarveiculo_5(playerid);
			    }
			}
		}
		return 1;
	}
	if(dialogid == 15428){ // neon carro 1
		if(!response) return 1;

		if(response){
			if(listitem == 0){//colocar neon
				if(JFSCarros[playerid][NeonStatus]	== 0)
					return SendClientMessage(playerid, -1, "| VEICULO | Você não possui neon!");

	            SetPVarInt(playerid, "Status", 1);
	            SetPVarInt(playerid, "neon", CreateObject(JFSCarros[playerid][Neon],0,0,0,0,0,0));
	            SetPVarInt(playerid, "neon1", CreateObject(JFSCarros[playerid][Neon],0,0,0,0,0,0));
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon"), JFSID[playerid], -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon1"), JFSID[playerid], 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	            SendClientMessage(playerid, -1, "| VEICULO | Neon adicionado com sucesso ao seu veiculo!");
			}
            if(listitem == 1) // remover neon
            {
            DestroyObject(GetPVarInt(playerid, "neon"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon1"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon2"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon3"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon4"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon5"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon6"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon7"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon8"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon9"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon10"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon11"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon12"));
            DeletePVar(playerid, "Status");

            //JFSCarros[playerid][Neon] = 0;
            //JFSCarros[playerid][NeonStatus] = 0;

            //SalvarArquivos(playerid);
            callcmd::menu_veiculo_1(playerid);  
            SendClientMessage(playerid, 0xAA3333AA, "| VEICULO | Neon retirado com sucesso.");
        	}
		}
		return 1;
	}
	if(dialogid == 15429){ // neon carro 2
		if(!response) return 1;

		if(response){
			if(listitem == 0){//colocar neon
				if(JFSCarros[playerid][NeonStatus_2]	== 0)
					return SendClientMessage(playerid, -1, "| VEICULO | Você não possui neon!");

	            SetPVarInt(playerid, "Status", 1);
	            SetPVarInt(playerid, "neon", CreateObject(JFSCarros[playerid][Neon_2],0,0,0,0,0,0));
	            SetPVarInt(playerid, "neon1", CreateObject(JFSCarros[playerid][Neon_2],0,0,0,0,0,0));
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon"), JFSID_2[playerid], -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon1"), JFSID_2[playerid], 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);

	            SendClientMessage(playerid, -1, "| VEICULO | Neon adicionado com sucesso ao seu veiculo!");
			}
            if(listitem == 1) // remover neon
            {
            DestroyObject(GetPVarInt(playerid, "neon"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon1"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon2"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon3"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon4"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon5"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon6"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon7"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon8"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon9"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon10"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon11"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon12"));
            DeletePVar(playerid, "Status");

            //JFSCarros[playerid][Neon] = 0;
            //JFSCarros[playerid][NeonStatus] = 0;

            //SalvarArquivos(playerid);
            callcmd::menu_veiculo_2(playerid);  
            SendClientMessage(playerid, 0xAA3333AA, "| VEICULO | Neon retirado com sucesso.");
        	}
		}
		return 1;
	}
	if(dialogid == 15430){ // neon carro 3
		if(!response) return 1;

		if(response){
			if(listitem == 0){//colocar neon
				if(JFSCarros[playerid][NeonStatus_3]	== 0)
					return SendClientMessage(playerid, -1, "| VEICULO | Você não possui neon!");

	            SetPVarInt(playerid, "Status", 1);
	            SetPVarInt(playerid, "neon", CreateObject(JFSCarros[playerid][Neon_3],0,0,0,0,0,0));
	            SetPVarInt(playerid, "neon1", CreateObject(JFSCarros[playerid][Neon_3],0,0,0,0,0,0));
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon"), JFSID_3[playerid], -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon1"), JFSID_3[playerid], 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);

	            SendClientMessage(playerid, -1, "| VEICULO | Neon adicionado com sucesso ao seu veiculo!");
			}
            if(listitem == 1) // remover neon
            {
            DestroyObject(GetPVarInt(playerid, "neon"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon1"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon2"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon3"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon4"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon5"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon6"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon7"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon8"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon9"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon10"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon11"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon12"));
            DeletePVar(playerid, "Status");

            //JFSCarros[playerid][Neon] = 0;
            //JFSCarros[playerid][NeonStatus] = 0;

            //SalvarArquivos(playerid);
           //callcmd::menu_veiculo_3(playerid);  
            SendClientMessage(playerid, 0xAA3333AA, "| VEICULO | Neon retirado com sucesso.");
        	}
		}
		return 1;
	}
	if(dialogid == 15431){ // neon carro 4 
		if(!response) return 1;

		if(response){
			if(listitem == 0){//colocar neon
				if(JFSCarros[playerid][NeonStatus_4]	== 0)
					return SendClientMessage(playerid, -1, "| VEICULO | Você não possui neon!");

	            SetPVarInt(playerid, "Status", 1);
	            SetPVarInt(playerid, "neon", CreateObject(JFSCarros[playerid][Neon],0,0,0,0,0,0));
	            SetPVarInt(playerid, "neon1", CreateObject(JFSCarros[playerid][Neon],0,0,0,0,0,0));
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon"), JFSID_4[playerid], -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon1"), JFSID_4[playerid], 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);

	            SendClientMessage(playerid, -1, "| VEICULO | Neon adicionado com sucesso ao seu veiculo!");
			}
            if(listitem == 1) // remover neon
            {
            DestroyObject(GetPVarInt(playerid, "neon"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon1"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon2"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon3"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon4"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon5"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon6"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon7"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon8"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon9"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon10"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon11"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon12"));
            DeletePVar(playerid, "Status");

            //JFSCarros[playerid][Neon] = 0;
            //JFSCarros[playerid][NeonStatus] = 0;

            //SalvarArquivos(playerid);
            callcmd::menu_veiculo_4(playerid);  
            SendClientMessage(playerid, 0xAA3333AA, "| VEICULO | Neon retirado com sucesso.");
        	}
		}
		return 1;
	}
	if(dialogid == 15432){ // neon carro 5
		if(!response) return 1;

		if(response){
			if(listitem == 0){//colocar neon
				if(JFSCarros[playerid][NeonStatus_5]	== 0)
					return SendClientMessage(playerid, -1, "| VEICULO | Você não possui neon!");

	            SetPVarInt(playerid, "Status", 1);
	            SetPVarInt(playerid, "neon", CreateObject(JFSCarros[playerid][Neon_5],0,0,0,0,0,0));
	            SetPVarInt(playerid, "neon1", CreateObject(JFSCarros[playerid][Neon_5],0,0,0,0,0,0));
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon"), JFSID_5[playerid], -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	            AttachObjectToVehicle(GetPVarInt(playerid, "neon1"), JFSID_5[playerid], 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);

	            SendClientMessage(playerid, -1, "| VEICULO | Neon adicionado com sucesso ao seu veiculo!");
			}
            if(listitem == 1) // remover neon
            {
            DestroyObject(GetPVarInt(playerid, "neon"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon1"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon2"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon3"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon4"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon5"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon6"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon7"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon8"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon9"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon10"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon11"));
            DeletePVar(playerid, "Status");
            DestroyObject(GetPVarInt(playerid, "neon12"));
            DeletePVar(playerid, "Status");

            //JFSCarros[playerid][Neon] = 0;
            //JFSCarros[playerid][NeonStatus] = 0;

            //SalvarArquivos(playerid);
            callcmd::menu_veiculo_5(playerid);  
            SendClientMessage(playerid, 0xAA3333AA, "| VEICULO | Neon retirado com sucesso.");
        	}
		}
		return 1;
	}
  /*	if(dialogid == 7337)
		{
			if(response)
			{
			    if(listitem == 0)
			    {
			    	if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
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
					SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Spawn do veiculo alterado! Seu veiculo spawnara aqui a partir de agora!");
					SalvarArquivos(playerid);
          		}
			    if(listitem == 1)
			    {
			    	if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
			      	ShowPlayerDialog(playerid, 3773, DIALOG_STYLE_INPUT, "Alterar Cor", "DIGITE O ID DA COR 1 DE SEU VEICULO\n\n\n", "Comprar", "Cancelar");
				}
			    if(listitem == 2)
			    {
			    	if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "| VEICULO | Você não está em seu veiculo." ) ;
			    	new ValorVeh;
					ValorVeh =  JFSCarros[playerid][Valor_Car] / 3;		

			      	format(Celulas, sizeof(Celulas), "Vender Veiculo - Seu veiculo será vendido por %d.\n\nCaso queria vender seu veículo, confirme abaixo.\n\n", ValorVeh);
			      	ShowPlayerDialog(playerid, 4217, DIALOG_STYLE_MSGBOX, "Vender Veiculo", Celulas, "Confirmar", "Cancelar");
				}
			    if(listitem == 3)
			    {
			      	ShowPlayerDialog(playerid, 2461, DIALOG_STYLE_INPUT, "Alterar Placa", "DIGITE A PLACA DO SEU VEICULO\n\n", "Trocar", "Cancelar");
				}
			    if(listitem == 4)
			    {
			        GivePlayerMoney(playerid, JFSCarros[playerid][JFSCofre]);
		         	format(Celulas, sizeof(Celulas), "[JFS Concessionária] - Você retirou %d de seu veiculo.", JFSCarros[playerid][JFSCofre]);
		         	SendClientMessage(playerid, -1, Celulas);
			        JFSCarros[playerid][JFSCofre] = 0;
			        SalvarArquivos(playerid);
				}*/
			    /*
			    if(listitem == 4){ // TRANCAR PORTA
			    	if(JFSCarros[playerid][Portas] == 1) return SendClientMessage(playerid, -1, "| VEICULO | Seu veiculo ja esta trancado!");
			    	Veh_PQP[playerid][VehPortasID] = GetPlayerVehicleID(playerid);
			    	SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram trancadas com sucesso!");
			    	SetVehicleParamsForPlayer(GetPlayerVehicleID(playerid), playerid,0,1);
			    	JFSCarros[playerid][Portas] = 1;

			    }
			    if(listitem == 5){ // DESTRANCAR PORTA
			    	if(JFSCarros[playerid][Portas] == 0) return SendClientMessage(playerid, -1, "| VEICULO | Seu veiculo ja esta destrancado!");
			    	SendClientMessage(playerid, -1, "{FA8072}| VEICULO | As portas do seu veículo foram destrancadas com sucesso!");
			    	//SetVehicleParamsForPlayer(Veh_PQP[playerid][VehPortasID], playerid,0,0);
			    	SetVehicleParamsForPlayer(JFSID[playerid], playerid,0,0);
			    	JFSCarros[playerid][Portas] = 0;
			    }
          	}
          	return true;
      }*/
   	/*if(dialogid == 4217)
		{
			if(response)
			{
				if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
			    format(Celulas, sizeof(Celulas), JFSCON, PlayerName(playerid));
			   	DOF2::RemoveFile(Celulas);
			  	DOF2::SaveFile();
			  	DestroyVehicle(JFSID[playerid]);

				new ValorVeh;
				ValorVeh = JFSCarros[playerid][Valor_Car] / 3;

          		CarroJFS[playerid] = 0;
  				RemovePlayerFromVehicle(playerid);
  				format(Celulas, sizeof(Celulas), "{FA8072}| VEICULO | Você vendeu seu veiculo e recebeu %d.", ValorVeh);
  				SendClientMessage(playerid, 0xe34234, Celulas);
  				GivePlayerMoney(playerid, ValorVeh);
			}
          	return true;
      }
   	if(dialogid == 2461)
	    {
			if(response)
			{
				if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
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
				else SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Minimo de 2 caracteres permitidos e maximo de 8 caracteres.");
			}
          	return true;
      }
   	if(dialogid == 3773)
	    {
			if(response)
			{
				if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
       			new VeiculoID = JFSID[playerid];
			    if(!strval(inputtext)) return SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Digite apenas números."), true;
			    if(strval(inputtext) < 0 || strval(inputtext) > 255) return SendClientMessage(playerid, -1, "| VEICULO | Digite cores entre 0 a 255."), true;
                JFSCarros[playerid][JFSCor1] = strval(inputtext);
                ChangeVehicleColor(VeiculoID, JFSCarros[playerid][JFSCor1], -1);
				ShowPlayerDialog(playerid, 7733, DIALOG_STYLE_INPUT, "Alterar Cor", "DIGITE O ID DA COR 1 DE SEU VEICULO\n\n\nPS: As Cores Foram Modificadas na versão 0.3x.", "Comprar", "Cancelar");
          	}
          	return true;
      }
   	if(dialogid == 7733)
	    {
			if(response)
			{
				if (!IsPlayerInVehicle(playerid, JFSID[playerid])) return SendClientMessage (playerid , -1 , "{FA8072}| VEICULO | Você não está em seu veiculo." ) ;
			    new VeiculoID = JFSID[playerid];
			    if(!strval(inputtext)) return SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Digite apenas números."), ShowPlayerDialog(playerid, 7733, DIALOG_STYLE_INPUT, "JFS Concessionária v1.0 - Cor", "DIGITE O ID DA COR 2 DE SEU VEICULO\n\n\nPS: As Cores Foram Modificadas na versão 0.3x.", "Comprar", "Cancelar"), true;
			    if(strval(inputtext) < 0 || strval(inputtext) > 255) return SendClientMessage(playerid, -1, "| VEICULO | Digite cores entre 0 a 255."), ShowPlayerDialog(playerid, 7733, DIALOG_STYLE_INPUT, "JFS Concessionária v1.0 - Cor", "DIGITE O ID DA COR 2 DE SEU VEICULO\n\n\nPS: As Cores Foram Modificadas na versão 0.3x.", "Comprar", "Cancelar"), true;
                JFSCarros[playerid][JFSCor2] = strval(inputtext);
                ChangeVehicleColor(VeiculoID, JFSCarros[playerid][JFSCor1], JFSCarros[playerid][JFSCor2]);
                SendClientMessage(playerid, -1, "{FA8072}| VEICULO | Cores definidas com sucesso!");
                SalvarArquivos(playerid);
          	}
          	else ShowPlayerDialog(playerid, 7733, DIALOG_STYLE_INPUT, "Alterar Cor", "DIGITE O ID DA COR 2 DE SEU VEICULO\n\n\n.", "Alterar", "Cancelar");
          	return true;
      }*/
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
        			if(JFSCarros[carro][Alarme] == 1){
		         		format(Celulas, sizeof(Celulas), "{FA8072}| VEICULO | Este veículo é de %s e possui alarme!", JFSCarros[carro][JFSDono]);
		         		SendClientMessage(playerid, 0xe34234, Celulas);

					    SetVehicleParams(JFSID[carro], 2, 1);
					    SetTimerEx("DesligarAlarmeCar", 80000, false, "d", JFSID[carro]);		         		
		         	}
		         	else if(JFSCarros[carro][Alarme] == 0){
		         		format(Celulas, sizeof(Celulas), "{FA8072}| VEICULO | Este veículo é de %s e não possui alarme!", JFSCarros[carro][JFSDono]);
		         		SendClientMessage(playerid, 0xe34234, Celulas);
		         	}
        		}
        		
        		if(JFSID[carro] == GetPlayerVehicleID(playerid) && !strcmp(PlayerName(playerid), JFSCarros[carro][JFSDono], true))
        		{
	         		SendClientMessage(playerid, 0xe34234, "{FA8072}| VEICULO | Bem Vindo ao seu veiculo! Para modificar seu veículo, digite: /menuveiculo");
        		}
        	}
	    }
    	return true;
}

hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys){
 	if(PRESSED(KEY_NO)){
		callcmd::meuscarros(playerid);
		SendClientMessageToAll(-1, "| VEICULO | Voce abriu o painel dos seus veiculos!");
	}
	return 1;
}