LoadTextDraws()
{
        /* =========================================================================
                            Carregar TextDraws
    ===========================================================================*/

    DistanceCaca = TextDrawCreate(50.000000, 282.000000, "Distancia");
    TextDrawBackgroundColor(DistanceCaca, 255);
    TextDrawFont(DistanceCaca, 0);
    TextDrawLetterSize(DistanceCaca, 0.500000, 1.000000);
    TextDrawColor(DistanceCaca, -1);
    TextDrawSetOutline(DistanceCaca, 1);
    TextDrawSetProportional(DistanceCaca, 1);
    TextDrawSetSelectable(DistanceCaca, 0);

    TextAreas = TextDrawCreate(25.000000, 310.000000, "/carregar"); ///13.000000, 429.000000
    TextDrawBackgroundColor(TextAreas, -741355521);
    TextDrawFont(TextAreas, 1);
    TextDrawLetterSize(TextAreas, 0.290000, 1.700000);
    TextDrawColor(TextAreas, -802608641);
    TextDrawSetOutline(TextAreas, 1);
    TextDrawSetProportional(TextAreas, 1);
    TextDrawSetSelectable(TextAreas, 0);

    TextParamedicos = TextDrawCreate(148.000000, 376.000000, "Curando...");
    TextDrawBackgroundColor(TextParamedicos, 255);
    TextDrawFont(TextParamedicos, 1);
    TextDrawLetterSize(TextParamedicos, 0.250000, 0.899999);
    TextDrawColor(TextParamedicos, -1);
    TextDrawSetOutline(TextParamedicos, 0);
    TextDrawSetProportional(TextParamedicos, 1);
    TextDrawSetShadow(TextParamedicos, 1);
    TextDrawUseBox(TextParamedicos, 1);
    TextDrawBoxColor(TextParamedicos, 255);
    TextDrawTextSize(TextParamedicos, 212.399993, 0.000000);
    TextDrawSetSelectable(TextParamedicos, 0);

    // Anuncios
    Anuncios = TextDrawCreate(557.000000, 8.000000, "Logou no servidor");
    TextDrawAlignment(Anuncios, 3);
    TextDrawBackgroundColor(Anuncios, 255);
    TextDrawFont(Anuncios, 2);
    TextDrawLetterSize(Anuncios, 0.220000, 1.300000);
    TextDrawColor(Anuncios, -1);
    TextDrawSetOutline(Anuncios, 1);
    TextDrawSetProportional(Anuncios, 1);
    TextDrawSetSelectable(Anuncios, 0);

    Objetivo[0] = TextDrawCreate(445.000000, 379.000000, "~n~");
    TextDrawBackgroundColor(Objetivo[0], 255);
    TextDrawFont(Objetivo[0], 1);
    TextDrawLetterSize(Objetivo[0], 0.500000, 3.799999);
    TextDrawColor(Objetivo[0], -1);
    TextDrawSetOutline(Objetivo[0], 0);
    TextDrawSetProportional(Objetivo[0], 1);
    TextDrawSetShadow(Objetivo[0], 1);
    TextDrawUseBox(Objetivo[0], 1);
    TextDrawBoxColor(Objetivo[0], 0xFF000055);
    TextDrawTextSize(Objetivo[0], 211.000000, 0.000000);
    TextDrawSetSelectable(Objetivo[0], 0);


    Objetivo[1] = TextDrawCreate(229.000000, 383.000000, "Texto.");
    TextDrawBackgroundColor(Objetivo[1], 255);
    TextDrawFont(Objetivo[1], 1);
    TextDrawLetterSize(Objetivo[1], 0.209999, 1.200000);
    TextDrawColor(Objetivo[1], -1);
    TextDrawSetOutline(Objetivo[1], 0);
    TextDrawSetProportional(Objetivo[1], 1);
    TextDrawSetShadow(Objetivo[1], 1);
    TextDrawSetSelectable(Objetivo[1], 0);

   //Prisao

    TimerPH[0] = TextDrawCreate(42.000000, 295.000000, "_");
    TextDrawBackgroundColor(TimerPH[0], 255);
    TextDrawFont(TimerPH[0], 1);
    TextDrawLetterSize(TimerPH[0], 0.500000, 2.899998);
    TextDrawColor(TimerPH[0], -1);
    TextDrawSetOutline(TimerPH[0], 0);
    TextDrawSetProportional(TimerPH[0], 1);
    TextDrawSetShadow(TimerPH[0], 1);
    TextDrawUseBox(TimerPH[0], 1);
    TextDrawBoxColor(TimerPH[0], 153);
    TextDrawTextSize(TimerPH[0], 119.000000, 0.000000);
    TextDrawSetSelectable(TimerPH[0], 0);

    TimerPH[1] = TextDrawCreate(40.000000, 280.000000, "Tempo Restante:");
    TextDrawBackgroundColor(TimerPH[1], 255);
    TextDrawFont(TimerPH[1], 1);
    TextDrawLetterSize(TimerPH[1], 0.250000, 1.299999);
    TextDrawColor(TimerPH[1], -1);
    TextDrawSetOutline(TimerPH[1], 1);
    TextDrawSetProportional(TimerPH[1], 1);
    TextDrawSetSelectable(TimerPH[1], 0);

    TimerPH[2] = TextDrawCreate(47.000000, 296.000000, "ld_grav:timer");
    TextDrawBackgroundColor(TimerPH[2], 255);
    TextDrawFont(TimerPH[2], 4);
    TextDrawLetterSize(TimerPH[2], 0.500000, 1.000000);
    TextDrawColor(TimerPH[2], -1);
    TextDrawSetOutline(TimerPH[2], 0);
    TextDrawSetProportional(TimerPH[2], 1);
    TextDrawSetShadow(TimerPH[2], 1);
    TextDrawUseBox(TimerPH[2], 1);
    TextDrawBoxColor(TimerPH[2], 255);
    TextDrawTextSize(TimerPH[2], 19.000000, 19.000000);
    TextDrawSetSelectable(TimerPH[2], 0);

    //  Seleçao de Skin                                  "<              "
    TSkinSelect0 = TextDrawCreate(60.000000, 197.000000, "<              ");//"< Seta Esquerda");
    TextDrawBackgroundColor(TSkinSelect0, 255);
    TextDrawFont(TSkinSelect0, 2);
    TextDrawLetterSize(TSkinSelect0, 0.369999, 2.700000);
    TextDrawColor(TSkinSelect0, -1);
    TextDrawSetOutline(TSkinSelect0, 0);
    TextDrawSetProportional(TSkinSelect0, 1);
    TextDrawSetShadow(TSkinSelect0, 1);
    TextDrawUseBox(TSkinSelect0, 1);
    TextDrawBoxColor(TSkinSelect0, 255);
    TextDrawTextSize(TSkinSelect0, 204.000000, 10.000000);
    TextDrawSetSelectable(TSkinSelect0, 1);
                                                         // "             >"
    TSkinSelect1 = TextDrawCreate(410.000000, 197.000000, "             >");//"Seta Direita >");
    TextDrawBackgroundColor(TSkinSelect1, 255);
    TextDrawFont(TSkinSelect1, 2);
    TextDrawLetterSize(TSkinSelect1, 0.369999, 2.700000);
    TextDrawColor(TSkinSelect1, -1);
    TextDrawSetOutline(TSkinSelect1, 0);
    TextDrawSetProportional(TSkinSelect1, 1);
    TextDrawSetShadow(TSkinSelect1, 1);
    TextDrawUseBox(TSkinSelect1, 1);
    TextDrawBoxColor(TSkinSelect1, 255);
    TextDrawTextSize(TSkinSelect1, 544.000000, 10.000000);
    TextDrawSetSelectable(TSkinSelect1, 1);

    TSkinSelect2 = TextDrawCreate(200.000000, 401.000000, "Clique   aqui   para   escolher");
    TextDrawBackgroundColor(TSkinSelect2, 255);
    TextDrawFont(TSkinSelect2, 1);
    TextDrawLetterSize(TSkinSelect2, 0.500000, 1.800000);
    TextDrawColor(TSkinSelect2, -1);
    TextDrawSetOutline(TSkinSelect2, 0);
    TextDrawSetProportional(TSkinSelect2, 1);
    TextDrawSetShadow(TSkinSelect2, 1);
    TextDrawUseBox(TSkinSelect2, 1);
    TextDrawBoxColor(TSkinSelect2, 865856767);
    TextDrawTextSize(TSkinSelect2, 442.000000, 0.000000);
    TextDrawSetSelectable(TSkinSelect2, 1);
    //Logo

	BPSBRO[0] = TextDrawCreate(-13.301607, 425.083496, "");
	TextDrawLetterSize(BPSBRO[0], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[0], 64.000000, 36.000000);
	TextDrawAlignment(BPSBRO[0], 1);
	TextDrawColor(BPSBRO[0], 8249599);
	TextDrawSetShadow(BPSBRO[0], 0);
	TextDrawSetOutline(BPSBRO[0], 0);
	TextDrawBackgroundColor(BPSBRO[0], 0);
	TextDrawFont(BPSBRO[0], 5);
	TextDrawSetProportional(BPSBRO[0], 0);
	TextDrawSetShadow(BPSBRO[0], 0);
	TextDrawSetPreviewModel(BPSBRO[0], 19377);
	TextDrawSetPreviewRot(BPSBRO[0], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[1] = TextDrawCreate(34.019035, 429.166839, "");
	TextDrawLetterSize(BPSBRO[1], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[1], 58.000000, 35.000000);
	TextDrawAlignment(BPSBRO[1], 1);
	TextDrawColor(BPSBRO[1], 8249599);
	TextDrawSetShadow(BPSBRO[1], 0);
	TextDrawSetOutline(BPSBRO[1], 0);
	TextDrawBackgroundColor(BPSBRO[1], 0);
	TextDrawFont(BPSBRO[1], 5);
	TextDrawSetProportional(BPSBRO[1], 0);
	TextDrawSetShadow(BPSBRO[1], 0);
	TextDrawSetPreviewModel(BPSBRO[1], 19377);
	TextDrawSetPreviewRot(BPSBRO[1], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[2] = TextDrawCreate(37.298683, 439.666931, "");
	TextDrawLetterSize(BPSBRO[2], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[2], 169.000000, 40.000000);
	TextDrawAlignment(BPSBRO[2], 1);
	TextDrawColor(BPSBRO[2], 8249599);
	TextDrawSetShadow(BPSBRO[2], 0);
	TextDrawSetOutline(BPSBRO[2], 0);
	TextDrawBackgroundColor(BPSBRO[2], 0);
	TextDrawFont(BPSBRO[2], 5);
	TextDrawSetProportional(BPSBRO[2], 0);
	TextDrawSetShadow(BPSBRO[2], 0);
	TextDrawSetPreviewModel(BPSBRO[2], 19377);
	TextDrawSetPreviewRot(BPSBRO[2], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[3] = TextDrawCreate(137.562210, 439.666992, "");
	TextDrawLetterSize(BPSBRO[3], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[3], 169.000000, 40.000000);
	TextDrawAlignment(BPSBRO[3], 1);
	TextDrawColor(BPSBRO[3], 8249599);
	TextDrawSetShadow(BPSBRO[3], 0);
	TextDrawSetOutline(BPSBRO[3], 0);
	TextDrawBackgroundColor(BPSBRO[3], 0);
	TextDrawFont(BPSBRO[3], 5);
	TextDrawSetProportional(BPSBRO[3], 0);
	TextDrawSetShadow(BPSBRO[3], 0);
	TextDrawSetPreviewModel(BPSBRO[3], 19377);
	TextDrawSetPreviewRot(BPSBRO[3], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[4] = TextDrawCreate(236.888717, 439.666961, "");
	TextDrawLetterSize(BPSBRO[4], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[4], 169.000000, 40.000000);
	TextDrawAlignment(BPSBRO[4], 1);
	TextDrawColor(BPSBRO[4], 8249599);
	TextDrawSetShadow(BPSBRO[4], 0);
	TextDrawSetOutline(BPSBRO[4], 0);
	TextDrawBackgroundColor(BPSBRO[4], 0);
	TextDrawFont(BPSBRO[4], 5);
	TextDrawSetProportional(BPSBRO[4], 0);
	TextDrawSetShadow(BPSBRO[4], 0);
	TextDrawSetPreviewModel(BPSBRO[4], 19377);
	TextDrawSetPreviewRot(BPSBRO[4], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[5] = TextDrawCreate(337.152313, 439.667022, "");
	TextDrawLetterSize(BPSBRO[5], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[5], 169.000000, 40.000000);
	TextDrawAlignment(BPSBRO[5], 1);
	TextDrawColor(BPSBRO[5], 8249599);
	TextDrawSetShadow(BPSBRO[5], 0);
	TextDrawSetOutline(BPSBRO[5], 0);
	TextDrawBackgroundColor(BPSBRO[5], 0);
	TextDrawFont(BPSBRO[5], 5);
	TextDrawSetProportional(BPSBRO[5], 0);
	TextDrawSetShadow(BPSBRO[5], 0);
	TextDrawSetPreviewModel(BPSBRO[5], 19377);
	TextDrawSetPreviewRot(BPSBRO[5], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[6] = TextDrawCreate(436.479003, 439.667022, "");
	TextDrawLetterSize(BPSBRO[6], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[6], 169.000000, 40.000000);
	TextDrawAlignment(BPSBRO[6], 1);
	TextDrawColor(BPSBRO[6], 8249599);
	TextDrawSetShadow(BPSBRO[6], 0);
	TextDrawSetOutline(BPSBRO[6], 0);
	TextDrawBackgroundColor(BPSBRO[6], 0);
	TextDrawFont(BPSBRO[6], 5);
	TextDrawSetProportional(BPSBRO[6], 0);
	TextDrawSetShadow(BPSBRO[6], 0);
	TextDrawSetPreviewModel(BPSBRO[6], 19377);
	TextDrawSetPreviewRot(BPSBRO[6], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[7] = TextDrawCreate(531.120422, 440.250335, "");
	TextDrawLetterSize(BPSBRO[7], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[7], 169.000000, 40.000000);
	TextDrawAlignment(BPSBRO[7], 1);
	TextDrawColor(BPSBRO[7], 8249599);
	TextDrawSetShadow(BPSBRO[7], 0);
	TextDrawSetOutline(BPSBRO[7], 0);
	TextDrawBackgroundColor(BPSBRO[7], 0);
	TextDrawFont(BPSBRO[7], 5);
	TextDrawSetProportional(BPSBRO[7], 0);
	TextDrawSetShadow(BPSBRO[7], 0);
	TextDrawSetPreviewModel(BPSBRO[7], 19377);
	TextDrawSetPreviewRot(BPSBRO[7], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[8] = TextDrawCreate(587.811401, 425.083648, "");
	TextDrawLetterSize(BPSBRO[8], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[8], 65.000000, 35.000000);
	TextDrawAlignment(BPSBRO[8], 1);
	TextDrawColor(BPSBRO[8], 8249599);
	TextDrawSetShadow(BPSBRO[8], 0);
	TextDrawSetOutline(BPSBRO[8], 0);
	TextDrawBackgroundColor(BPSBRO[8], 0);
	TextDrawFont(BPSBRO[8], 5);
	TextDrawSetProportional(BPSBRO[8], 0);
	TextDrawSetShadow(BPSBRO[8], 0);
	TextDrawSetPreviewModel(BPSBRO[8], 19377);
	TextDrawSetPreviewRot(BPSBRO[8], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[9] = TextDrawCreate(17.621046, 427.417083, "");
	TextDrawLetterSize(BPSBRO[9], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[9], 105.000000, 23.000000);
	TextDrawAlignment(BPSBRO[9], 1);
	TextDrawColor(BPSBRO[9], 336860415);
	TextDrawSetShadow(BPSBRO[9], 0);
	TextDrawSetOutline(BPSBRO[9], 0);
	TextDrawBackgroundColor(BPSBRO[9], 0);
	TextDrawFont(BPSBRO[9], 5);
	TextDrawSetProportional(BPSBRO[9], 0);
	TextDrawSetShadow(BPSBRO[9], 0);
	TextDrawSetPreviewModel(BPSBRO[9], 19377);
	TextDrawSetPreviewRot(BPSBRO[9], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[10] = TextDrawCreate(77.591751, 427.417053, "");
	TextDrawLetterSize(BPSBRO[10], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[10], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[10], 1);
	TextDrawColor(BPSBRO[10], 336860415);
	TextDrawSetShadow(BPSBRO[10], 0);
	TextDrawSetOutline(BPSBRO[10], 0);
	TextDrawBackgroundColor(BPSBRO[10], 0);
	TextDrawFont(BPSBRO[10], 5);
	TextDrawSetProportional(BPSBRO[10], 0);
	TextDrawSetShadow(BPSBRO[10], 0);
	TextDrawSetPreviewModel(BPSBRO[10], 19377);
	TextDrawSetPreviewRot(BPSBRO[10], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[11] = TextDrawCreate(130.066116, 427.416961, "");
	TextDrawLetterSize(BPSBRO[11], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[11], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[11], 1);
	TextDrawColor(BPSBRO[11], 336860415);
	TextDrawSetShadow(BPSBRO[11], 0);
	TextDrawSetOutline(BPSBRO[11], 0);
	TextDrawBackgroundColor(BPSBRO[11], 0);
	TextDrawFont(BPSBRO[11], 5);
	TextDrawSetProportional(BPSBRO[11], 0);
	TextDrawSetShadow(BPSBRO[11], 0);
	TextDrawSetPreviewModel(BPSBRO[11], 19377);
	TextDrawSetPreviewRot(BPSBRO[11], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[12] = TextDrawCreate(180.197875, 427.416992, "");
	TextDrawLetterSize(BPSBRO[12], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[12], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[12], 1);
	TextDrawColor(BPSBRO[12], 336860415);
	TextDrawSetShadow(BPSBRO[12], 0);
	TextDrawSetOutline(BPSBRO[12], 0);
	TextDrawBackgroundColor(BPSBRO[12], 0);
	TextDrawFont(BPSBRO[12], 5);
	TextDrawSetProportional(BPSBRO[12], 0);
	TextDrawSetShadow(BPSBRO[12], 0);
	TextDrawSetPreviewModel(BPSBRO[12], 19377);
	TextDrawSetPreviewRot(BPSBRO[12], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[13] = TextDrawCreate(230.329635, 427.417053, "");
	TextDrawLetterSize(BPSBRO[13], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[13], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[13], 1);
	TextDrawColor(BPSBRO[13], 336860415);
	TextDrawSetShadow(BPSBRO[13], 0);
	TextDrawSetOutline(BPSBRO[13], 0);
	TextDrawBackgroundColor(BPSBRO[13], 0);
	TextDrawFont(BPSBRO[13], 5);
	TextDrawSetProportional(BPSBRO[13], 0);
	TextDrawSetShadow(BPSBRO[13], 0);
	TextDrawSetPreviewModel(BPSBRO[13], 19377);
	TextDrawSetPreviewRot(BPSBRO[13], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[14] = TextDrawCreate(280.930053, 427.417114, "");
	TextDrawLetterSize(BPSBRO[14], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[14], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[14], 1);
	TextDrawColor(BPSBRO[14], 336860415);
	TextDrawSetShadow(BPSBRO[14], 0);
	TextDrawSetOutline(BPSBRO[14], 0);
	TextDrawBackgroundColor(BPSBRO[14], 0);
	TextDrawFont(BPSBRO[14], 5);
	TextDrawSetProportional(BPSBRO[14], 0);
	TextDrawSetShadow(BPSBRO[14], 0);
	TextDrawSetPreviewModel(BPSBRO[14], 19377);
	TextDrawSetPreviewRot(BPSBRO[14], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[15] = TextDrawCreate(332.467559, 427.417083, "");
	TextDrawLetterSize(BPSBRO[15], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[15], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[15], 1);
	TextDrawColor(BPSBRO[15], 336860415);
	TextDrawSetShadow(BPSBRO[15], 0);
	TextDrawSetOutline(BPSBRO[15], 0);
	TextDrawBackgroundColor(BPSBRO[15], 0);
	TextDrawFont(BPSBRO[15], 5);
	TextDrawSetProportional(BPSBRO[15], 0);
	TextDrawSetShadow(BPSBRO[15], 0);
	TextDrawSetPreviewModel(BPSBRO[15], 19377);
	TextDrawSetPreviewRot(BPSBRO[15], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[16] = TextDrawCreate(384.004974, 427.417114, "");
	TextDrawLetterSize(BPSBRO[16], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[16], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[16], 1);
	TextDrawColor(BPSBRO[16], 336860415);
	TextDrawSetShadow(BPSBRO[16], 0);
	TextDrawSetOutline(BPSBRO[16], 0);
	TextDrawBackgroundColor(BPSBRO[16], 0);
	TextDrawFont(BPSBRO[16], 5);
	TextDrawSetProportional(BPSBRO[16], 0);
	TextDrawSetShadow(BPSBRO[16], 0);
	TextDrawSetPreviewModel(BPSBRO[16], 19377);
	TextDrawSetPreviewRot(BPSBRO[16], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[17] = TextDrawCreate(436.479248, 427.417175, "");
	TextDrawLetterSize(BPSBRO[17], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[17], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[17], 1);
	TextDrawColor(BPSBRO[17], 336860415);
	TextDrawSetShadow(BPSBRO[17], 0);
	TextDrawSetOutline(BPSBRO[17], 0);
	TextDrawBackgroundColor(BPSBRO[17], 0);
	TextDrawFont(BPSBRO[17], 5);
	TextDrawSetProportional(BPSBRO[17], 0);
	TextDrawSetShadow(BPSBRO[17], 0);
	TextDrawSetPreviewModel(BPSBRO[17], 19377);
	TextDrawSetPreviewRot(BPSBRO[17], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[18] = TextDrawCreate(486.611145, 427.417205, "");
	TextDrawLetterSize(BPSBRO[18], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[18], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[18], 1);
	TextDrawColor(BPSBRO[18], 336860415);
	TextDrawSetShadow(BPSBRO[18], 0);
	TextDrawSetOutline(BPSBRO[18], 0);
	TextDrawBackgroundColor(BPSBRO[18], 0);
	TextDrawFont(BPSBRO[18], 5);
	TextDrawSetProportional(BPSBRO[18], 0);
	TextDrawSetShadow(BPSBRO[18], 0);
	TextDrawSetPreviewModel(BPSBRO[18], 19377);
	TextDrawSetPreviewRot(BPSBRO[18], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[19] = TextDrawCreate(531.589233, 427.417205, "");
	TextDrawLetterSize(BPSBRO[19], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[19], 88.000000, 23.000000);
	TextDrawAlignment(BPSBRO[19], 1);
	TextDrawColor(BPSBRO[19], 336860415);
	TextDrawSetShadow(BPSBRO[19], 0);
	TextDrawSetOutline(BPSBRO[19], 0);
	TextDrawBackgroundColor(BPSBRO[19], 0);
	TextDrawFont(BPSBRO[19], 5);
	TextDrawSetProportional(BPSBRO[19], 0);
	TextDrawSetShadow(BPSBRO[19], 0);
	TextDrawSetPreviewModel(BPSBRO[19], 19377);
	TextDrawSetPreviewRot(BPSBRO[19], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[20] = TextDrawCreate(38.704246, 430.333526, "");
	TextDrawLetterSize(BPSBRO[20], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[20], 18.000000, 16.000000);
	TextDrawAlignment(BPSBRO[20], 1);
	TextDrawColor(BPSBRO[20], 8249599);
	TextDrawSetShadow(BPSBRO[20], 0);
	TextDrawSetOutline(BPSBRO[20], 0);
	TextDrawBackgroundColor(BPSBRO[20], 0);
	TextDrawFont(BPSBRO[20], 5);
	TextDrawSetProportional(BPSBRO[20], 0);
	TextDrawSetShadow(BPSBRO[20], 0);
	TextDrawSetPreviewModel(BPSBRO[20], 19377);
	TextDrawSetPreviewRot(BPSBRO[20], 0.000000, 37.000000, 90.000000, 1.000000);

	BPSBRO[21] = TextDrawCreate(45.263538, 438.500427, "");
	TextDrawLetterSize(BPSBRO[21], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[21], 18.000000, 16.000000);
	TextDrawAlignment(BPSBRO[21], 1);
	TextDrawColor(BPSBRO[21], 8249599);
	TextDrawSetShadow(BPSBRO[21], 0);
	TextDrawSetOutline(BPSBRO[21], 0);
	TextDrawBackgroundColor(BPSBRO[21], 0);
	TextDrawFont(BPSBRO[21], 5);
	TextDrawSetProportional(BPSBRO[21], 0);
	TextDrawSetShadow(BPSBRO[21], 0);
	TextDrawSetPreviewModel(BPSBRO[21], 19377);
	TextDrawSetPreviewRot(BPSBRO[21], 0.000000, 37.000000, 90.000000, 1.000000);

	BPSBRO[22] = TextDrawCreate(575.161010, 430.333770, "");
	TextDrawLetterSize(BPSBRO[22], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[22], 18.000000, 17.000000);
	TextDrawAlignment(BPSBRO[22], 1);
	TextDrawColor(BPSBRO[22], 8249599);
	TextDrawSetShadow(BPSBRO[22], 0);
	TextDrawSetOutline(BPSBRO[22], 0);
	TextDrawBackgroundColor(BPSBRO[22], 0);
	TextDrawFont(BPSBRO[22], 5);
	TextDrawSetProportional(BPSBRO[22], 0);
	TextDrawSetShadow(BPSBRO[22], 0);
	TextDrawSetPreviewModel(BPSBRO[22], 19377);
	TextDrawSetPreviewRot(BPSBRO[22], 0.000000, -37.000000, 90.000000, 1.000000);

	BPSBRO[23] = TextDrawCreate(568.601623, 438.500549, "");
	TextDrawLetterSize(BPSBRO[23], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[23], 18.000000, 17.000000);
	TextDrawAlignment(BPSBRO[23], 1);
	TextDrawColor(BPSBRO[23], 8249599);
	TextDrawSetShadow(BPSBRO[23], 0);
	TextDrawSetOutline(BPSBRO[23], 0);
	TextDrawBackgroundColor(BPSBRO[23], 0);
	TextDrawFont(BPSBRO[23], 5);
	TextDrawSetProportional(BPSBRO[23], 0);
	TextDrawSetShadow(BPSBRO[23], 0);
	TextDrawSetPreviewModel(BPSBRO[23], 19377);
	TextDrawSetPreviewRot(BPSBRO[23], 0.000000, -37.000000, 90.000000, 1.000000);

	BPSBRO[24] = TextDrawCreate(546.112915, 440.250305, "");
	TextDrawLetterSize(BPSBRO[24], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[24], 65.000000, 35.000000);
	TextDrawAlignment(BPSBRO[24], 1);
	TextDrawColor(BPSBRO[24], 8249599);
	TextDrawSetShadow(BPSBRO[24], 0);
	TextDrawSetOutline(BPSBRO[24], 0);
	TextDrawBackgroundColor(BPSBRO[24], 0);
	TextDrawFont(BPSBRO[24], 5);
	TextDrawSetProportional(BPSBRO[24], 0);
	TextDrawSetShadow(BPSBRO[24], 0);
	TextDrawSetPreviewModel(BPSBRO[24], 19377);
	TextDrawSetPreviewRot(BPSBRO[24], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[25] = TextDrawCreate(-3.931180, 425.083496, "");
	TextDrawLetterSize(BPSBRO[25], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[25], 65.000000, 36.000000);
	TextDrawAlignment(BPSBRO[25], 1);
	TextDrawColor(BPSBRO[25], 8249599);
	TextDrawSetShadow(BPSBRO[25], 0);
	TextDrawSetOutline(BPSBRO[25], 0);
	TextDrawBackgroundColor(BPSBRO[25], 0);
	TextDrawFont(BPSBRO[25], 5);
	TextDrawSetProportional(BPSBRO[25], 0);
	TextDrawSetShadow(BPSBRO[25], 0);
	TextDrawSetPreviewModel(BPSBRO[25], 19377);
	TextDrawSetPreviewRot(BPSBRO[25], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[26] = TextDrawCreate(570.475952, 425.083496, "");
	TextDrawLetterSize(BPSBRO[26], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[26], 65.000000, 36.000000);
	TextDrawAlignment(BPSBRO[26], 1);
	TextDrawColor(BPSBRO[26], 8249599);
	TextDrawSetShadow(BPSBRO[26], 0);
	TextDrawSetOutline(BPSBRO[26], 0);
	TextDrawBackgroundColor(BPSBRO[26], 0);
	TextDrawFont(BPSBRO[26], 5);
	TextDrawSetProportional(BPSBRO[26], 0);
	TextDrawSetShadow(BPSBRO[26], 0);
	TextDrawSetPreviewModel(BPSBRO[26], 19377);
	TextDrawSetPreviewRot(BPSBRO[26], 0.000000, 0.000000, 90.000000, 1.000000);

	BPSBRO[27] = TextDrawCreate(14.383680, 429.166503, "~r~BPS");
	TextDrawLetterSize(BPSBRO[27], 0.352678, 1.681665);
	TextDrawAlignment(BPSBRO[27], 1);
	TextDrawColor(BPSBRO[27], 286331391);
	TextDrawSetShadow(BPSBRO[27], 0);
	TextDrawSetOutline(BPSBRO[27], 0);
	TextDrawBackgroundColor(BPSBRO[27], 255);
	TextDrawFont(BPSBRO[27], 2);
	TextDrawSetProportional(BPSBRO[27], 1);
	TextDrawSetShadow(BPSBRO[27], 0);

	BPSBRO[28] = TextDrawCreate(35.907836, 433.249786, "~r~[]");
	TextDrawLetterSize(BPSBRO[28], 0.132474, 0.474166);
	TextDrawAlignment(BPSBRO[28], 1);
	TextDrawColor(BPSBRO[28], 286331391);
	TextDrawSetShadow(BPSBRO[28], 0);
	TextDrawSetOutline(BPSBRO[28], 0);
	TextDrawBackgroundColor(BPSBRO[28], 255);
	TextDrawFont(BPSBRO[28], 2);
	TextDrawSetProportional(BPSBRO[28], 1);
	TextDrawSetShadow(BPSBRO[28], 0);

	BPSBRO[29] = TextDrawCreate(38.250442, 437.333221, "~r~[]");
	TextDrawLetterSize(BPSBRO[29], 0.132474, 0.474166);
	TextDrawAlignment(BPSBRO[29], 1);
	TextDrawColor(BPSBRO[29], 286331391);
	TextDrawSetShadow(BPSBRO[29], 0);
	TextDrawSetOutline(BPSBRO[29], 0);
	TextDrawBackgroundColor(BPSBRO[29], 255);
	TextDrawFont(BPSBRO[29], 2);
	TextDrawSetProportional(BPSBRO[29], 1);
	TextDrawSetShadow(BPSBRO[29], 0);

	BPSBRO[30] = TextDrawCreate(22.104034, 440.833251, "~r~RPG");
	TextDrawLetterSize(BPSBRO[30], 0.144655, 0.666665);
	TextDrawAlignment(BPSBRO[30], 1);
	TextDrawColor(BPSBRO[30], -1);
	TextDrawSetShadow(BPSBRO[30], 0);
	TextDrawSetOutline(BPSBRO[30], 0);
	TextDrawBackgroundColor(BPSBRO[30], 255);
	TextDrawFont(BPSBRO[30], 2);
	TextDrawSetProportional(BPSBRO[30], 1);
	TextDrawSetShadow(BPSBRO[30], 0);

	BPSBRO[31] = TextDrawCreate(600.629455, 430.333251, "~r~BETA");
	TextDrawLetterSize(BPSBRO[31], 0.264126, 1.471665);
	TextDrawAlignment(BPSBRO[31], 1);
	TextDrawColor(BPSBRO[31], 286331391);
	TextDrawSetShadow(BPSBRO[31], 0);
	TextDrawSetOutline(BPSBRO[31], 0);
	TextDrawBackgroundColor(BPSBRO[31], 255);
	TextDrawFont(BPSBRO[31], 1);
	TextDrawSetProportional(BPSBRO[31], 1);
	TextDrawSetShadow(BPSBRO[31], 0);

	BPSBRO[32] = TextDrawCreate(598.755554, 440.833282, "~r~VERSION");
	TextDrawLetterSize(BPSBRO[32], 0.144655, 0.666665);
	TextDrawAlignment(BPSBRO[32], 1);
	TextDrawColor(BPSBRO[32], -1);
	TextDrawSetShadow(BPSBRO[32], 0);
	TextDrawSetOutline(BPSBRO[32], 0);
	TextDrawBackgroundColor(BPSBRO[32], 255);
	TextDrawFont(BPSBRO[32], 2);
	TextDrawSetProportional(BPSBRO[32], 1);
	TextDrawSetShadow(BPSBRO[32], 0);

	BPSBRO[33] = TextDrawCreate(149.275390, 414.583343, "");
	TextDrawLetterSize(BPSBRO[33], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[33], 58.000000, 100.000000);
	TextDrawAlignment(BPSBRO[33], 1);
	TextDrawColor(BPSBRO[33], 8249599);
	TextDrawSetShadow(BPSBRO[33], 0);
	TextDrawSetOutline(BPSBRO[33], 0);
	TextDrawBackgroundColor(BPSBRO[33], 0);
	TextDrawFont(BPSBRO[33], 5);
	TextDrawSetProportional(BPSBRO[33], 0);
	TextDrawSetShadow(BPSBRO[33], 0);
	TextDrawSetPreviewModel(BPSBRO[33], 19377);
	TextDrawSetPreviewRot(BPSBRO[33], 0.000000, 45.000000, 0.000000, 1.000000);

	BPSBRO[34] = TextDrawCreate(456.625335, 414.583343, "");
	TextDrawLetterSize(BPSBRO[34], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[34], 58.000000, 100.000000);
	TextDrawAlignment(BPSBRO[34], 1);
	TextDrawColor(BPSBRO[34], 8249599);
	TextDrawSetShadow(BPSBRO[34], 0);
	TextDrawSetOutline(BPSBRO[34], 0);
	TextDrawBackgroundColor(BPSBRO[34], 0);
	TextDrawFont(BPSBRO[34], 5);
	TextDrawSetProportional(BPSBRO[34], 0);
	TextDrawSetShadow(BPSBRO[34], 0);
	TextDrawSetPreviewModel(BPSBRO[34], 19377);
	TextDrawSetPreviewRot(BPSBRO[34], 0.000000, 45.000000, 0.000000, 1.000000);

	BPSBRO[35] = TextDrawCreate(62.767280, 434.999877, "");
	TextDrawLetterSize(BPSBRO[35], 0.144655, 0.789165);
	TextDrawAlignment(BPSBRO[35], 1);
	TextDrawColor(BPSBRO[35], -1);
	TextDrawSetShadow(BPSBRO[35], 0);
	TextDrawSetOutline(BPSBRO[35], 0);
	TextDrawBackgroundColor(BPSBRO[35], 255);
	TextDrawFont(BPSBRO[35], 2);
	TextDrawSetProportional(BPSBRO[35], 1);
	TextDrawSetShadow(BPSBRO[35], 0);


	BPSBRO[36] = TextDrawCreate(110.087913, 434.999877, "");
	TextDrawLetterSize(BPSBRO[36], 0.144655, 0.789165);
	TextDrawAlignment(BPSBRO[36], 1);
	TextDrawColor(BPSBRO[36], -1);
	TextDrawSetShadow(BPSBRO[36], 0);
	TextDrawSetOutline(BPSBRO[36], 0);
	TextDrawBackgroundColor(BPSBRO[36], 255);
	TextDrawFont(BPSBRO[36], 2);
	TextDrawSetProportional(BPSBRO[36], 1);
	TextDrawSetShadow(BPSBRO[36], 0);

	BPSBRO[37] = TextDrawCreate(491.464752, 434.999816, " ");
	TextDrawLetterSize(BPSBRO[37], 0.144655, 0.789165);
	TextDrawAlignment(BPSBRO[37], 1);
	TextDrawColor(BPSBRO[37], -1);
	TextDrawSetShadow(BPSBRO[37], 0);
	TextDrawSetOutline(BPSBRO[37], 0);
	TextDrawBackgroundColor(BPSBRO[37], 255);
	TextDrawFont(BPSBRO[37], 2);
	TextDrawSetProportional(BPSBRO[37], 1);
	TextDrawSetShadow(BPSBRO[37], 0);

	BPSBRO[38] = TextDrawCreate(536.911376, 434.999816, " ");
	TextDrawLetterSize(BPSBRO[38], 0.144655, 0.789165);
	TextDrawAlignment(BPSBRO[38], 1);
	TextDrawColor(BPSBRO[38], -1);
	TextDrawSetShadow(BPSBRO[38], 0);
	TextDrawSetOutline(BPSBRO[38], 0);
	TextDrawBackgroundColor(BPSBRO[38], 255);
	TextDrawFont(BPSBRO[38], 2);
	TextDrawSetProportional(BPSBRO[38], 1);
	TextDrawSetShadow(BPSBRO[38], 0);

	BPSBRO[39] = TextDrawCreate(477.708892, 435.000030, "ld_grav:timer");
	TextDrawLetterSize(BPSBRO[39], 0.000000, 0.000000);
	TextDrawTextSize(BPSBRO[39], 8.000000, 9.000000);
	TextDrawAlignment(BPSBRO[39], 1);
	TextDrawColor(BPSBRO[39], -1);
	TextDrawSetShadow(BPSBRO[39], 0);
	TextDrawSetOutline(BPSBRO[39], 0);
	TextDrawBackgroundColor(BPSBRO[39], 255);
	TextDrawFont(BPSBRO[39], 4);
	TextDrawSetProportional(BPSBRO[39], 0);
	TextDrawSetShadow(BPSBRO[39], 0);

	BPSBRO[40] = TextDrawCreate(532.694091, 99.583030, "");
	TextDrawLetterSize(BPSBRO[40], 0.0009032, 0.000499);
	TextDrawAlignment(BPSBRO[40], 1);
	TextDrawColor(BPSBRO[40], -1);
	TextDrawSetShadow(BPSBRO[40], 0);
	TextDrawSetOutline(BPSBRO[40], 0);
	TextDrawBackgroundColor(BPSBRO[40], 255);
	TextDrawFont(BPSBRO[40], 2);
	TextDrawSetProportional(BPSBRO[40], 1);
	TextDrawSetShadow(BPSBRO[40], 0);

	BPSBRO[41] = TextDrawCreate(318.111083, 434.416473, "~r~                          []BRASIL PLAY STYLE[]                                ");
	TextDrawLetterSize(BPSBRO[41], 0.154493, 0.824163);
	TextDrawAlignment(BPSBRO[41], 2);
	TextDrawColor(BPSBRO[41], -1);
	TextDrawSetShadow(BPSBRO[41], 0);
	TextDrawSetOutline(BPSBRO[41], 0);
	TextDrawBackgroundColor(BPSBRO[41], 255);
	TextDrawFont(BPSBRO[41], 2);
	TextDrawSetProportional(BPSBRO[41], 1);
	TextDrawSetShadow(BPSBRO[41], 0);
}


LoadPlayerTextDraws(playerid)
{
      // == Radar
    Radar[playerid][0] = TextDrawCreate(65.000000, 292.000000, "Radar");
    TextDrawBackgroundColor(Radar[playerid][0], 255);
    TextDrawFont(Radar[playerid][0], 2);
    TextDrawLetterSize(Radar[playerid][0], 0.300000, 2.000000);
    TextDrawColor(Radar[playerid][0], -16776961);
    TextDrawSetOutline(Radar[playerid][0], 0);
    TextDrawSetProportional(Radar[playerid][0], 1);
    TextDrawSetShadow(Radar[playerid][0], 1);
    TextDrawSetSelectable(Radar[playerid][0], 0);

    Radar[playerid][1] = TextDrawCreate(60.000000, 310.000000, "Limite 80 km");
    TextDrawBackgroundColor(Radar[playerid][1], 255);
    TextDrawFont(Radar[playerid][1], 2);
    TextDrawLetterSize(Radar[playerid][1], 0.190000, 1.399999);
    TextDrawColor(Radar[playerid][1], -1);
    TextDrawSetOutline(Radar[playerid][1], 1);
    TextDrawSetProportional(Radar[playerid][1], 1);
    TextDrawSetSelectable(Radar[playerid][1], 0);

    Radar[playerid][2] = TextDrawCreate(49.000000, 323.000000, "Velocidade: 120 km");
    TextDrawBackgroundColor(Radar[playerid][2], 255);
    TextDrawFont(Radar[playerid][2], 2);
    TextDrawLetterSize(Radar[playerid][2], 0.190000, 1.399999);
    TextDrawColor(Radar[playerid][2], -1);
    TextDrawSetOutline(Radar[playerid][2], 1);
    TextDrawSetProportional(Radar[playerid][2], 1);
    TextDrawSetSelectable(Radar[playerid][2], 0);

    Radar[playerid][3] = TextDrawCreate(82.000000, 295.000000, "New Textdraw");
    TextDrawBackgroundColor(Radar[playerid][3], -256);
    TextDrawFont(Radar[playerid][3], 5);
    TextDrawLetterSize(Radar[playerid][3], 0.500000, 1.000000);
    TextDrawColor(Radar[playerid][3], -1);
    TextDrawSetOutline(Radar[playerid][3], 1);
    TextDrawSetProportional(Radar[playerid][3], 1);
    TextDrawUseBox(Radar[playerid][3], 1);
    TextDrawBoxColor(Radar[playerid][3], -256);
    TextDrawTextSize(Radar[playerid][3], 74.000000, 30.000000);
    TextDrawSetPreviewModel(Radar[playerid][3], 18880);
    TextDrawSetPreviewRot(Radar[playerid][3], -16.000000, 0.000000, -55.000000, 1.000000);
    TextDrawSetSelectable(Radar[playerid][3], 0);

    Radar[playerid][4] = TextDrawCreate(286.000000, 163.000000, "Multa");
    TextDrawBackgroundColor(Radar[playerid][4], 255);
    TextDrawFont(Radar[playerid][4], 3);
    TextDrawLetterSize(Radar[playerid][4], 0.500000, 4.099999);
    TextDrawColor(Radar[playerid][4], -16776961);
    TextDrawSetOutline(Radar[playerid][4], 0);
    TextDrawSetProportional(Radar[playerid][4], 1);
    TextDrawSetShadow(Radar[playerid][4], 1);
    TextDrawSetSelectable(Radar[playerid][4], 0);

    Radar[playerid][5] = TextDrawCreate(241.000000, 203.000000, "Excesso de velocidade");
    TextDrawBackgroundColor(Radar[playerid][5], 255);
    TextDrawFont(Radar[playerid][5], 3);
    TextDrawLetterSize(Radar[playerid][5], 0.400000, 2.099999);
    TextDrawColor(Radar[playerid][5], -16776961);
    TextDrawSetOutline(Radar[playerid][5], 0);
    TextDrawSetProportional(Radar[playerid][5], 1);
    TextDrawSetShadow(Radar[playerid][5], 1);
    TextDrawSetSelectable(Radar[playerid][5], 0);

    Radar[playerid][6] = TextDrawCreate(2.000000, 2.000000, "_");
    TextDrawBackgroundColor(Radar[playerid][6], 255);
    TextDrawFont(Radar[playerid][6], 2);
    TextDrawLetterSize(Radar[playerid][6], 0.490000, 50.099998);
    TextDrawColor(Radar[playerid][6], -1);
    TextDrawSetOutline(Radar[playerid][6], 0);
    TextDrawSetProportional(Radar[playerid][6], 1);
    TextDrawSetShadow(Radar[playerid][6], 1);
    TextDrawUseBox(Radar[playerid][6], 1);
    TextDrawBoxColor(Radar[playerid][6], -1);
    TextDrawTextSize(Radar[playerid][6], 638.000000, 60.000000);
    TextDrawSetSelectable(Radar[playerid][6], 0);


    //entrada
    Entrada[0][playerid] = CreatePlayerTextDraw(playerid,282.000000, 100.000000, "~y~L~w~ife~y~V~w~irtual");
    PlayerTextDrawBackgroundColor(playerid,Entrada[0][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[0][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[0][playerid], 0.430000, 2.399999);
    PlayerTextDrawColor(playerid,Entrada[0][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[0][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[0][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[0][playerid], 0);

    Entrada[1][playerid] = CreatePlayerTextDraw(playerid,406.000000, 112.000000, "_"); // box fundo
    PlayerTextDrawBackgroundColor(playerid,Entrada[1][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[1][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[1][playerid], -0.389999, 22.400007);
    PlayerTextDrawColor(playerid,Entrada[1][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[1][playerid], 0);
    PlayerTextDrawSetProportional(playerid,Entrada[1][playerid], 1);
    PlayerTextDrawSetShadow(playerid,Entrada[1][playerid], 1);
    PlayerTextDrawUseBox(playerid,Entrada[1][playerid], 1);
    PlayerTextDrawBoxColor(playerid,Entrada[1][playerid], 102);
    PlayerTextDrawTextSize(playerid,Entrada[1][playerid], 230.000000, 41.000000);
    PlayerTextDrawSetSelectable(playerid,Entrada[1][playerid], 0);

    Entrada[2][playerid] = CreatePlayerTextDraw(playerid,329.000000, 115.000000, "~r~Mobile");
    PlayerTextDrawBackgroundColor(playerid,Entrada[2][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[2][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[2][playerid], 0.279999, 1.399999);
    PlayerTextDrawColor(playerid,Entrada[2][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[2][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[2][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[2][playerid], 0);

    Entrada[3][playerid] = CreatePlayerTextDraw(playerid,328.000000, 124.000000, "_"); //risco no mobile
    PlayerTextDrawBackgroundColor(playerid,Entrada[3][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[3][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[3][playerid], -0.179999, -0.199992);
    PlayerTextDrawColor(playerid,Entrada[3][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[3][playerid], 0);
    PlayerTextDrawSetProportional(playerid,Entrada[3][playerid], 1);
    PlayerTextDrawSetShadow(playerid,Entrada[3][playerid], 1);
    PlayerTextDrawUseBox(playerid,Entrada[3][playerid], 1);
    PlayerTextDrawBoxColor(playerid,Entrada[3][playerid], -16776961);
    PlayerTextDrawTextSize(playerid,Entrada[3][playerid], 362.000000, -18.000000);
    PlayerTextDrawSetSelectable(playerid,Entrada[3][playerid], 0);

    Entrada[4][playerid] = CreatePlayerTextDraw(playerid,275.000000, 315.000000, "_"); // risco de baixo
    PlayerTextDrawBackgroundColor(playerid,Entrada[4][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[4][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[4][playerid], -0.179999, -0.199992);
    PlayerTextDrawColor(playerid,Entrada[4][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[4][playerid], 0);
    PlayerTextDrawSetProportional(playerid,Entrada[4][playerid], 1);
    PlayerTextDrawSetShadow(playerid,Entrada[4][playerid], 1);
    PlayerTextDrawUseBox(playerid,Entrada[4][playerid], 1);
    PlayerTextDrawBoxColor(playerid,Entrada[4][playerid], -16776961);
    PlayerTextDrawTextSize(playerid,Entrada[4][playerid], 362.000000, -18.000000);
    PlayerTextDrawSetSelectable(playerid,Entrada[4][playerid], 0);

    Entrada[5][playerid] = CreatePlayerTextDraw(playerid, 290.000000, 297.000000, "_"); // caixa registrar / logar
    PlayerTextDrawBackgroundColor(playerid,Entrada[5][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[5][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[5][playerid], 0.519999, 1.200000);
    PlayerTextDrawColor(playerid,Entrada[5][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[5][playerid], 0);
    PlayerTextDrawSetProportional(playerid,Entrada[5][playerid], 1);
    PlayerTextDrawSetShadow(playerid,Entrada[5][playerid], 1);
    PlayerTextDrawUseBox(playerid,Entrada[5][playerid], 1);
    PlayerTextDrawBoxColor(playerid,Entrada[5][playerid], -1306385665);
    PlayerTextDrawTextSize(playerid,Entrada[5][playerid], 342.000000, 32.000000);
    PlayerTextDrawSetSelectable(playerid,Entrada[5][playerid], 0);

    Entrada[6][playerid] = CreatePlayerTextDraw(playerid,293.000000, 138.000000, "BEM VINDO");
    PlayerTextDrawBackgroundColor(playerid,Entrada[6][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[6][playerid], 2);
    PlayerTextDrawLetterSize(playerid,Entrada[6][playerid], 0.230000, 1.299999);
    PlayerTextDrawColor(playerid,Entrada[6][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[6][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[6][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[6][playerid], 0);

    Entrada[7][playerid] = CreatePlayerTextDraw(playerid,255.000000, 277.000000, "Voce ainda nao tem uma conta registrada");
    PlayerTextDrawAlignment(playerid,Entrada[7][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[7][playerid], 2);
    PlayerTextDrawLetterSize(playerid,Entrada[7][playerid], 0.139999, 1.000000);
    PlayerTextDrawColor(playerid,Entrada[7][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[7][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[7][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[7][playerid], 0);


    Entrada[8][playerid] = CreatePlayerTextDraw(playerid,317.000000, 296.000000, "REGISTRAR");
    PlayerTextDrawAlignment(playerid,Entrada[8][playerid], 2);
    PlayerTextDrawBackgroundColor(playerid,Entrada[8][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[8][playerid], 2);
    PlayerTextDrawLetterSize(playerid,Entrada[8][playerid], 0.170000, 1.400000);
    PlayerTextDrawColor(playerid,Entrada[8][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[8][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[8][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[8][playerid], 1);
    PlayerTextDrawTextSize(playerid,Entrada[8][playerid], 30.000000, 32.000000);
    //PlayerTextDrawTextSize(playerid,Entrada[8][playerid], 10.000000, 54.000000);


    Entrada[9][playerid] = CreatePlayerTextDraw(playerid,263.000000, 176.000000, "Usuario");
    PlayerTextDrawBackgroundColor(playerid,Entrada[9][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[9][playerid], 2);
    PlayerTextDrawLetterSize(playerid,Entrada[9][playerid], 0.180000, 0.899999);
    PlayerTextDrawColor(playerid,Entrada[9][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[9][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[9][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[9][playerid], 0);

    Entrada[10][playerid] = CreatePlayerTextDraw(playerid,264.000000, 211.000000, "senha");
    PlayerTextDrawBackgroundColor(playerid,Entrada[10][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[10][playerid], 2);
    PlayerTextDrawLetterSize(playerid,Entrada[10][playerid], 0.180000, 0.899999);
    PlayerTextDrawColor(playerid,Entrada[10][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[10][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[10][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[10][playerid], 0);

    Entrada[11][playerid] = CreatePlayerTextDraw(playerid,265.000000, 189.000000, "_"); // box usuario
    PlayerTextDrawBackgroundColor(playerid,Entrada[11][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[11][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[11][playerid], -0.179999, 1.200007);
    PlayerTextDrawColor(playerid,Entrada[11][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[11][playerid], 0);
    PlayerTextDrawSetProportional(playerid,Entrada[11][playerid], 1);
    PlayerTextDrawSetShadow(playerid,Entrada[11][playerid], 1);
    PlayerTextDrawUseBox(playerid,Entrada[11][playerid], 1);
    PlayerTextDrawBoxColor(playerid,Entrada[11][playerid], -1306385665);
    PlayerTextDrawTextSize(playerid,Entrada[11][playerid], 371.000000, 33.000000);
    PlayerTextDrawSetSelectable(playerid,Entrada[11][playerid], 0);

    Entrada[12][playerid] = CreatePlayerTextDraw(playerid,265.000000, 223.000000, "_"); // box senha
    PlayerTextDrawBackgroundColor(playerid,Entrada[12][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[12][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[12][playerid], -0.179999, 1.200007);
    PlayerTextDrawColor(playerid,Entrada[12][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[12][playerid], 0);
    PlayerTextDrawSetProportional(playerid,Entrada[12][playerid], 1);
    PlayerTextDrawSetShadow(playerid,Entrada[12][playerid], 1);
    PlayerTextDrawUseBox(playerid,Entrada[12][playerid], 1);
    PlayerTextDrawBoxColor(playerid,Entrada[12][playerid], -1306385665);
    PlayerTextDrawTextSize(playerid,Entrada[12][playerid], 371.000000, 33.000000);
    PlayerTextDrawSetSelectable(playerid,Entrada[12][playerid], 0);

    Entrada[13][playerid] = CreatePlayerTextDraw(playerid,318.000000, 188.000000, "STNN"); //nome alterar
    PlayerTextDrawAlignment(playerid,Entrada[13][playerid], 2);
    PlayerTextDrawBackgroundColor(playerid,Entrada[13][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[13][playerid], 2);
    PlayerTextDrawLetterSize(playerid,Entrada[13][playerid], 0.180000, 1.099999);
    PlayerTextDrawColor(playerid,Entrada[13][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[13][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[13][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[13][playerid], 0);

    Entrada[14][playerid] = CreatePlayerTextDraw(playerid,318.000000, 222.000000, "----"); // senha alterar
    PlayerTextDrawAlignment(playerid,Entrada[14][playerid], 2);
    PlayerTextDrawBackgroundColor(playerid,Entrada[14][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[14][playerid], 2);
    PlayerTextDrawLetterSize(playerid,Entrada[14][playerid], 0.180000, 1.099999);
    PlayerTextDrawColor(playerid,Entrada[14][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[14][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[14][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[14][playerid], 1);
    PlayerTextDrawTextSize(playerid,Entrada[14][playerid], 10.000000, 40.000000); //40.000000, 20.000000

    Entrada[15][playerid] = CreatePlayerTextDraw(playerid,320.000000, 146.000000, "-"); // risco baixo
    PlayerTextDrawAlignment(playerid,Entrada[15][playerid], 2);
    PlayerTextDrawBackgroundColor(playerid,Entrada[15][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[15][playerid], 2);
    PlayerTextDrawLetterSize(playerid,Entrada[15][playerid], 4.989997, 1.099999);
    PlayerTextDrawColor(playerid,Entrada[15][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[15][playerid], 1);
    PlayerTextDrawSetProportional(playerid,Entrada[15][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,Entrada[15][playerid], 0);

 /*   Entrada[16][playerid] = CreatePlayerTextDraw(playerid,234.000000, 292.000000, "_");
    PlayerTextDrawBackgroundColor(playerid,Entrada[16][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[16][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[16][playerid], 0.500000, -0.200000);
    PlayerTextDrawColor(playerid,Entrada[16][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[16][playerid], 0);
    PlayerTextDrawSetProportional(playerid,Entrada[16][playerid], 1);
    PlayerTextDrawSetShadow(playerid,Entrada[16][playerid], 1);
    PlayerTextDrawUseBox(playerid,Entrada[16][playerid], 1);
    PlayerTextDrawBoxColor(playerid,Entrada[16][playerid], -16776961);
    PlayerTextDrawTextSize(playerid,Entrada[16][playerid], 402.000000, 30.000000);
    PlayerTextDrawSetSelectable(playerid,Entrada[16][playerid], 0);

    Entrada[17][playerid] = CreatePlayerTextDraw(playerid,234.000000, 132.000000, "_");
    PlayerTextDrawBackgroundColor(playerid,Entrada[17][playerid], 255);
    PlayerTextDrawFont(playerid,Entrada[17][playerid], 1);
    PlayerTextDrawLetterSize(playerid,Entrada[17][playerid], 0.500000, -0.200000);
    PlayerTextDrawColor(playerid,Entrada[17][playerid], -1);
    PlayerTextDrawSetOutline(playerid,Entrada[17][playerid], 0);
    PlayerTextDrawSetProportional(playerid,Entrada[17][playerid], 1);
    PlayerTextDrawSetShadow(playerid,Entrada[17][playerid], 1);
    PlayerTextDrawUseBox(playerid,Entrada[17][playerid], 1);
    PlayerTextDrawBoxColor(playerid,Entrada[17][playerid], -16776961);
    PlayerTextDrawTextSize(playerid,Entrada[17][playerid], 402.000000, 30.000000);
    PlayerTextDrawSetSelectable(playerid,Entrada[17][playerid], 0); */


    // Bomba
	BombAssalt[ 0 ][ playerid ] = CreatePlayerTextDraw(playerid,62.000000, 305.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,BombAssalt[ 0 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,BombAssalt[ 0 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,BombAssalt[ 0 ][ playerid ], 0.500000, 2.599998);
	PlayerTextDrawColor(playerid,BombAssalt[ 0 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,BombAssalt[ 0 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,BombAssalt[ 0 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,BombAssalt[ 0 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,BombAssalt[ 0 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,BombAssalt[ 0 ][ playerid ], -1);
	PlayerTextDrawTextSize(playerid,BombAssalt[ 0 ][ playerid ], 126.000000, 0.000000);

	BombAssalt[ 1 ][ playerid ] = CreatePlayerTextDraw(playerid,83.000000, 305.000000, "00");
	PlayerTextDrawBackgroundColor(playerid,BombAssalt[ 1 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,BombAssalt[ 1 ][ playerid ], 2);
	PlayerTextDrawLetterSize(playerid,BombAssalt[ 1 ][ playerid ], 0.490000, 2.200000);
	PlayerTextDrawColor(playerid,BombAssalt[ 1 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,BombAssalt[ 1 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,BombAssalt[ 1 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,BombAssalt[ 1 ][ playerid ], 1);

	BombAssalt[ 2 ][ playerid ] = CreatePlayerTextDraw(playerid,64.000000, 306.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,BombAssalt[ 2 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,BombAssalt[ 2 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,BombAssalt[ 2 ][ playerid ], 0.500000, 2.400000);
	PlayerTextDrawColor(playerid,BombAssalt[ 2 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,BombAssalt[ 2 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,BombAssalt[ 2 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,BombAssalt[ 2 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,BombAssalt[ 2 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,BombAssalt[ 2 ][ playerid ], 255);
	PlayerTextDrawTextSize(playerid,BombAssalt[ 2 ][ playerid ], 125.000000, 0.000000);

	BombAssalt[ 3 ][ playerid ] = CreatePlayerTextDraw(playerid,47.000000, 300.000000, "ld_grav:timer");
	PlayerTextDrawBackgroundColor(playerid,BombAssalt[ 3 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,BombAssalt[ 3 ][ playerid ], 4);
	PlayerTextDrawLetterSize(playerid,BombAssalt[ 3 ][ playerid ], 1.960000, 6.899999);
	PlayerTextDrawColor(playerid,BombAssalt[ 3 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,BombAssalt[ 3 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,BombAssalt[ 3 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,BombAssalt[ 3 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,BombAssalt[ 3 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,BombAssalt[ 3 ][ playerid ], 255);
	PlayerTextDrawTextSize(playerid,BombAssalt[ 3 ][ playerid ], 30.000000, 30.000000);

    Date[ playerid ] = TextDrawCreate(582.000000, 1.000000, "~w~14~y~:~w~10");
    TextDrawBackgroundColor(Date[ playerid ], 255);
    TextDrawFont(Date[ playerid ], 2);
    TextDrawLetterSize(Date[ playerid ], 0.329998, 2.200000);
    TextDrawColor(Date[ playerid ], -1);
    TextDrawSetOutline(Date[ playerid ], 1);
    TextDrawSetProportional(Date[ playerid ], 1);

	TextVida[ 3 ][ playerid ] = CreatePlayerTextDraw(playerid,569.000000, 55.000000, "100"); // alterei esqueda 569

	PlayerTextDrawBackgroundColor(playerid,TextVida[ 3 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TextVida[ 3 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TextVida[ 3 ][ playerid ], 0.200000, 0.799999);
	PlayerTextDrawColor(playerid,TextVida[ 3 ][ playerid ], -178496257);
	PlayerTextDrawSetOutline(playerid,TextVida[ 3 ][ playerid ], 1);
	PlayerTextDrawSetProportional(playerid,TextVida[ 3 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,TextVida[ 3 ][ playerid ], 0);


	TextVida[ 0 ][ playerid ] = CreatePlayerTextDraw(playerid, 370.000000,396.000000,"_");

	PlayerTextDrawTextSize(playerid, TextVida[ 0 ][ playerid ],645.000000,1.000000);
	PlayerTextDrawAlignment(playerid, TextVida[ 0 ][ playerid ],0);
	PlayerTextDrawFont(playerid, TextVida[ 0 ][ playerid ],3);
	PlayerTextDrawLetterSize(playerid, TextVida[ 0 ][ playerid ],0.490000,1.130000);
	PlayerTextDrawColor(playerid, TextVida[ 0 ][ playerid ],0xffffffff);
	PlayerTextDrawSetOutline(playerid, TextVida[ 0 ][ playerid ],1);
	PlayerTextDrawSetProportional(playerid, TextVida[ 0 ][ playerid ],1);
	PlayerTextDrawSetShadow(playerid, TextVida[ 0 ][ playerid ],1);

	TextVida[ 1 ][ playerid ] = CreatePlayerTextDraw(playerid, 554.00000,66.20000, "_"); // alterei esquerda 575

	PlayerTextDrawFont(playerid, TextVida[ 1 ][ playerid ], 2);
	PlayerTextDrawColor(playerid, TextVida[ 1 ][ playerid ], -1);
	PlayerTextDrawLetterSize(playerid, TextVida[ 1 ][ playerid ], 0.220000, 0.880000);
 	PlayerTextDrawSetOutline(playerid, TextVida[ 1 ][ playerid ], 1);
  	PlayerTextDrawSetProportional(playerid, TextVida[ 1 ][ playerid ], 1);
  	PlayerTextDrawAlignment(playerid, TextVida[ 1 ][ playerid ], 2);
  	PlayerTextDrawBackgroundColor(playerid, TextVida[ 1 ][ playerid ], 0x00000065);
  	PlayerTextDrawSetShadow(playerid, TextVida[ 1 ][ playerid ], 1);

    //Text Colete
  	TextVida[ 2 ][ playerid ] = CreatePlayerTextDraw(playerid, 554.00000,45.00000, "_");

	PlayerTextDrawFont(playerid, TextVida[ 2 ][ playerid ], 2);
	PlayerTextDrawColor(playerid, TextVida[ 2 ][ playerid ], -1);
	PlayerTextDrawLetterSize(playerid, TextVida[ 2 ][ playerid ], 0.220000, 0.880000);
 	PlayerTextDrawSetOutline(playerid, TextVida[ 2 ][ playerid ], 1);
  	PlayerTextDrawSetProportional(playerid, TextVida[ 2 ][ playerid ], 1);
  	PlayerTextDrawAlignment(playerid, TextVida[ 2 ][ playerid ], 2);
  	PlayerTextDrawBackgroundColor(playerid, TextVida[ 2 ][ playerid ], 0x00000065);
  	PlayerTextDrawSetShadow(playerid, TextVida[ 2 ][ playerid ], 1);

	//Sistema de Cameras
	CamsTextTwo[ playerid ][0] = CreatePlayerTextDraw(playerid, 629.200073, 13.446672, "usebox");
	PlayerTextDrawLetterSize(playerid, CamsTextTwo[ playerid ][0], 0.000000, 47.102596);
	PlayerTextDrawTextSize(playerid, CamsTextTwo[ playerid ][0], 9.199995, 0.000000);
	PlayerTextDrawAlignment(playerid, CamsTextTwo[ playerid ][0], 3);
	PlayerTextDrawColor(playerid, CamsTextTwo[ playerid ][0], 0);
	PlayerTextDrawUseBox(playerid, CamsTextTwo[ playerid ][0], true);
	PlayerTextDrawBoxColor(playerid, CamsTextTwo[ playerid ][0], 102);
	PlayerTextDrawSetShadow(playerid, CamsTextTwo[ playerid ][0], 0);
	PlayerTextDrawSetOutline(playerid, CamsTextTwo[ playerid ][0], 0);
	PlayerTextDrawFont(playerid, CamsTextTwo[ playerid ][0], 0);

	CamsTextTwo[ playerid ][1] = CreatePlayerTextDraw(playerid, -1.599997, -0.000014, "ld_grav:tvcorn");
	PlayerTextDrawLetterSize(playerid, CamsTextTwo[ playerid ][1], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, CamsTextTwo[ playerid ][1], 327.199920, 295.679565);
	PlayerTextDrawAlignment(playerid, CamsTextTwo[ playerid ][1], 1);
	PlayerTextDrawColor(playerid, CamsTextTwo[ playerid ][1], -1);
	PlayerTextDrawSetShadow(playerid, CamsTextTwo[ playerid ][1], 0);
	PlayerTextDrawSetOutline(playerid, CamsTextTwo[ playerid ][1], 0);
	PlayerTextDrawFont(playerid, CamsTextTwo[ playerid ][1], 4);

	CamsTextTwo[ playerid ][2] = CreatePlayerTextDraw(playerid, 653.000122, -3.480030, "ld_grav:tvcorn");
	PlayerTextDrawLetterSize(playerid, CamsTextTwo[ playerid ][2], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, CamsTextTwo[ playerid ][2], -351.999908, 346.452880);
	PlayerTextDrawAlignment(playerid, CamsTextTwo[ playerid ][2], 1);
	PlayerTextDrawColor(playerid, CamsTextTwo[ playerid ][2], -1);
	PlayerTextDrawSetShadow(playerid, CamsTextTwo[ playerid ][2], 0);
	PlayerTextDrawSetOutline(playerid, CamsTextTwo[ playerid ][2], 0);
	PlayerTextDrawFont(playerid, CamsTextTwo[ playerid ][2], 4);

	CamsTextTwo[ playerid ][3] = CreatePlayerTextDraw(playerid, -9.199991, 454.480072, "ld_grav:tvcorn");
	PlayerTextDrawLetterSize(playerid, CamsTextTwo[ playerid ][3], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, CamsTextTwo[ playerid ][3], 461.599517, -276.267425);
	PlayerTextDrawAlignment(playerid, CamsTextTwo[ playerid ][3], 1);
	PlayerTextDrawColor(playerid, CamsTextTwo[ playerid ][3], -1);
	PlayerTextDrawSetShadow(playerid, CamsTextTwo[ playerid ][3], 0);
	PlayerTextDrawSetOutline(playerid, CamsTextTwo[ playerid ][3], 0);
	PlayerTextDrawFont(playerid, CamsTextTwo[ playerid ][3], 4);

    CamsTextTwo[ playerid ][4] = CreatePlayerTextDraw(playerid, 645.999206, 459.706756, "ld_grav:tvcorn");
	PlayerTextDrawLetterSize(playerid, CamsTextTwo[ playerid ][4], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, CamsTextTwo[ playerid ][4], -406.399749, -338.988616);
	PlayerTextDrawAlignment(playerid, CamsTextTwo[ playerid ][4], 2);
	PlayerTextDrawColor(playerid, CamsTextTwo[ playerid ][4], -1);
	PlayerTextDrawSetShadow(playerid, CamsTextTwo[ playerid ][4], 0);
	PlayerTextDrawSetOutline(playerid, CamsTextTwo[ playerid ][4], 0);
	PlayerTextDrawFont(playerid, CamsTextTwo[ playerid ][4], 4);

    CamsTextTwo[ playerid ][5] = CreatePlayerTextDraw(playerid, 273.599945, 26.133338, "Life ~r~Gaming");
	PlayerTextDrawLetterSize(playerid, CamsTextTwo[ playerid ][5], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, CamsTextTwo[ playerid ][5], 1);
	PlayerTextDrawColor(playerid, CamsTextTwo[ playerid ][5], -1);
	PlayerTextDrawSetShadow(playerid, CamsTextTwo[ playerid ][5], 0);
	PlayerTextDrawSetOutline(playerid, CamsTextTwo[ playerid ][5], 1);
	PlayerTextDrawBackgroundColor(playerid, CamsTextTwo[ playerid ][5], 51);
	PlayerTextDrawFont(playerid, CamsTextTwo[ playerid ][5], 1);
	PlayerTextDrawSetProportional(playerid, CamsTextTwo[ playerid ][5], 1);

	CamsTextTwo[ playerid ][6] = CreatePlayerTextDraw(playerid, 279.199798, 42.559871, "Camera titulo");
	PlayerTextDrawLetterSize(playerid, CamsTextTwo[ playerid ][6], 0.241199, 1.361065);
	PlayerTextDrawTextSize(playerid, CamsTextTwo[ playerid ][6], 372.799957, 3.733330);
	PlayerTextDrawAlignment(playerid, CamsTextTwo[ playerid ][6], 1);
	PlayerTextDrawColor(playerid, CamsTextTwo[ playerid ][6], -1);
	PlayerTextDrawSetShadow(playerid, CamsTextTwo[ playerid ][6], 0);
	PlayerTextDrawSetOutline(playerid, CamsTextTwo[ playerid ][6], 1);
	PlayerTextDrawBackgroundColor(playerid, CamsTextTwo[ playerid ][6], 51);
	PlayerTextDrawFont(playerid, CamsTextTwo[ playerid ][6], 1);
	PlayerTextDrawSetProportional(playerid, CamsTextTwo[ playerid ][6], 1);

	CamsTextTwo[ playerid ][7] = CreatePlayerTextDraw(playerid, 38.399978, 163.520004, "Use:~n~~y~setinhas~w~: movimento~n~~y~Espaco~w~: Velocidade~n~~r~C~w~: Para Sair");
	PlayerTextDrawLetterSize(playerid, CamsTextTwo[ playerid ][7], 0.323599, 1.331200);
	PlayerTextDrawAlignment(playerid, CamsTextTwo[ playerid ][7], 1);
	PlayerTextDrawColor(playerid, CamsTextTwo[ playerid ][7], -1);
	PlayerTextDrawSetShadow(playerid, CamsTextTwo[ playerid ][7], 0);
	PlayerTextDrawSetOutline(playerid, CamsTextTwo[ playerid ][7], 1);
	PlayerTextDrawBackgroundColor(playerid, CamsTextTwo[ playerid ][7], 51);
	PlayerTextDrawFont(playerid, CamsTextTwo[ playerid ][7], 1);
	PlayerTextDrawSetProportional(playerid, CamsTextTwo[ playerid ][7], 1);

    TextTaximetro[ playerid ] = CreatePlayerTextDraw(playerid,55.000000, 256.000000, "Corrida: ~g~$~w~0");
	PlayerTextDrawBackgroundColor(playerid, TextTaximetro[ playerid ], 255);
	PlayerTextDrawFont(playerid, TextTaximetro[ playerid ], 1);
	PlayerTextDrawLetterSize(playerid, TextTaximetro[ playerid ], 0.270000, 1.400000);
	PlayerTextDrawColor(playerid, TextTaximetro[ playerid ], -1);
	PlayerTextDrawSetOutline(playerid, TextTaximetro[ playerid ], 1);
	PlayerTextDrawSetProportional(playerid, TextTaximetro[ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid, TextTaximetro[ playerid ], 0);

//	~~~~~~~~~~~~~ TextDraw's Mecanico ~~~~~~~~~~~~~~~~//

	/*TMecanico[ 0 ][ playerid ] = CreatePlayerTextDraw(playerid, 360.000000, 372.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,TMecanico[ 0 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TMecanico[ 0 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TMecanico[ 0 ][ playerid ], 0.500000, 2.099999);
	PlayerTextDrawColor(playerid,TMecanico[ 0 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TMecanico[ 0 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TMecanico[ 0 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TMecanico[ 0 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TMecanico[ 0 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TMecanico[ 0 ][ playerid ], 133);
	PlayerTextDrawTextSize(playerid,TMecanico[ 0 ][ playerid ], 173.000000, 2.000000);
	PlayerTextDrawSetSelectable(playerid,TMecanico[ 0 ][ playerid ], 0);

	TMecanico[ 1 ][ playerid ] = CreatePlayerTextDraw(playerid, 216.000000, 377.000000, "~w~Concertando... Aguarde alguns instantes!");
	PlayerTextDrawBackgroundColor(playerid,TMecanico[ 1 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TMecanico[ 1 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TMecanico[ 1 ][ playerid ], 0.200000, 1.000000);
	PlayerTextDrawColor(playerid,TMecanico[ 1 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TMecanico[ 1 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TMecanico[ 1 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TMecanico[ 1 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,TMecanico[ 1 ][ playerid ], 0);

	TMecanico[ 2 ][ playerid ] = CreatePlayerTextDraw(playerid, 177.000000, 372.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,TMecanico[ 2 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TMecanico[ 2 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TMecanico[ 2 ][ playerid ], 0.500000, 2.099999);
	PlayerTextDrawColor(playerid,TMecanico[ 2 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TMecanico[ 2 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TMecanico[ 2 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TMecanico[ 2 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TMecanico[ 2 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TMecanico[ 2 ][ playerid ], -16776961);
	PlayerTextDrawTextSize(playerid,TMecanico[ 2 ][ playerid ], 168.000000, 3.000000);
	PlayerTextDrawSetSelectable(playerid,TMecanico[ 2 ][ playerid ], 0);

    TMecanico[ 3 ][ playerid ] = CreatePlayerTextDraw(playerid,190.000000, 374.000000, "hud:radar_Modgarage");
	PlayerTextDrawBackgroundColor(playerid,TMecanico[ 3 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TMecanico[ 3 ][ playerid ], 4);
	PlayerTextDrawLetterSize(playerid,TMecanico[ 3 ][ playerid ], 0.500000, 1.000000);
	PlayerTextDrawColor(playerid,TMecanico[ 3 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TMecanico[ 3 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TMecanico[ 3 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TMecanico[ 3 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TMecanico[ 3 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TMecanico[ 3 ][ playerid ], 255);
	PlayerTextDrawTextSize(playerid,TMecanico[ 3 ][ playerid ], 13.000000, 14.000000);
	PlayerTextDrawSetSelectable(playerid,TMecanico[ 3 ][ playerid ], 0);*/

    TextLenhadores[ playerid ] = CreatePlayerTextDraw(playerid, 148.000000, 376.000000, "Cortando...");
	PlayerTextDrawBackgroundColor(playerid, TextLenhadores[ playerid ], 255);
	PlayerTextDrawFont(playerid, TextLenhadores[ playerid ], 1);
	PlayerTextDrawLetterSize(playerid, TextLenhadores[ playerid ], 0.250000, 0.899999);
	PlayerTextDrawColor(playerid, TextLenhadores[ playerid ], -1);
	PlayerTextDrawSetOutline(playerid, TextLenhadores[ playerid ], 0);
	PlayerTextDrawSetProportional(playerid, TextLenhadores[ playerid ], 1);
	PlayerTextDrawSetShadow(playerid, TextLenhadores[ playerid ], 1);
	PlayerTextDrawUseBox(playerid, TextLenhadores[ playerid ], 1);
	PlayerTextDrawBoxColor(playerid, TextLenhadores[ playerid ], 255);
	PlayerTextDrawTextSize(playerid, TextLenhadores[ playerid ], 212.399993, 0.000000);
	PlayerTextDrawSetSelectable(playerid, TextLenhadores[ playerid ], 0);

	TimerTruck[ playerid ] = CreatePlayerTextDraw(playerid, 534.000000, 280.000000, "Tempo: ~r~30");
	PlayerTextDrawBackgroundColor(playerid,TimerTruck[ playerid ], 255);
	PlayerTextDrawFont(playerid,TimerTruck[ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TimerTruck[ playerid ], 0.390000, 2.299999);
	PlayerTextDrawColor(playerid,TimerTruck[ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TimerTruck[ playerid ], 1);
	PlayerTextDrawSetProportional(playerid,TimerTruck[ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,TimerTruck[ playerid ], 0);

    // velocimetro SHADOW
	PlayerTD[0][playerid] = CreatePlayerTextDraw(playerid, 521.441955, 350.416717, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, PlayerTD[0][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, PlayerTD[0][playerid], 99.000000, 79.000000);
	PlayerTextDrawAlignment(playerid, PlayerTD[0][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[0][playerid], 303174399);
	PlayerTextDrawSetShadow(playerid, PlayerTD[0][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[0][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[0][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[0][playerid], 4);
	PlayerTextDrawSetProportional(playerid, PlayerTD[0][playerid], 0);
	PlayerTextDrawSetShadow(playerid, PlayerTD[0][playerid], 0);

	PlayerTD[1][playerid] = CreatePlayerTextDraw(playerid, 522.379150, 351.583282, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, PlayerTD[1][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, PlayerTD[1][playerid], 97.000000, 10.000000);
	PlayerTextDrawAlignment(playerid, PlayerTD[1][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[1][playerid], 6132735);
	PlayerTextDrawSetShadow(playerid, PlayerTD[1][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[1][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[1][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[1][playerid], 4);
	PlayerTextDrawSetProportional(playerid, PlayerTD[1][playerid], 0);
	PlayerTextDrawSetShadow(playerid, PlayerTD[1][playerid], 0);

	PlayerTD[2][playerid] = CreatePlayerTextDraw(playerid, 549.253356, 352.166412, "VELOCIMETRO");
	PlayerTextDrawLetterSize(playerid, PlayerTD[2][playerid], 0.144655, 0.789165);
	PlayerTextDrawAlignment(playerid, PlayerTD[2][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[2][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[2][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[2][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[2][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[2][playerid], 2);
	PlayerTextDrawSetProportional(playerid, PlayerTD[2][playerid], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[2][playerid], 0);

	PlayerTD[3][playerid] = CreatePlayerTextDraw(playerid, 520.505218, 357.999908, "ld_beat:chit");
	PlayerTextDrawLetterSize(playerid, PlayerTD[3][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, PlayerTD[3][playerid], 37.000000, 40.000000);
	PlayerTextDrawAlignment(playerid, PlayerTD[3][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[3][playerid], 6132735);
	PlayerTextDrawSetShadow(playerid, PlayerTD[3][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[3][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[3][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[3][playerid], 4);
	PlayerTextDrawSetProportional(playerid, PlayerTD[3][playerid], 0);
	PlayerTextDrawSetShadow(playerid, PlayerTD[3][playerid], 0);

	PlayerTD[4][playerid] = CreatePlayerTextDraw(playerid, 529.875488, 384.833099, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, PlayerTD[4][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, PlayerTD[4][playerid], 18.000000, 10.000000);
	PlayerTextDrawAlignment(playerid, PlayerTD[4][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[4][playerid], 6132735);
	PlayerTextDrawSetShadow(playerid, PlayerTD[4][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[4][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[4][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[4][playerid], 4);
	PlayerTextDrawSetProportional(playerid, PlayerTD[4][playerid], 0);
	PlayerTextDrawSetShadow(playerid, PlayerTD[4][playerid], 0);

	PlayerTD[5][playerid] = CreatePlayerTextDraw(playerid, 538.946166, 368.499938, "123");
	PlayerTextDrawLetterSize(playerid, PlayerTD[5][playerid], 0.277714, 1.710834);
	PlayerTextDrawAlignment(playerid, PlayerTD[5][playerid], 2);
	PlayerTextDrawColor(playerid, PlayerTD[5][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[5][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[5][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[5][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[5][playerid], 3);
	PlayerTextDrawSetProportional(playerid, PlayerTD[5][playerid], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[5][playerid], 0);

	PlayerTD[6][playerid] = CreatePlayerTextDraw(playerid, 531.918090, 386.000000, "KM/H");
	PlayerTextDrawLetterSize(playerid, PlayerTD[6][playerid], 0.134348, 0.818333);
	PlayerTextDrawAlignment(playerid, PlayerTD[6][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[6][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[6][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[6][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[6][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[6][playerid], 2);
	PlayerTextDrawSetProportional(playerid, PlayerTD[6][playerid], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[6][playerid], 0);

	PlayerTD[7][playerid] = CreatePlayerTextDraw(playerid, 571.273803, 402.333312, "VOZILO:_TURISMO");
	PlayerTextDrawLetterSize(playerid, PlayerTD[7][playerid], 0.134348, 0.818333);
	PlayerTextDrawAlignment(playerid, PlayerTD[7][playerid], 2);
	PlayerTextDrawColor(playerid, PlayerTD[7][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[7][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[7][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[7][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[7][playerid], 2);
	PlayerTextDrawSetProportional(playerid, PlayerTD[7][playerid], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[7][playerid], 0);

	PlayerTD[8][playerid] = CreatePlayerTextDraw(playerid, 572.210876, 411.083374, "GORIVO:_54L");
	PlayerTextDrawLetterSize(playerid, PlayerTD[8][playerid], 0.134348, 0.818333);
	PlayerTextDrawAlignment(playerid, PlayerTD[8][playerid], 2);
	PlayerTextDrawColor(playerid, PlayerTD[8][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[8][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[8][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[8][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[8][playerid], 2);
	PlayerTextDrawSetProportional(playerid, PlayerTD[8][playerid], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[8][playerid], 0);

	PlayerTD[9][playerid] = CreatePlayerTextDraw(playerid, 572.679382, 419.833435, "OSTECENJE:_999");
	PlayerTextDrawLetterSize(playerid, PlayerTD[9][playerid], 0.134348, 0.818333);
	PlayerTextDrawAlignment(playerid, PlayerTD[9][playerid], 2);
	PlayerTextDrawColor(playerid, PlayerTD[9][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[9][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[9][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[9][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[9][playerid], 2);
	PlayerTextDrawSetProportional(playerid, PlayerTD[9][playerid], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[9][playerid], 0);

	PlayerTD[10][playerid] = CreatePlayerTextDraw(playerid, 560.329284, 363.249908, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, PlayerTD[10][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, PlayerTD[10][playerid], 16.000000, 36.000000);
	PlayerTextDrawAlignment(playerid, PlayerTD[10][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[10][playerid], 6132735);
	PlayerTextDrawSetShadow(playerid, PlayerTD[10][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[10][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[10][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[10][playerid], 4);
	PlayerTextDrawSetProportional(playerid, PlayerTD[10][playerid], 0);
	PlayerTextDrawSetShadow(playerid, PlayerTD[10][playerid], 0);

	PlayerTD[11][playerid] = CreatePlayerTextDraw(playerid, 561.266418, 364.416625, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, PlayerTD[11][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, PlayerTD[11][playerid], 14.000000, 34.000000);
	PlayerTextDrawAlignment(playerid, PlayerTD[11][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[11][playerid], 303174399);
	PlayerTextDrawSetShadow(playerid, PlayerTD[11][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[11][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[11][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[11][playerid], 4);
	PlayerTextDrawSetProportional(playerid, PlayerTD[11][playerid], 0);
	PlayerTextDrawSetShadow(playerid, PlayerTD[11][playerid], 0);

	PlayerTD[12][playerid] = CreatePlayerTextDraw(playerid, 564.246093, 366.166625, "D");
	PlayerTextDrawLetterSize(playerid, PlayerTD[12][playerid], 0.363923, 1.109997);
	PlayerTextDrawAlignment(playerid, PlayerTD[12][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[12][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[12][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[12][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[12][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[12][playerid], 1);
	PlayerTextDrawSetProportional(playerid, PlayerTD[12][playerid], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[12][playerid], 0);

	PlayerTD[13][playerid] = CreatePlayerTextDraw(playerid, 564.246093, 376.666809, "R");
	PlayerTextDrawLetterSize(playerid, PlayerTD[13][playerid], 0.365328, 1.109997);
	PlayerTextDrawAlignment(playerid, PlayerTD[13][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[13][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[13][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[13][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[13][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[13][playerid], 1);
	PlayerTextDrawSetProportional(playerid, PlayerTD[13][playerid], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[13][playerid], 0);

	PlayerTD[14][playerid] = CreatePlayerTextDraw(playerid, 564.246093, 386.583587, "N");
	PlayerTextDrawLetterSize(playerid, PlayerTD[14][playerid], 0.346118, 1.098332);
	PlayerTextDrawAlignment(playerid, PlayerTD[14][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[14][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[14][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[14][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[14][playerid], 255);
	PlayerTextDrawFont(playerid, PlayerTD[14][playerid], 1);
	PlayerTextDrawSetProportional(playerid, PlayerTD[14][playerid], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[14][playerid], 0);

/*	PlayerTD[15][playerid] = CreatePlayerTextDraw(playerid, 573.916503, 349.833374, "");
	PlayerTextDrawLetterSize(playerid, PlayerTD[15][playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, PlayerTD[15][playerid], 50.000000, 70.000000);
	PlayerTextDrawAlignment(playerid, PlayerTD[15][playerid], 1);
	PlayerTextDrawColor(playerid, PlayerTD[15][playerid], -1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[15][playerid], 0);
	PlayerTextDrawSetOutline(playerid, PlayerTD[15][playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[15][playerid], 0);
	PlayerTextDrawFont(playerid, PlayerTD[15][playerid], 5);
	PlayerTextDrawSetProportional(playerid, PlayerTD[15][playerid], 0);
	PlayerTextDrawSetShadow(playerid, PlayerTD[15][playerid], 0);
	PlayerTextDrawSetPreviewModel(playerid, PlayerTD[15][playerid], 411);
	PlayerTextDrawSetPreviewRot(playerid, PlayerTD[15][playerid], 0.000000, 0.000000, 0.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, PlayerTD[15][playerid], 1, 1);*/

	/*======== ================== ===================
	        	Velocimetro By Sky
	 ========== ================== ================ */

	/*PTVelocimetro[ 0 ][ playerid ] = CreatePlayerTextDraw(playerid,634.000000, 371.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 0 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 0 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 0 ][ playerid ], 0.149998, 6.000000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 0 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 0 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 0 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 0 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,PTVelocimetro[ 0 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,PTVelocimetro[ 0 ][ playerid ], 136);
	PlayerTextDrawTextSize(playerid,PTVelocimetro[ 0 ][ playerid ], 511.000000, 0.000000);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 0 ][ playerid ], 0);

	PTVelocimetro[ 1 ][ playerid ] = CreatePlayerTextDraw(playerid,517.000000, 377.000000, "Km/h:");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 1 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 1 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 1 ][ playerid ], 0.280000, 1.100000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 1 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 1 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 1 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 1 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 1 ][ playerid ], 0);

	PTVelocimetro[ 20 ][ playerid ] = CreatePlayerTextDraw(playerid,516.000000, 410.000000, "Veiculo: ~y~Desconhecido");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 20 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 20 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 20 ][ playerid ], 0.230000, 1.200000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 20 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 20 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 20 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 20 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 20 ][ playerid ], 0);

	PTVelocimetro[ 2 ][ playerid ] = CreatePlayerTextDraw(playerid,546.000000, 377.000000, "~w~lllllll");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 2 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 2 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 2 ][ playerid ], 0.289999, 1.100000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 2 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 2 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 2 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 2 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 2 ][ playerid ], 0);

	PTVelocimetro[ 3 ][ playerid ] = CreatePlayerTextDraw(playerid,564.500000, 374.000000, "~w~lll");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 3 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 3 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 3 ][ playerid ], 0.280000, 1.500000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 3 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 3 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 3 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 3 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 3 ][ playerid ], 0);

	PTVelocimetro[ 4 ][ playerid ] = CreatePlayerTextDraw(playerid,572.000000, 371.700012, "~w~ll");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 4 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 4 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 4 ][ playerid ], 0.289999, 1.799999);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 4 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 4 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 4 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 4 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 4 ][ playerid ], 0);

	PTVelocimetro[ 5 ][ playerid ] = CreatePlayerTextDraw(playerid,577.299987, 369.500000, "~w~ll");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 5 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 5 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 5 ][ playerid ], 0.289999, 2.099999);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 5 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 5 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 5 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 5 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 5 ][ playerid ], 0);


    PTVelocimetro[ 3 ][ playerid ] = CreatePlayerTextDraw(playerid,565.000000, 374.000000, "~w~lll");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 3 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 3 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 3 ][ playerid ], 0.280000, 1.500000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 3 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 3 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 3 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 3 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 3 ][ playerid ], 0);

	PTVelocimetro[ 4 ][ playerid ] = CreatePlayerTextDraw(playerid,573.000000, 372.000000, "~w~ll");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 4 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 4 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 4 ][ playerid ], 0.289999, 1.799999);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 4 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 4 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 4 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 4 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 4 ][ playerid ], 0);

    PTVelocimetro[ 5 ][ playerid ] = CreatePlayerTextDraw(playerid,579.000000, 369.700000, "~w~ll");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 5 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 5 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 5 ][ playerid ], 0.289999, 2.099999);
	PlayerTextDrawColor(playerid, PTVelocimetro[ 5 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 5 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 5 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 5 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 5 ][ playerid ], 0);

	PTVelocimetro[ 6 ][ playerid ] = CreatePlayerTextDraw(playerid,587.000000, 378.000000, "0"); // Kilometragem em numeros
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 6 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 6 ][ playerid ], 2);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 6 ][ playerid ], 0.259999, 1.000000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 6 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 6 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 6 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 6 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 6 ][ playerid ], 0);

	PTVelocimetro[ 7 ][ playerid ] = CreatePlayerTextDraw(playerid,625.000000, 399.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 7 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 7 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 7 ][ playerid ], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 7 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 7 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 7 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 7 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 7 ][ playerid ], 0);

	PTVelocimetro[ 8 ][ playerid ] = CreatePlayerTextDraw(playerid,625.000000, 395.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 8 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 8 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 8 ][ playerid ], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 8 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 8 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 8 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 8 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 8 ][ playerid ], 0);

	PTVelocimetro[ 9 ][ playerid ] = CreatePlayerTextDraw(playerid,625.000000, 391.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 9 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 9 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 9 ][ playerid ], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 9 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 9 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 9 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 9 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 9 ][ playerid ], 0);

	PTVelocimetro[ 10 ][ playerid ] = CreatePlayerTextDraw(playerid,625.000000, 387.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 10 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 10 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 10 ][ playerid ], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 10 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 10 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 10 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 10 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 10 ][ playerid ], 0);

	PTVelocimetro[ 11 ][ playerid ] = CreatePlayerTextDraw(playerid,625.000000, 383.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 11 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 11 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 11 ][ playerid ], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 11 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 11 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 11 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 11 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 11 ][ playerid ], 0);

	PTVelocimetro[ 12 ][ playerid ] = CreatePlayerTextDraw(playerid,625.000000, 379.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 12 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 12 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 12 ][ playerid ], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 12 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 12 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 12 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 12 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 12 ][ playerid ], 0);

	PTVelocimetro[ 13 ][ playerid ] = CreatePlayerTextDraw(playerid,625.000000, 375.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 13 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 13 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 13 ][ playerid ], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 13 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 13 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 13 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 13 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 13 ][ playerid ], 0);

    PTVelocimetro[ 14 ][ playerid ] = CreatePlayerTextDraw(playerid,625.000000, 371.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 14 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 14 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 14 ][ playerid ], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 14 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 14 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 14 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 14 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 14 ][ playerid ], 0);

	PTVelocimetro[ 15 ][ playerid ] = CreatePlayerTextDraw(playerid,625.000000, 367.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 15 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 15 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 15 ][ playerid ], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 15 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 15 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 15 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 15 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 15 ][ playerid ], 0);

	PTVelocimetro[ 16 ][ playerid ] = CreatePlayerTextDraw(playerid,614.000000, 410.000000, "hud:radar_impound");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 16 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 16 ][ playerid ], 4);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 16 ][ playerid ], 0.500000, 1.000000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 16 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 16 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 16 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 16 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,PTVelocimetro[ 16 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,PTVelocimetro[ 16 ][ playerid ], 255);
	PlayerTextDrawTextSize(playerid,PTVelocimetro[ 16 ][ playerid ], 13.000000, 12.000000);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 16 ][ playerid ], 0);

	PTVelocimetro[ 17 ][ playerid ] = CreatePlayerTextDraw(playerid,516.000000, 395.000000, "Comb:");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 17 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 17 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 17 ][ playerid ], 0.270000, 1.100000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 17 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 17 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 17 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 17 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 17 ][ playerid ], 0);

	PTVelocimetro[ 18 ][ playerid ] = CreatePlayerTextDraw(playerid,546.000000, 395.000000, "llllllllllll~w~lll");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 18 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 18 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 18 ][ playerid ], 0.280000, 1.100000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 18 ][ playerid ], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 18 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 18 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 18 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 18 ][ playerid ], 0);

	PTVelocimetro[ 19 ][ playerid ] = CreatePlayerTextDraw(playerid,587.000000, 395.000000, "100"); // combustivel em numeros
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[ 19 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[ 19 ][ playerid ], 2);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[ 19 ][ playerid ], 0.259999, 1.000000);
	PlayerTextDrawColor(playerid,PTVelocimetro[ 19 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[ 19 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[ 19 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[ 19 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[ 19 ][ playerid ], 0);*/


	/*==========================================================================
						Velocimetro Atualizado 0.9.8 SKy
	============================================================================*/

	/*PTVelocimetro[0][playerid] = CreatePlayerTextDraw(playerid,153.000000, 370.000000, "_"); // -    374
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[0][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[0][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[0][playerid], 0.500000, 6.099999);
	PlayerTextDrawColor(playerid,PTVelocimetro[0][playerid], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[0][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[0][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[0][playerid], 1);
	PlayerTextDrawUseBox(playerid,PTVelocimetro[0][playerid], 1);
	PlayerTextDrawBoxColor(playerid,PTVelocimetro[0][playerid], 102);
	PlayerTextDrawTextSize(playerid,PTVelocimetro[0][playerid], 253.000000, 10.000000);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[0][playerid], 0);

	PTVelocimetro[1][playerid] = CreatePlayerTextDraw(playerid,155.000000, 383.000000, "Km/h:");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[1][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[1][playerid], 2);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[1][playerid], 0.230000, 1.299999);
	PlayerTextDrawColor(playerid,PTVelocimetro[1][playerid], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[1][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[1][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[1][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[1][playerid], 0);

	PTVelocimetro[2][playerid] = CreatePlayerTextDraw(playerid,155.000000, 331.000000, "~r~.");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[2][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[2][playerid], 2);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[2][playerid], 1.429998, 6.199998);
	PlayerTextDrawColor(playerid,PTVelocimetro[2][playerid], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[2][playerid], 1);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[2][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[2][playerid], 0);

	PTVelocimetro[3][playerid] = CreatePlayerTextDraw(playerid,156.000000, 412.000000, "Veiculo: ~y~Infernus");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[3][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[3][playerid], 2);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[3][playerid], 0.169999, 1.100000);
	PlayerTextDrawColor(playerid,PTVelocimetro[3][playerid], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[3][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[3][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[3][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[3][playerid], 0);

	PTVelocimetro[4][playerid] = CreatePlayerTextDraw(playerid,166.000000, 331.000000, "~g~.");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[4][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[4][playerid], 2);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[4][playerid], 1.429998, 6.199998);
	PlayerTextDrawColor(playerid,PTVelocimetro[4][playerid], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[4][playerid], 1);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[4][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[4][playerid], 0);

	PTVelocimetro[5][playerid] = CreatePlayerTextDraw(playerid,188.000000, 383.000000, "200");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[5][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[5][playerid], 2);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[5][playerid], 0.209998, 1.500000);
	PlayerTextDrawColor(playerid,PTVelocimetro[5][playerid], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[5][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[5][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[5][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[5][playerid], 0);

	PTVelocimetro[6][playerid] = CreatePlayerTextDraw(playerid,251.000000, 399.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[6][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[6][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[6][playerid], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[6][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[6][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[6][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[6][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[6][playerid], 0);

	PTVelocimetro[7][playerid] = CreatePlayerTextDraw(playerid,251.000000, 395.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[7][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[7][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[7][playerid], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[7][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[7][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[7][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[7][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[7][playerid], 0);

	PTVelocimetro[8][playerid] = CreatePlayerTextDraw(playerid,251.000000, 391.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[8][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[8][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[8][playerid], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[8][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[8][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[8][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[8][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[8][playerid], 0);

	PTVelocimetro[9][playerid] = CreatePlayerTextDraw(playerid,251.000000, 387.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[9][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[9][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[9][playerid], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[9][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[9][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[9][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[9][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[9][playerid], 0);

	PTVelocimetro[10][playerid] = CreatePlayerTextDraw(playerid,251.000000, 383.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[10][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[10][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[10][playerid], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[10][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[10][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[10][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[10][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[10][playerid], 0);

	PTVelocimetro[11][playerid] = CreatePlayerTextDraw(playerid,251.000000, 379.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[11][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[11][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[11][playerid], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[11][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[11][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[11][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[11][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[11][playerid], 0);

	PTVelocimetro[12][playerid] = CreatePlayerTextDraw(playerid,251.000000, 375.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[12][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[12][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[12][playerid], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[12][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[12][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[12][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[12][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[12][playerid], 0);

	PTVelocimetro[13][playerid] = CreatePlayerTextDraw(playerid,251.000000, 367.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[13][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[13][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[13][playerid], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[13][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[13][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[13][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[13][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[13][playerid], 0);

	PTVelocimetro[14][playerid] = CreatePlayerTextDraw(playerid,251.000000, 371.000000, "-");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[14][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[14][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[14][playerid], -0.649999, 1.599998);
	PlayerTextDrawColor(playerid,PTVelocimetro[14][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[14][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[14][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[14][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[14][playerid], 0);

	PTVelocimetro[15][playerid] = CreatePlayerTextDraw(playerid,242.000000, 412.000000, "V");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[15][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[15][playerid], 4);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[15][playerid], 0.340000, 1.100000);
	PlayerTextDrawColor(playerid,PTVelocimetro[15][playerid], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[15][playerid], 1);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[15][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[15][playerid], 0);

	PTVelocimetro[16][playerid] = CreatePlayerTextDraw(playerid,155.000000, 398.000000, "Comb:");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[16][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[16][playerid], 2);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[16][playerid], 0.219999, 1.100000);
	PlayerTextDrawColor(playerid,PTVelocimetro[16][playerid], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[16][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[16][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[16][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[16][playerid], 0);

	PTVelocimetro[17][playerid] = CreatePlayerTextDraw(playerid,188.000000, 399.000000, "IIIIIIIII~w~I");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[17][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[17][playerid], 1);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[17][playerid], 0.289999, 1.100000);
	PlayerTextDrawColor(playerid,PTVelocimetro[17][playerid], 16777215);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[17][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[17][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[17][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[17][playerid], 0);

	PTVelocimetro[18][playerid] = CreatePlayerTextDraw(playerid,223.000000, 399.000000, "96");
	PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[18][playerid], 255);
	PlayerTextDrawFont(playerid,PTVelocimetro[18][playerid], 2);
	PlayerTextDrawLetterSize(playerid,PTVelocimetro[18][playerid], 0.259999, 1.000000);
	PlayerTextDrawColor(playerid,PTVelocimetro[18][playerid], -1);
	PlayerTextDrawSetOutline(playerid,PTVelocimetro[18][playerid], 0);
	PlayerTextDrawSetProportional(playerid,PTVelocimetro[18][playerid], 1);
	PlayerTextDrawSetShadow(playerid,PTVelocimetro[18][playerid], 1);
	PlayerTextDrawSetSelectable(playerid,PTVelocimetro[18][playerid], 0);*/

// velocimentro vinny
    /*
    PTVelocimetro[0][playerid] = CreatePlayerTextDraw(playerid,152.000000, 356.000000, "Velocimetro :"); // X+3+
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[0][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[0][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[0][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[0][playerid], -16776961);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[0][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[0][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[0][playerid], 0);

    PTVelocimetro[1][playerid] = CreatePlayerTextDraw(playerid,142.000000, 356.000000, "]");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[1][playerid], 255);
    PlayerTextDrawFont(playerid,PTVelocimetro[1][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[1][playerid], 0.250000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[1][playerid], 471604479);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[1][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[1][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[1][playerid], 0);

    PTVelocimetro[2][playerid] = CreatePlayerTextDraw(playerid,152.000000, 368.000000, "Combustivel :");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[2][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[2][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[2][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[2][playerid], -16776961);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[2][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[2][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[2][playerid], 0);

    PTVelocimetro[3][playerid] = CreatePlayerTextDraw(playerid,142.000000, 368.000000, "]");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[3][playerid], 255);
    PlayerTextDrawFont(playerid,PTVelocimetro[3][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[3][playerid], 0.250000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[3][playerid], 471604479);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[3][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[3][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[3][playerid], 0);

    PTVelocimetro[4][playerid] = CreatePlayerTextDraw(playerid,152.000000, 380.000000, "Lataria :");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[4][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[4][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[4][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[4][playerid], -16776961);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[4][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[4][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[4][playerid], 0);

    PTVelocimetro[5][playerid] = CreatePlayerTextDraw(playerid,142.000000, 380.000000, "]");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[5][playerid], 255);
    PlayerTextDrawFont(playerid,PTVelocimetro[5][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[5][playerid], 0.250000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[5][playerid], 471604479);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[5][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[5][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[5][playerid], 0);

    PTVelocimetro[6][playerid] = CreatePlayerTextDraw(playerid,152.000000, 392.000000, "GPS :");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[6][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[6][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[6][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[6][playerid], -16776961);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[6][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[6][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[6][playerid], 0);

    PTVelocimetro[7][playerid] = CreatePlayerTextDraw(playerid,142.000000, 392.000000, "]");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[7][playerid], 255);
    PlayerTextDrawFont(playerid,PTVelocimetro[7][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[7][playerid], 0.250000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[7][playerid], 471604479);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[7][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[7][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[7][playerid], 0);

    PTVelocimetro[8][playerid] = CreatePlayerTextDraw(playerid,152.000000, 404.000000, "Veiculo :");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[8][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[8][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[8][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[8][playerid], -16776961);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[8][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[8][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[8][playerid], 0);

    PTVelocimetro[9][playerid] = CreatePlayerTextDraw(playerid,142.000000, 404.000000, "]");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[9][playerid], 255);
    PlayerTextDrawFont(playerid,PTVelocimetro[9][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[9][playerid], 0.250000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[9][playerid], 471604479);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[9][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[9][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[9][playerid], 0);

    PTVelocimetro[10][playerid] = CreatePlayerTextDraw(playerid,152.000000, 416.000000, "Blindagem :");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[10][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[10][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[10][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[10][playerid], -16776961);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[10][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[10][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[10][playerid], 0);

    PTVelocimetro[11][playerid] = CreatePlayerTextDraw(playerid,142.000000, 416.000000, "]");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[11][playerid], 255);
    PlayerTextDrawFont(playerid,PTVelocimetro[11][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[11][playerid], 0.250000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[11][playerid], 471604479);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[11][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[11][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[11][playerid], 0);

    PTVelocimetro[12][playerid] = CreatePlayerTextDraw(playerid,221.000000, 356.000000, "300 KM/H");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[12][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[12][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[12][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[12][playerid], -1);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[12][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[12][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[12][playerid], 0);

    PTVelocimetro[13][playerid] = CreatePlayerTextDraw(playerid,221.000000, 368.000000, "100 L");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[13][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[13][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[13][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[13][playerid], -1);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[13][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[13][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[13][playerid], 0);

    PTVelocimetro[14][playerid] = CreatePlayerTextDraw(playerid,198.000000, 380.000000, "100");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[14][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[14][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[14][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[14][playerid], -1);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[14][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[14][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[14][playerid], 0);

    PTVelocimetro[15][playerid] = CreatePlayerTextDraw(playerid,179.000000, 392.000000, "Verona Beach");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[15][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[15][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[15][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[15][playerid], -1);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[15][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[15][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[15][playerid], 0);

    PTVelocimetro[16][playerid] = CreatePlayerTextDraw(playerid,198.000000, 404.000000, "INFERNUS");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[16][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[16][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[16][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[16][playerid], -1);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[16][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[16][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[16][playerid], 0);

    PTVelocimetro[17][playerid] = CreatePlayerTextDraw(playerid,211.000000, 416.000000, "0");
    PlayerTextDrawBackgroundColor(playerid,PTVelocimetro[17][playerid], 471604479);
    PlayerTextDrawFont(playerid,PTVelocimetro[17][playerid], 2);
    PlayerTextDrawLetterSize(playerid,PTVelocimetro[17][playerid], 0.200000, 1.200000);
    PlayerTextDrawColor(playerid,PTVelocimetro[17][playerid], -1);
    PlayerTextDrawSetOutline(playerid,PTVelocimetro[17][playerid], 1);
    PlayerTextDrawSetProportional(playerid,PTVelocimetro[17][playerid], 1);
    PlayerTextDrawSetSelectable(playerid,PTVelocimetro[17][playerid], 0);
*/

    /* =================================================
			Sistema de Fome e Sede
	====================================================*/


    TextFome[ 0 ][ playerid ] = CreatePlayerTextDraw(playerid,611.000000, 128.000000, "Fundo Branco");
	PlayerTextDrawBackgroundColor(playerid,TextFome[ 0 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TextFome[ 0 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TextFome[ 0 ][ playerid ], 0.500000, 0.399998);
	PlayerTextDrawColor(playerid,TextFome[ 0 ][ playerid ], -256);
	PlayerTextDrawSetOutline(playerid,TextFome[ 0 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TextFome[ 0 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TextFome[ 0 ][ playerid ], 0);
	PlayerTextDrawUseBox(playerid,TextFome[ 0 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TextFome[ 0 ][ playerid ], 85);
	PlayerTextDrawTextSize(playerid,TextFome[ 0 ][ playerid ], 494.000000, -2.000000);
	PlayerTextDrawSetSelectable(playerid,TextFome[ 0 ][ playerid ], 0);

	TextFome[ 1 ][ playerid ] = CreatePlayerTextDraw(playerid,608.000000, 131.000000, "Fundo Azul");
	PlayerTextDrawBackgroundColor(playerid,TextFome[ 1 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TextFome[ 1 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TextFome[ 1 ][ playerid ], 0.500000, 0.099999);
	PlayerTextDrawColor(playerid,TextFome[ 1 ][ playerid ], -256);
	PlayerTextDrawSetOutline(playerid,TextFome[ 1 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TextFome[ 1 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TextFome[ 1 ][ playerid ], 0);
	PlayerTextDrawUseBox(playerid,TextFome[ 1 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TextFome[ 1 ][ playerid ], -458476494);
	PlayerTextDrawTextSize(playerid,TextFome[ 1 ][ playerid ], 513.000000, -2.000000);
	PlayerTextDrawSetSelectable(playerid,TextFome[ 1 ][ playerid ], 0);

	TextFome[ 2 ][ playerid ] = CreatePlayerTextDraw(playerid,608.000000, 131.000000, "Barra Azul");
	PlayerTextDrawBackgroundColor(playerid,TextFome[ 2 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TextFome[ 2 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TextFome[ 2 ][ playerid ], 0.500000, 0.099999);
	PlayerTextDrawColor(playerid,TextFome[ 2 ][ playerid ], -256);
	PlayerTextDrawSetOutline(playerid,TextFome[ 2 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TextFome[ 2 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TextFome[ 2 ][ playerid ], 0);
	PlayerTextDrawUseBox(playerid,TextFome[ 2 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TextFome[ 2 ][ playerid ], -422824705);
	PlayerTextDrawTextSize(playerid,TextFome[ 2 ][ playerid ], 604.000000, 0.000000); //85
	PlayerTextDrawSetSelectable(playerid,TextFome[ 1 ][ playerid ], 0);

    TextFome[ 3 ][ playerid ] = CreatePlayerTextDraw(playerid,501.000000, 127.000000, "hud:radar_burgerShot");
    PlayerTextDrawBackgroundColor(playerid,TextFome[ 3 ][ playerid ], 255);
    PlayerTextDrawFont(playerid,TextFome[ 3 ][ playerid ], 4);
    PlayerTextDrawLetterSize(playerid,TextFome[ 3 ][ playerid ], 0.330000, 4.599999);
    PlayerTextDrawColor(playerid,TextFome[ 3 ][ playerid ], -1);
    PlayerTextDrawSetOutline(playerid,TextFome[ 3 ][ playerid ], 0);
    PlayerTextDrawSetProportional(playerid,TextFome[ 3 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TextFome[ 3 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TextFome[ 3 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TextFome[ 3 ][ playerid ], 865856767);
	PlayerTextDrawTextSize(playerid,TextFome[ 3 ][ playerid ], 10.000000, 9.000000);
    PlayerTextDrawSetSelectable(playerid,TextFome[ 3 ][ playerid ], 0);


	TextSede[ 0 ][ playerid ] = CreatePlayerTextDraw(playerid,611.000000, 144.000000, "Fundo Branco");
	PlayerTextDrawBackgroundColor(playerid,TextSede[ 0 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TextSede[ 0 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TextSede[ 0 ][ playerid ], 0.500000, 0.399998);
	PlayerTextDrawColor(playerid,TextSede[ 0 ][ playerid ], -256);
	PlayerTextDrawSetOutline(playerid,TextSede[ 0 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TextSede[ 0 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TextSede[ 0 ][ playerid ], 0);
	PlayerTextDrawUseBox(playerid,TextSede[ 0 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TextSede[ 0 ][ playerid ], 85);
	PlayerTextDrawTextSize(playerid,TextSede[ 0 ][ playerid ], 494.000000, -2.000000);
    PlayerTextDrawSetSelectable(playerid,TextSede[ 0 ][ playerid ], 0);

	TextSede[ 1 ][ playerid ] = CreatePlayerTextDraw(playerid,608.000000, 147.000000, "Fundo Amarelo");
	PlayerTextDrawBackgroundColor(playerid,TextSede[ 1 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TextSede[ 1 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TextSede[ 1 ][ playerid ], 0.500000, 0.099999);
	PlayerTextDrawColor(playerid,TextSede[ 1 ][ playerid ], -256);
	PlayerTextDrawSetOutline(playerid,TextSede[ 1 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TextSede[ 1 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TextSede[ 1 ][ playerid ], 0);
	PlayerTextDrawUseBox(playerid,TextSede[ 1 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TextSede[ 1 ][ playerid ], 865717298);
	PlayerTextDrawTextSize(playerid,TextSede[ 1 ][ playerid ], 513.000000, -2.000000);
    PlayerTextDrawSetSelectable(playerid,TextSede[ 1 ][ playerid ], 0);

	TextSede[ 2 ][ playerid ] = CreatePlayerTextDraw(playerid,608.000000, 147.000000, "Barra Amarela");
	PlayerTextDrawBackgroundColor(playerid,TextSede[ 2 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TextSede[ 2 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TextSede[ 2 ][ playerid ], 0.500000, 0.099999);
	PlayerTextDrawColor(playerid,TextSede[ 2 ][ playerid ], -256);
	PlayerTextDrawSetOutline(playerid,TextSede[ 2 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TextSede[ 2 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TextSede[ 2 ][ playerid ], 0);
	PlayerTextDrawUseBox(playerid,TextSede[ 2 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TextSede[ 2 ][ playerid ], 865856767);
	PlayerTextDrawTextSize(playerid,TextSede[ 2 ][ playerid ], 604.000000, 0.000000); //85
    PlayerTextDrawSetSelectable(playerid,TextSede[ 2 ][ playerid ], 0);

 /*   TextSede[ 3 ][ playerid ] = CreatePlayerTextDraw(playerid,611.000000, 160.000000, "Fundo Branco");
    PlayerTextDrawBackgroundColor(playerid,TextSede[ 3 ][ playerid ], 255);
    PlayerTextDrawFont(playerid,TextSede[ 3 ][ playerid ], 1);
    PlayerTextDrawLetterSize(playerid,TextSede[ 3 ][ playerid ], 0.500000, 0.399998);
    PlayerTextDrawColor(playerid,TextSede[ 3 ][ playerid ], -256);
    PlayerTextDrawSetOutline(playerid,TextSede[ 3 ][ playerid ], 0);
    PlayerTextDrawSetProportional(playerid,TextSede[ 3 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TextSede[ 3 ][ playerid ], 0);
	PlayerTextDrawUseBox(playerid,TextSede[ 3 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TextSede[ 3 ][ playerid ], 85);
	PlayerTextDrawTextSize(playerid,TextSede[ 3 ][ playerid ], 494.000000, -2.000000);
    PlayerTextDrawSetSelectable(playerid,TextSede[ 3 ][ playerid ], 0);*/

    TextSede[ 4 ][ playerid ] = CreatePlayerTextDraw(playerid,502.000000, 142.000000, "hud:radar_dateDrink");
    PlayerTextDrawBackgroundColor(playerid,TextSede[ 4 ][ playerid ], 255);
    PlayerTextDrawFont(playerid,TextSede[ 4 ][ playerid ], 4);
    PlayerTextDrawLetterSize(playerid,TextSede[ 4 ][ playerid ], 0.330000, 4.599998);
    PlayerTextDrawColor(playerid,TextSede[ 4 ][ playerid ], -1);
    PlayerTextDrawSetOutline(playerid,TextSede[ 4 ][ playerid ], 0);
    PlayerTextDrawSetProportional(playerid,TextSede[ 4 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TextSede[ 4 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TextSede[ 4 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TextSede[ 4 ][ playerid ], 865856767);
	PlayerTextDrawTextSize(playerid,TextSede[ 4 ][ playerid ], 9.000000, 11.000000);
    PlayerTextDrawSetSelectable(playerid,TextSede[ 4 ][ playerid ], 0);

	// ======================================================

	TextTutorial[ playerid ][ 0 ] = CreatePlayerTextDraw(playerid,320.000000, 342.000000, "_");
	PlayerTextDrawAlignment(playerid,TextTutorial[ playerid ][ 0 ], 2);
	PlayerTextDrawBackgroundColor(playerid,TextTutorial[ playerid ][ 0 ], 255);
	PlayerTextDrawFont(playerid,TextTutorial[ playerid ][ 0 ], 1);
	PlayerTextDrawLetterSize(playerid,TextTutorial[ playerid ][ 0 ], 0.500000, 12.000000);
	PlayerTextDrawColor(playerid,TextTutorial[ playerid ][ 0 ], -1);
	PlayerTextDrawSetOutline(playerid,TextTutorial[ playerid ][ 0 ], 0);
	PlayerTextDrawSetProportional(playerid,TextTutorial[ playerid ][ 0 ], 1);
	PlayerTextDrawSetShadow(playerid,TextTutorial[ playerid ][ 0 ], 1);
	PlayerTextDrawUseBox(playerid,TextTutorial[ playerid ][ 0 ], 1);
	PlayerTextDrawBoxColor(playerid,TextTutorial[ playerid ][ 0 ], 119);
	PlayerTextDrawTextSize(playerid,TextTutorial[ playerid ][ 0 ], 0.000000, -645.000000);
	PlayerTextDrawSetSelectable(playerid,TextTutorial[ playerid ][ 0 ], 0);

	TextTutorial[ playerid ][ 1 ] = CreatePlayerTextDraw(playerid,320.000000, 342.000000, "_");
	PlayerTextDrawAlignment(playerid,TextTutorial[ playerid ][ 1 ], 2);
	PlayerTextDrawBackgroundColor(playerid,TextTutorial[ playerid ][ 1 ], 255);
	PlayerTextDrawFont(playerid,TextTutorial[ playerid ][ 1 ], 1);
	PlayerTextDrawLetterSize(playerid,TextTutorial[ playerid ][ 1 ], 0.500000, 1.200000);
	PlayerTextDrawColor(playerid,TextTutorial[ playerid ][ 1 ], -1);
	PlayerTextDrawSetOutline(playerid,TextTutorial[ playerid ][ 1 ], 0);
	PlayerTextDrawSetProportional(playerid,TextTutorial[ playerid ][ 1 ], 1);
	PlayerTextDrawSetShadow(playerid,TextTutorial[ playerid ][ 1 ], 1);
	PlayerTextDrawUseBox(playerid,TextTutorial[ playerid ][ 1 ], 1);
	PlayerTextDrawBoxColor(playerid,TextTutorial[ playerid ][ 1 ], -16777148);
	PlayerTextDrawTextSize(playerid,TextTutorial[ playerid ][ 1 ], 0.000000, -645.000000);
	PlayerTextDrawSetSelectable(playerid,TextTutorial[ playerid ][ 1 ], 0);

	TextTutorial[ playerid ][ 2 ] = CreatePlayerTextDraw(playerid,320.000000, 357.000000, "....");
	PlayerTextDrawAlignment(playerid,TextTutorial[ playerid ][ 2 ], 2);
	PlayerTextDrawBackgroundColor(playerid,TextTutorial[ playerid ][ 2 ], 255);
	PlayerTextDrawFont(playerid,TextTutorial[ playerid ][ 2 ], 1);
	PlayerTextDrawLetterSize(playerid,TextTutorial[ playerid ][ 2 ], 0.329998, 1.500000);
	PlayerTextDrawColor(playerid,TextTutorial[ playerid ][ 2 ], -1);
	PlayerTextDrawSetOutline(playerid,TextTutorial[ playerid ][ 2 ], 1);
	PlayerTextDrawSetProportional(playerid,TextTutorial[ playerid ][ 2 ], 1);
	PlayerTextDrawSetSelectable(playerid,TextTutorial[ playerid ][ 2 ], 0);

	TextTutorial[ playerid ][ 3 ] = CreatePlayerTextDraw(playerid,321.000000, 380.000000, "....~n~....~n~....~n~....~n~....");
	PlayerTextDrawAlignment(playerid,TextTutorial[ playerid ][ 3 ], 2);
	PlayerTextDrawBackgroundColor(playerid,TextTutorial[ playerid ][ 3 ], 255);
	PlayerTextDrawFont(playerid,TextTutorial[ playerid ][ 3 ], 1);
	PlayerTextDrawLetterSize(playerid,TextTutorial[ playerid ][ 3 ], 0.250000, 1.299999);
	PlayerTextDrawColor(playerid,TextTutorial[ playerid ][ 3 ], -1);
	PlayerTextDrawSetOutline(playerid,TextTutorial[ playerid ][ 3 ], 0);
	PlayerTextDrawSetProportional(playerid,TextTutorial[ playerid ][ 3 ], 1);
	PlayerTextDrawSetShadow(playerid,TextTutorial[ playerid ][ 3 ], 1);
	PlayerTextDrawSetSelectable(playerid,TextTutorial[ playerid ][ 3 ], 0);

	//Tutorial Textdraw
	Tutorial[ playerid ][ 0 ] = CreatePlayerTextDraw(playerid,306.000000, 134.000000, "_");
	PlayerTextDrawAlignment(playerid,Tutorial[ playerid ][ 0 ], 2);
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 0 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][0], 1);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][0], 0.500000, 25.599994);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][0], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][0], 0);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][0], 1);
	PlayerTextDrawSetShadow(playerid,Tutorial[ playerid ][0], 1);
	PlayerTextDrawUseBox(playerid,Tutorial[ playerid ][0], 1);
	PlayerTextDrawBoxColor(playerid,Tutorial[ playerid ][0], 187);
	PlayerTextDrawTextSize(playerid,Tutorial[ playerid ][0], 0.000000, 424.000000);
	PlayerTextDrawSetSelectable(playerid,Tutorial[ playerid ][0], 0);

	Tutorial[ playerid ][ 1 ] = CreatePlayerTextDraw(playerid,306.000000, 120.000000, "_");
	PlayerTextDrawAlignment(playerid,Tutorial[ playerid ][ 1 ], 2);
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 1 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][ 1 ], 1);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][ 1 ], 0.500000, 0.899999);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][ 1 ], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][ 1 ], 0);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][ 1 ], 1);
	PlayerTextDrawSetShadow(playerid,Tutorial[ playerid ][ 1 ], 1);
	PlayerTextDrawUseBox(playerid,Tutorial[ playerid ][ 1 ], 1);
	PlayerTextDrawBoxColor(playerid,Tutorial[ playerid ][ 1 ], 744161279);
	PlayerTextDrawTextSize(playerid,Tutorial[ playerid ][ 1 ], 0.000000, 424.000000);
	PlayerTextDrawSetSelectable(playerid,Tutorial[ playerid ][ 1 ], 0);

    Tutorial[ playerid ][ 5 ] = CreatePlayerTextDraw(playerid,306.000000, 369.000000, "_");
	PlayerTextDrawAlignment(playerid,Tutorial[ playerid ][ 5 ], 2);
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 5 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][ 5 ], 1);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][ 5 ], 0.500000, 0.899999);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][ 5 ], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][ 5 ], 0);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][ 5 ], 1);
	PlayerTextDrawSetShadow(playerid,Tutorial[ playerid ][ 5 ], 1);
	PlayerTextDrawUseBox(playerid,Tutorial[ playerid ][ 5 ], 1);
	PlayerTextDrawBoxColor(playerid,Tutorial[ playerid ][ 5 ], 744161279);
	PlayerTextDrawTextSize(playerid,Tutorial[ playerid ][ 5 ], 0.000000, 424.000000);
	PlayerTextDrawSetSelectable(playerid,Tutorial[ playerid ][ 5 ], 0);

	Tutorial[ playerid ][ 2 ] = CreatePlayerTextDraw(playerid,230.000000, 119.000000, "~r~] ~w~basico ~r~]");
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 2 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][ 2 ], 2);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][ 2 ], 0.469999, 0.899999);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][ 2 ], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][ 2 ], 1);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][ 2 ], 1);
	PlayerTextDrawSetSelectable(playerid,Tutorial[ playerid ][ 2 ], 0);

	Tutorial[ playerid ][ 3 ] = CreatePlayerTextDraw(playerid,117.000000, 154.000000, "_"); //Title
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 3 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][ 3 ], 2);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][ 3 ], 0.379999, 1.399999);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][ 3 ], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][ 3 ], 0);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][ 3 ], 1);
	PlayerTextDrawSetShadow(playerid,Tutorial[ playerid ][ 3 ], 1);
	PlayerTextDrawSetSelectable(playerid,Tutorial[ playerid ][ 3 ], 0);

	Tutorial[ playerid ][ 4 ] = CreatePlayerTextDraw(playerid,116.000000, 190.000000, "_");//Conteudo
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 4 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][ 4 ], 1);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][ 4 ], 0.319999, 1.199998);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][ 4 ], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][ 4 ], 0);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][ 4 ], 1);
	PlayerTextDrawSetShadow(playerid,Tutorial[ playerid ][ 4 ], 1);
	PlayerTextDrawSetSelectable(playerid,Tutorial[ playerid ][ 4 ], 0);

	Tutorial[ playerid ][ 6 ] = CreatePlayerTextDraw(playerid,503.000000, 315.000000, "_");
	PlayerTextDrawAlignment(playerid,Tutorial[ playerid ][ 6 ], 2);
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 6 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][ 6 ], 1);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][ 6 ], 0.500000, 1.899999);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][ 6 ], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][ 6 ], 0);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][ 6 ], 1);
	PlayerTextDrawSetShadow(playerid,Tutorial[ playerid ][ 6 ], 1);
	PlayerTextDrawUseBox(playerid,Tutorial[ playerid ][ 6 ], 1);
	PlayerTextDrawBoxColor(playerid,Tutorial[ playerid ][ 6 ], 744161279);
	PlayerTextDrawTextSize(playerid,Tutorial[ playerid ][ 6 ], 0.000000, 55.000000);
	PlayerTextDrawSetSelectable(playerid,Tutorial[ playerid ][ 6 ], 0);

	Tutorial[ playerid ][ 7 ] = CreatePlayerTextDraw(playerid,503.000000, 340.000000, "_");
	PlayerTextDrawAlignment(playerid,Tutorial[ playerid ][ 7 ], 2);
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 7 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][ 7 ], 1);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][ 7 ], 0.500000, 1.899999);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][ 7 ], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][ 7 ], 0);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][ 7 ], 1);
	PlayerTextDrawSetShadow(playerid,Tutorial[ playerid ][ 7 ], 1);
	PlayerTextDrawUseBox(playerid,Tutorial[ playerid ][ 7 ], 1);
	PlayerTextDrawBoxColor(playerid,Tutorial[ playerid ][ 7 ], 744161279);
	PlayerTextDrawTextSize(playerid,Tutorial[ playerid ][ 7 ], 0.000000, 55.000000);
	PlayerTextDrawSetSelectable(playerid,Tutorial[ playerid ][ 7 ], 0);

    Tutorial[ playerid ][ 8 ] = CreatePlayerTextDraw(playerid,492.000000, 318.000000, "Prox");
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 8 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][ 8 ], 1);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][ 8 ], 0.310000, 0.899999);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][ 8 ], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][ 8 ], 1);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][ 8 ], 1);
	PlayerTextDrawUseBox(playerid,Tutorial[ playerid ][ 8 ], 1);
	PlayerTextDrawBoxColor(playerid,Tutorial[ playerid ][ 8 ], 0);
	PlayerTextDrawTextSize(playerid,Tutorial[ playerid ][ 8 ], 517.000000, 10.000000);

	PlayerTextDrawSetSelectable(playerid, Tutorial[ playerid ][ 8 ], 1);

	Tutorial[ playerid ][ 9 ] = CreatePlayerTextDraw(playerid,495.000000, 343.000000, "Ant");
	PlayerTextDrawBackgroundColor(playerid,Tutorial[ playerid ][ 9 ], 255);
	PlayerTextDrawFont(playerid,Tutorial[ playerid ][ 9 ], 1);
	PlayerTextDrawLetterSize(playerid,Tutorial[ playerid ][ 9 ], 0.310000, 0.899999);
	PlayerTextDrawColor(playerid,Tutorial[ playerid ][ 9 ], -1);
	PlayerTextDrawSetOutline(playerid,Tutorial[ playerid ][ 9 ], 1);
	PlayerTextDrawSetProportional(playerid,Tutorial[ playerid ][ 9 ], 1);
	PlayerTextDrawUseBox(playerid,Tutorial[ playerid ][ 9 ], 1);
	PlayerTextDrawBoxColor(playerid,Tutorial[ playerid ][ 9 ], 0);
	PlayerTextDrawTextSize(playerid,Tutorial[ playerid ][ 9 ], 520.000000, 10.000000);

	PlayerTextDrawSetSelectable(playerid, Tutorial[ playerid ][ 9 ], 1);


	TuningCores[ 0 ][ playerid ] = CreatePlayerTextDraw(playerid,120.000000, 130.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 0 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 0 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 0 ][ playerid ], 0.500000, 12.000000);
	PlayerTextDrawColor(playerid,TuningCores[ 0 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 0 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 0 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 0 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 0 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 0 ][ playerid ], 153);
	PlayerTextDrawTextSize(playerid,TuningCores[ 0 ][ playerid ], 21.000000, 0.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 0 ][ playerid ], 0);

	TuningCores[ 1 ][ playerid ] = CreatePlayerTextDraw(playerid,119.000000, 131.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 1 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 1 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 1 ][ playerid ], 0.500000, 1.199998);
	PlayerTextDrawColor(playerid,TuningCores[ 1 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 1 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 1 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 1 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 1 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 1 ][ playerid ], -522856961);
	PlayerTextDrawTextSize(playerid,TuningCores[ 1 ][ playerid ], 22.000000, 0.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 1 ][ playerid ], 0);

	TuningCores[ 2 ][ playerid ] = CreatePlayerTextDraw(playerid,62.000000, 130.000000, "Cores");
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 2 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 2 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 2 ][ playerid ], 0.200000, 1.100000);
	PlayerTextDrawColor(playerid,TuningCores[ 2 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 2 ][ playerid ], 1);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 2 ][ playerid ], 1);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 2 ][ playerid ], 0);

	TuningCores[ 3 ][ playerid ] = CreatePlayerTextDraw(playerid,71.000000, 226.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 3 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 3 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 3 ][ playerid ], 0.500000, 1.199998);
	PlayerTextDrawColor(playerid,TuningCores[ 3 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 3 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 3 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 3 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 3 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 3 ][ playerid ], -522856961);
	PlayerTextDrawTextSize(playerid,TuningCores[ 3 ][ playerid ], 22.000000, 0.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 3 ][ playerid ], 0);

	TuningCores[ 4 ][ playerid ] = CreatePlayerTextDraw(playerid,119.000000, 226.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 4 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 4 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 4 ][ playerid ], 0.500000, 1.199998);
	PlayerTextDrawColor(playerid,TuningCores[ 4 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 4 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 4 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 4 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 4 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 4 ][ playerid ], -522856961);
	PlayerTextDrawTextSize(playerid,TuningCores[ 4 ][ playerid ], 69.000000, 0.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 4 ][ playerid ], 0);

	TuningCores[ 5 ][ playerid ] = CreatePlayerTextDraw(playerid,82.000000, 225.000000, "Aplicar");
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 5 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 5 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 5 ][ playerid ], 0.189999, 1.299999);
	PlayerTextDrawColor(playerid,TuningCores[ 5 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 5 ][ playerid ], 1);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 5 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 5 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 5 ][ playerid ], 0);
	PlayerTextDrawTextSize(playerid,TuningCores[ 5 ][ playerid ], 104.000000, 12.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 5 ][ playerid ], true);

	TuningCores[ 6 ][ playerid ] = CreatePlayerTextDraw(playerid,33.000000, 225.000000, "Cancelar");
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 6 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 6 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 6 ][ playerid ], 0.189999, 1.299999);
	PlayerTextDrawColor(playerid,TuningCores[ 6 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 6 ][ playerid ], 1);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 6 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 6 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 6 ][ playerid ], 0);
	PlayerTextDrawTextSize(playerid,TuningCores[ 6 ][ playerid ], 61.000000, 12.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 6 ][ playerid ], true);

    TuningCores[ 7 ][ playerid ] = CreatePlayerTextDraw(playerid,45.000000, 153.000000, "_");
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 7 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 7 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 7 ][ playerid ], 0.500000, 1.500000);
	PlayerTextDrawColor(playerid,TuningCores[ 7 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 7 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 7 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 7 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 7 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 7 ][ playerid ], 16711935);
	PlayerTextDrawTextSize(playerid,TuningCores[ 7 ][ playerid ], 26.000000, 12.000000);

	PlayerTextDrawSetSelectable(playerid,TuningCores[ 7 ][ playerid ], true);

	TuningCores[ 8 ][ playerid ] = CreatePlayerTextDraw(playerid,58.000000, 153.000000, "_");
	PlayerTextDrawAlignment(playerid,TuningCores[ 8 ][ playerid ], 2);
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 8 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 8 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 8 ][ playerid ], 0.500000, 1.500000);
	PlayerTextDrawColor(playerid,TuningCores[ 8 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 8 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 8 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 8 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 8 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 8 ][ playerid ], 16711935);
	PlayerTextDrawTextSize(playerid,TuningCores[ 8 ][ playerid ], 0.000000, 11.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 8 ][ playerid ], true);

	TuningCores[ 9 ][ playerid ] = CreatePlayerTextDraw(playerid,81.000000, 153.000000, "_");
	PlayerTextDrawAlignment(playerid,TuningCores[ 9 ][ playerid ], 2);
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 9 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 9 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 9 ][ playerid ], 0.500000, 1.500000);
	PlayerTextDrawColor(playerid,TuningCores[ 9 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 9 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 9 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 9 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 9 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 9 ][ playerid ], 16711935);
	PlayerTextDrawTextSize(playerid,TuningCores[ 9 ][ playerid ], 0.000000, 11.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 9 ][ playerid ], true);

	TuningCores[ 10 ][ playerid ] = CreatePlayerTextDraw(playerid,105.000000, 153.000000, "_");
	PlayerTextDrawAlignment(playerid,TuningCores[ 10 ][ playerid ], 2);
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 10 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 10 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 10 ][ playerid ], 0.500000, 1.500000);
	PlayerTextDrawColor(playerid,TuningCores[ 10 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 10 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 10 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 10 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 10 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 10 ][ playerid ], 16711935);
	PlayerTextDrawTextSize(playerid,TuningCores[ 10 ][ playerid ], 0.000000, 11.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 10 ][ playerid ], true);

	TuningCores[ 11 ][ playerid ] = CreatePlayerTextDraw(playerid,35.000000, 180.000000, "_");
	PlayerTextDrawAlignment(playerid,TuningCores[ 11 ][ playerid ], 2);
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 11 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 11 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 11 ][ playerid ], 0.500000, 1.500000);
	PlayerTextDrawColor(playerid,TuningCores[ 11 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 11 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 11 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 11 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 11 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 11 ][ playerid ], 16711935);
	PlayerTextDrawTextSize(playerid,TuningCores[ 11 ][ playerid ], 0.000000, 11.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 11 ][ playerid ], true);

	TuningCores[ 12 ][ playerid ] = CreatePlayerTextDraw(playerid,58.000000, 180.000000, "_");
	PlayerTextDrawAlignment(playerid,TuningCores[ 12 ][ playerid ], 2);
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 12 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 12 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 12 ][ playerid ], 0.500000, 1.500000);
	PlayerTextDrawColor(playerid,TuningCores[ 12 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 12 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 12 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 12 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 12 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 12 ][ playerid ], 16711935);
	PlayerTextDrawTextSize(playerid,TuningCores[ 12 ][ playerid ], 0.000000, 11.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 12 ][ playerid ], true);

	TuningCores[ 13 ][ playerid ] = CreatePlayerTextDraw(playerid,81.000000, 180.000000, "_");
	PlayerTextDrawAlignment(playerid,TuningCores[ 13 ][ playerid ], 2);
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 13 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 13 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 13 ][ playerid ], 0.500000, 1.500000);
	PlayerTextDrawColor(playerid,TuningCores[ 13 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 13 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 13 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 13 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 13 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 13 ][ playerid ], 16711935);
	PlayerTextDrawTextSize(playerid,TuningCores[ 13 ][ playerid ], 0.000000, 11.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 13 ][ playerid ], true);

	TuningCores[ 14 ][ playerid ] = CreatePlayerTextDraw(playerid,105.000000, 180.000000, "_");
	PlayerTextDrawAlignment(playerid,TuningCores[ 14 ][ playerid ], 2);
	PlayerTextDrawBackgroundColor(playerid,TuningCores[ 14 ][ playerid ], 255);
	PlayerTextDrawFont(playerid,TuningCores[ 14 ][ playerid ], 1);
	PlayerTextDrawLetterSize(playerid,TuningCores[ 14 ][ playerid ], 0.500000, 1.500000);
	PlayerTextDrawColor(playerid,TuningCores[ 14 ][ playerid ], -1);
	PlayerTextDrawSetOutline(playerid,TuningCores[ 14 ][ playerid ], 0);
	PlayerTextDrawSetProportional(playerid,TuningCores[ 14 ][ playerid ], 1);
	PlayerTextDrawSetShadow(playerid,TuningCores[ 14 ][ playerid ], 1);
	PlayerTextDrawUseBox(playerid,TuningCores[ 14 ][ playerid ], 1);
	PlayerTextDrawBoxColor(playerid,TuningCores[ 14 ][ playerid ], 16711935);
	PlayerTextDrawTextSize(playerid,TuningCores[ 14 ][ playerid ], 0.000000, 11.000000);
	PlayerTextDrawSetSelectable(playerid,TuningCores[ 14 ][ playerid ], true);


	//TextDraws comuns nao PlayerText

    EscolherSkinOrg[playerid][0] = TextDrawCreate(90.000000, 200.000000, "<<");
    TextDrawBackgroundColor(EscolherSkinOrg[playerid][0], 255);
    TextDrawFont(EscolherSkinOrg[playerid][0], 1);
    TextDrawLetterSize(EscolherSkinOrg[playerid][0], 0.569998, 4.699998);
    TextDrawColor(EscolherSkinOrg[playerid][0], -1);
    TextDrawSetOutline(EscolherSkinOrg[playerid][0], 1);
    TextDrawSetProportional(EscolherSkinOrg[playerid][0], 1);
    TextDrawUseBox(EscolherSkinOrg[playerid][0], 1);
    TextDrawBoxColor(EscolherSkinOrg[playerid][0], 0);
    TextDrawTextSize(EscolherSkinOrg[playerid][0], 124.000000, 30.000000);
    TextDrawSetSelectable(EscolherSkinOrg[playerid][0], 1);

    EscolherSkinOrg[playerid][1] = TextDrawCreate(524.000000, 197.000000, ">>");
    TextDrawBackgroundColor(EscolherSkinOrg[playerid][1], 255);
    TextDrawFont(EscolherSkinOrg[playerid][1], 1);
    TextDrawLetterSize(EscolherSkinOrg[playerid][1], 0.529999, 5.199998);
    TextDrawColor(EscolherSkinOrg[playerid][1], -1);
    TextDrawSetOutline(EscolherSkinOrg[playerid][1], 1);
    TextDrawSetProportional(EscolherSkinOrg[playerid][1], 1);
    TextDrawUseBox(EscolherSkinOrg[playerid][1], 1);
    TextDrawBoxColor(EscolherSkinOrg[playerid][1], 0);
    TextDrawTextSize(EscolherSkinOrg[playerid][1], 560.000000, 30.000000);
    TextDrawSetSelectable(EscolherSkinOrg[playerid][1], 1);

    EscolherSkinOrg[playerid][2] = TextDrawCreate(280.000000, 346.000000, "   ESCOLHER");
    TextDrawBackgroundColor(EscolherSkinOrg[playerid][2], 255);
    TextDrawFont(EscolherSkinOrg[playerid][2], 2);
    TextDrawLetterSize(EscolherSkinOrg[playerid][2], 0.289999, 2.499998);
    TextDrawColor(EscolherSkinOrg[playerid][2], -1);
    TextDrawSetOutline(EscolherSkinOrg[playerid][2], 1);
    TextDrawSetProportional(EscolherSkinOrg[playerid][2], 1);
    TextDrawUseBox(EscolherSkinOrg[playerid][2], 1);
    TextDrawBoxColor(EscolherSkinOrg[playerid][2], 85);
    TextDrawTextSize(EscolherSkinOrg[playerid][2], 367.000000, 25.000000);
    TextDrawSetSelectable(EscolherSkinOrg[playerid][2], 1);

    ////////////////////


    MenuSelectSkin[playerid][0] = TextDrawCreate(90.000000, 200.000000, "<<");
    TextDrawBackgroundColor(MenuSelectSkin[playerid][0], 255);
    TextDrawFont(MenuSelectSkin[playerid][0], 1);
    TextDrawLetterSize(MenuSelectSkin[playerid][0], 0.569999, 4.699999);
    TextDrawColor(MenuSelectSkin[playerid][0], -1);
    TextDrawSetOutline(MenuSelectSkin[playerid][0], 1);
    TextDrawSetProportional(MenuSelectSkin[playerid][0], 1);
    TextDrawUseBox(MenuSelectSkin[playerid][0], 1);
    TextDrawBoxColor(MenuSelectSkin[playerid][0], 0);
    TextDrawTextSize(MenuSelectSkin[playerid][0], 124.000000, 30.000000);
    TextDrawSetSelectable(MenuSelectSkin[playerid][0], 1);

    MenuSelectSkin[playerid][1] = TextDrawCreate(524.000000, 197.000000, ">>");
    TextDrawBackgroundColor(MenuSelectSkin[playerid][1], 255);
    TextDrawFont(MenuSelectSkin[playerid][1], 1);
    TextDrawLetterSize(MenuSelectSkin[playerid][1], 0.529999, 5.199999);
    TextDrawColor(MenuSelectSkin[playerid][1], -1);
    TextDrawSetOutline(MenuSelectSkin[playerid][1], 1);
    TextDrawSetProportional(MenuSelectSkin[playerid][1], 1);
    TextDrawUseBox(MenuSelectSkin[playerid][1], 1);
    TextDrawBoxColor(MenuSelectSkin[playerid][1], 0);
    TextDrawTextSize(MenuSelectSkin[playerid][1], 560.000000, 30.000000);
    TextDrawSetSelectable(MenuSelectSkin[playerid][1], 1);

    MenuSelectSkin[playerid][2] = TextDrawCreate(227.000000, 353.000000, "_");
    TextDrawBackgroundColor(MenuSelectSkin[playerid][2], 255);
    TextDrawFont(MenuSelectSkin[playerid][2], 1);
    TextDrawLetterSize(MenuSelectSkin[playerid][2], 0.500000, 5.999996);
    TextDrawColor(MenuSelectSkin[playerid][2], -1);
    TextDrawSetOutline(MenuSelectSkin[playerid][2], 0);
    TextDrawSetProportional(MenuSelectSkin[playerid][2], 1);
    TextDrawSetShadow(MenuSelectSkin[playerid][2], 1);
    TextDrawUseBox(MenuSelectSkin[playerid][2], 1);
    TextDrawBoxColor(MenuSelectSkin[playerid][2], 102);
    TextDrawTextSize(MenuSelectSkin[playerid][2], 414.000000, 10.000000);
    TextDrawSetSelectable(MenuSelectSkin[playerid][2], 0);

    MenuSelectSkin[playerid][3] = TextDrawCreate(415.000000, 353.000000, "_");
    TextDrawBackgroundColor(MenuSelectSkin[playerid][3], 255);
    TextDrawFont(MenuSelectSkin[playerid][3], 1);
    TextDrawLetterSize(MenuSelectSkin[playerid][3], 0.500000, 5.999996);
    TextDrawColor(MenuSelectSkin[playerid][3], -1);
    TextDrawSetOutline(MenuSelectSkin[playerid][3], 0);
    TextDrawSetProportional(MenuSelectSkin[playerid][3], 1);
    TextDrawSetShadow(MenuSelectSkin[playerid][3], 1);
    TextDrawUseBox(MenuSelectSkin[playerid][3], 1);
    TextDrawBoxColor(MenuSelectSkin[playerid][3], -16776961);
    TextDrawTextSize(MenuSelectSkin[playerid][3], 414.000000, 10.000000);
    TextDrawSetSelectable(MenuSelectSkin[playerid][3], 0);

    MenuSelectSkin[playerid][4] = TextDrawCreate(227.000000, 353.000000, "_");
    TextDrawBackgroundColor(MenuSelectSkin[playerid][4], 255);
    TextDrawFont(MenuSelectSkin[playerid][4], 1);
    TextDrawLetterSize(MenuSelectSkin[playerid][4], 0.500000, 5.999996);
    TextDrawColor(MenuSelectSkin[playerid][4], -1);
    TextDrawSetOutline(MenuSelectSkin[playerid][4], 0);
    TextDrawSetProportional(MenuSelectSkin[playerid][4], 1);
    TextDrawSetShadow(MenuSelectSkin[playerid][4], 1);
    TextDrawUseBox(MenuSelectSkin[playerid][4], 1);
    TextDrawBoxColor(MenuSelectSkin[playerid][4], -16776961);
    TextDrawTextSize(MenuSelectSkin[playerid][4], 226.000000, 10.000000);
    TextDrawSetSelectable(MenuSelectSkin[playerid][4], 0);

    MenuSelectSkin[playerid][5] = TextDrawCreate(320.000000, 355.000000, "ID: 200 VALOR: $ 250");
    TextDrawAlignment(MenuSelectSkin[playerid][5], 2);
    TextDrawBackgroundColor(MenuSelectSkin[playerid][5], 255);
    TextDrawFont(MenuSelectSkin[playerid][5], 2);
    TextDrawLetterSize(MenuSelectSkin[playerid][5], 0.250000, 1.500000);
    TextDrawColor(MenuSelectSkin[playerid][5], -1);
    TextDrawSetOutline(MenuSelectSkin[playerid][5], 1);
    TextDrawSetProportional(MenuSelectSkin[playerid][5], 1);
    TextDrawSetSelectable(MenuSelectSkin[playerid][5], 0);

    MenuSelectSkin[playerid][6] = TextDrawCreate(319.000000, 383.000000, "_");
    TextDrawBackgroundColor(MenuSelectSkin[playerid][6], 255);
    TextDrawFont(MenuSelectSkin[playerid][6], 1);
    TextDrawLetterSize(MenuSelectSkin[playerid][6], 0.500000, 2.699995);
    TextDrawColor(MenuSelectSkin[playerid][6], -1);
    TextDrawSetOutline(MenuSelectSkin[playerid][6], 0);
    TextDrawSetProportional(MenuSelectSkin[playerid][6], 1);
    TextDrawSetShadow(MenuSelectSkin[playerid][6], 1);
    TextDrawUseBox(MenuSelectSkin[playerid][6], 1);
    TextDrawBoxColor(MenuSelectSkin[playerid][6], -16776961);
    TextDrawTextSize(MenuSelectSkin[playerid][6], 318.000000, 11.000000);
    TextDrawSetSelectable(MenuSelectSkin[playerid][6], 0);

    MenuSelectSkin[playerid][7] = TextDrawCreate(235.000000, 386.000000, " COMPRAR");
    TextDrawBackgroundColor(MenuSelectSkin[playerid][7], 255);
    TextDrawFont(MenuSelectSkin[playerid][7], 2);
    TextDrawLetterSize(MenuSelectSkin[playerid][7], 0.329999, 1.799999);
    TextDrawColor(MenuSelectSkin[playerid][7], -1);
    TextDrawSetOutline(MenuSelectSkin[playerid][7], 1);
    TextDrawSetProportional(MenuSelectSkin[playerid][7], 1);
    TextDrawUseBox(MenuSelectSkin[playerid][7], 1);
    TextDrawBoxColor(MenuSelectSkin[playerid][7], 0);
    TextDrawTextSize(MenuSelectSkin[playerid][7], 311.000000, 15.000000);
    TextDrawSetSelectable(MenuSelectSkin[playerid][7], 1);

    MenuSelectSkin[playerid][8] = TextDrawCreate(338.000000, 386.000000, " CANCELAR");
    TextDrawBackgroundColor(MenuSelectSkin[playerid][8], 255);
    TextDrawFont(MenuSelectSkin[playerid][8], 2);
    TextDrawLetterSize(MenuSelectSkin[playerid][8], 0.250000, 1.899999);
    TextDrawColor(MenuSelectSkin[playerid][8], -1);
    TextDrawSetOutline(MenuSelectSkin[playerid][8], 1);
    TextDrawSetProportional(MenuSelectSkin[playerid][8], 1);
    TextDrawUseBox(MenuSelectSkin[playerid][8], 1);
    TextDrawBoxColor(MenuSelectSkin[playerid][8], 0);
    TextDrawTextSize(MenuSelectSkin[playerid][8], 402.000000, 15.000000);
    TextDrawSetSelectable(MenuSelectSkin[playerid][8], 1);

	// Guia do User

    TimerPHIndividual[playerid] = TextDrawCreate(71.000000, 297.000000, "00:00:00");
	TextDrawBackgroundColor(TimerPHIndividual[ playerid ], 255);
	TextDrawFont(TimerPHIndividual[ playerid ], 2);
	TextDrawLetterSize(TimerPHIndividual[ playerid ], 0.200000, 2.000000);
	TextDrawColor(TimerPHIndividual[ playerid ], -1);
	TextDrawSetOutline(TimerPHIndividual[ playerid ], 1);
	TextDrawSetProportional(TimerPHIndividual[ playerid ], 1);
	TextDrawSetSelectable(TimerPHIndividual[ playerid ], 0);

    ConceMenu[ playerid ][ 0 ] = TextDrawCreate(234.000000, 360.000000, "_");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 0 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 0 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 0 ], 0.519999, 8.200002);
    TextDrawColor(ConceMenu[ playerid ][ 0 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 0 ], 0);
    TextDrawSetProportional(ConceMenu[ playerid ][ 0 ], 1);
    TextDrawSetShadow(ConceMenu[ playerid ][ 0 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 0 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 0 ], 102);
    TextDrawTextSize(ConceMenu[ playerid ][ 0 ], 405.000000, 50.000000);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 0 ], 0);

    ConceMenu[ playerid ][ 1 ] = TextDrawCreate(243.000000, 365.000000, "Veiculo:~n~Vel Max:~n~Km/l:~n~Preco:~n~Level:");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 1 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 1 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 1 ], 0.240000, 1.400000);
    TextDrawColor(ConceMenu[ playerid ][ 1 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 1 ], 1);
    TextDrawSetProportional(ConceMenu[ playerid ][ 1 ], 1);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 1 ], 0);

    ConceMenu[ playerid ][ 2 ] = TextDrawCreate(286.000000, 365.000000, "Landstalker~n~200~n~10~n~$ 200,000~n~1");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 2 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 2 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 2 ], 0.230000, 1.400000);
    TextDrawColor(ConceMenu[ playerid ][ 2 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 2 ], 1);
    TextDrawSetProportional(ConceMenu[ playerid ][ 2 ], 1);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 2 ], 0);

    ConceMenu[ playerid ][ 3 ] = TextDrawCreate(347.000000, 360.000000, "_");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 3 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 3 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 3 ], 0.519999, 8.200002);
    TextDrawColor(ConceMenu[ playerid ][ 3 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 3 ], 0);
    TextDrawSetProportional(ConceMenu[ playerid ][ 3 ], 1);
    TextDrawSetShadow(ConceMenu[ playerid ][ 3 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 3 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 3 ], -16776961);
    TextDrawTextSize(ConceMenu[ playerid ][ 3 ], 345.000000, 51.000000);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 3 ], 0);

    ConceMenu[ playerid ][ 4 ] = TextDrawCreate(234.000000, 360.000000, "_");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 4 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 4 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 4 ], 0.519999, 8.200002);
    TextDrawColor(ConceMenu[ playerid ][ 4 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 4 ], 0);
    TextDrawSetProportional(ConceMenu[ playerid ][ 4 ], 1);
    TextDrawSetShadow(ConceMenu[ playerid ][ 4 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 4 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 4 ], -16776961);
    TextDrawTextSize(ConceMenu[ playerid ][ 4 ], 232.000000, 51.000000);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 4 ], 0);

    ConceMenu[ playerid ][ 5 ] = TextDrawCreate(174.000000, 381.000000, "<<");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 5 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 5 ], 0.509999, 3.199999);
    TextDrawColor(ConceMenu[ playerid ][ 5 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawSetProportional(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 5 ], 0);
    TextDrawTextSize(ConceMenu[ playerid ][ 5 ], 209.000000, 20.000000);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 5 ], 1);

    ConceMenu[ playerid ][ 6 ] = TextDrawCreate(439.000000, 381.000000, ">>");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 6 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 6 ], 0.509999, 3.199999);
    TextDrawColor(ConceMenu[ playerid ][ 6 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawSetProportional(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 6 ], 0);
    TextDrawTextSize(ConceMenu[ playerid ][ 6 ], 471.000000, 20.000000);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 6 ], 1);

    ConceMenu[ playerid ][ 7 ] = TextDrawCreate(355.000000, 369.000000, "Comprar");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 7 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 7 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 7 ], 0.290000, 1.500000);
    TextDrawColor(ConceMenu[ playerid ][ 7 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 7 ], 1);
    TextDrawSetProportional(ConceMenu[ playerid ][ 7 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 7 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 7 ], 0);
    TextDrawTextSize(ConceMenu[ playerid ][ 7 ], 398.000000, 20.000000);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 7 ], 1);

    ConceMenu[ playerid ][ 8 ] = TextDrawCreate(356.000000, 409.000000, "Cancelar");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 8 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 8 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 8 ], 0.290000, 1.500000);
    TextDrawColor(ConceMenu[ playerid ][ 8 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 8 ], 1);
    TextDrawSetProportional(ConceMenu[ playerid ][ 8 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 8 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 8 ], 0);
    TextDrawTextSize(ConceMenu[ playerid ][ 8 ], 396.000000, 20.000000);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 8 ], 1);

    ConceMenu[ playerid ][ 9 ] = TextDrawCreate(408.000000, 360.000000, "_");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 9 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 9 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 9 ], 1.030000, 8.200002);
    TextDrawColor(ConceMenu[ playerid ][ 9 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 9 ], 0);
    TextDrawSetProportional(ConceMenu[ playerid ][ 9 ], 1);
    TextDrawSetShadow(ConceMenu[ playerid ][ 9 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 9 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 9 ], -16776961);
    TextDrawTextSize(ConceMenu[ playerid ][ 9 ], 404.000000, 51.000000);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 9 ], 0);

/*	ConceMenu[ playerid ][ 0 ] = TextDrawCreate(379.000000, 352.000000, "_");
	TextDrawBackgroundColor(ConceMenu[ playerid ][ 0 ], 255);
	TextDrawFont(ConceMenu[ playerid ][ 0 ], 1);
	TextDrawLetterSize(ConceMenu[ playerid ][ 0 ], 0.500000, 9.000000);
	TextDrawColor(ConceMenu[ playerid ][ 0 ], -1);
	TextDrawSetOutline(ConceMenu[ playerid ][ 0 ], 0);
	TextDrawSetProportional(ConceMenu[ playerid ][ 0 ], 1);
	TextDrawSetShadow(ConceMenu[ playerid ][ 0 ], 1);
	TextDrawUseBox(ConceMenu[ playerid ][ 0 ], 1);
	TextDrawBoxColor(ConceMenu[ playerid ][ 0 ], 136);
	TextDrawTextSize(ConceMenu[ playerid ][ 0 ], 194.000000, 0.000000);
	TextDrawSetSelectable(ConceMenu[ playerid ][ 0 ], 0);

	ConceMenu[ playerid ][ 1 ] = TextDrawCreate(203.000000, 357.000000, "Veiculo:~n~Vel Max:~n~Km/l:~n~Preco:~n~Level:~n~Cash:");
	TextDrawBackgroundColor(ConceMenu[ playerid ][ 1 ], 255);
	TextDrawFont(ConceMenu[ playerid ][ 1 ], 1);
	TextDrawLetterSize(ConceMenu[ playerid ][ 1 ], 0.259999, 1.300000);
	TextDrawColor(ConceMenu[ playerid ][ 1 ], -1);
	TextDrawSetOutline(ConceMenu[ playerid ][ 1 ], 0);
	TextDrawSetProportional(ConceMenu[ playerid ][ 1 ], 1);
	TextDrawSetShadow(ConceMenu[ playerid ][ 1 ], 1);

	ConceMenu[ playerid ][ 2 ] = TextDrawCreate(247.000000, 357.000000, "indisponivel~n~000~n~00~n~~g~$ ~w~000,000~n~~g~0~n~~w~00");
	TextDrawBackgroundColor(ConceMenu[ playerid ][ 2 ], 255);
	TextDrawFont(ConceMenu[ playerid ][ 2 ], 1);
	TextDrawLetterSize(ConceMenu[ playerid ][ 2 ], 0.259999, 1.300000);
	TextDrawColor(ConceMenu[ playerid ][ 2 ], -1);
	TextDrawSetOutline(ConceMenu[ playerid ][ 2 ], 0);
	TextDrawSetProportional(ConceMenu[ playerid ][ 2 ], 1);
	TextDrawSetShadow(ConceMenu[ playerid ][ 2 ], 1);

	ConceMenu[ playerid ][ 3 ] = TextDrawCreate(296.000000, 324.000000, "l");
	TextDrawBackgroundColor(ConceMenu[ playerid ][ 3 ], 255);
	TextDrawFont(ConceMenu[ playerid ][ 3 ], 1);
	TextDrawLetterSize(ConceMenu[ playerid ][ 3 ], 0.259999, 14.100000);
	TextDrawColor(ConceMenu[ playerid ][ 3 ], -1);
	TextDrawSetOutline(ConceMenu[ playerid ][ 3 ], 0);
	TextDrawSetProportional(ConceMenu[ playerid ][ 3 ], 1);
	TextDrawSetShadow(ConceMenu[ playerid ][ 3 ], 1);
	TextDrawSetSelectable(ConceMenu[ playerid ][ 3 ], 0);

	ConceMenu[ playerid ][ 4 ] = TextDrawCreate(308.000000, 357.000000, "Ant      Prox");
	TextDrawBackgroundColor(ConceMenu[ playerid ][ 4 ], 255);
	TextDrawFont(ConceMenu[ playerid ][ 4 ], 1);
	TextDrawLetterSize(ConceMenu[ playerid ][ 4 ], 0.259999, 1.000000);
	TextDrawColor(ConceMenu[ playerid ][ 4 ], -1);
	TextDrawSetOutline(ConceMenu[ playerid ][ 4 ], 0);
	TextDrawSetProportional(ConceMenu[ playerid ][ 4 ], 1);
	TextDrawSetShadow(ConceMenu[ playerid ][ 4 ], 1);
	TextDrawSetSelectable(ConceMenu[ playerid ][ 4 ], 0);

    ConceMenu[ playerid ][ 5 ] = TextDrawCreate(310.000000, 369.000000, "LD_BEAT:left");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 5 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 5 ], 4);
    TextDrawLetterSize(ConceMenu[ playerid ][ 5 ], 0.259999, 1.000000);
    TextDrawColor(ConceMenu[ playerid ][ 5 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 5 ], 0);
    TextDrawSetProportional(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawSetShadow(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 5 ], 255);
    TextDrawTextSize(ConceMenu[ playerid ][ 5 ], 17.000000, 19.000000);

    TextDrawSetSelectable(ConceMenu[ playerid ][ 5 ], true);

    ConceMenu[ playerid ][ 6 ] = TextDrawCreate(345.000000, 369.000000, "LD_BEAT:right");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 6 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 6 ], 4);
    TextDrawLetterSize(ConceMenu[ playerid ][ 6 ], 0.259999, 1.000000);
    TextDrawColor(ConceMenu[ playerid ][ 6 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 6 ], 0);
    TextDrawSetProportional(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawSetShadow(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 6 ], 255);
    TextDrawTextSize(ConceMenu[ playerid ][ 6 ], 17.000000, 19.000000);

    TextDrawSetSelectable(ConceMenu[ playerid ][ 6 ], true);


    ConceMenu[ playerid ][ 5 ] = TextDrawCreate(307.000000, 367.000000, "<<");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 5 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 5 ], 0.370000, 2.300000);
    TextDrawColor(ConceMenu[ playerid ][ 5 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawSetProportional(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 5 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 5 ], 0);
    TextDrawTextSize(ConceMenu[ playerid ][ 5 ], 100.000000, 30.000000);

    TextDrawSetSelectable(ConceMenu[ playerid ][ 5 ], true);

    ConceMenu[ playerid ][ 6 ] = TextDrawCreate(47.000000, 367.000000, ">>");
    TextDrawBackgroundColor(ConceMenu[ playerid ][ 6 ], 255);
    TextDrawFont(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawLetterSize(ConceMenu[ playerid ][ 6 ], 0.370000, 2.300000);
    TextDrawColor(ConceMenu[ playerid ][ 6 ], -1);
    TextDrawSetOutline(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawSetProportional(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawUseBox(ConceMenu[ playerid ][ 6 ], 1);
    TextDrawBoxColor(ConceMenu[ playerid ][ 6 ], 0);
    TextDrawTextSize(ConceMenu[ playerid ][ 6 ], 100.000000, 30.000000);
    TextDrawSetSelectable(ConceMenu[ playerid ][ 6 ], true);


	ConceMenu[ playerid ][ 7 ] = TextDrawCreate(314.000000, 404.000000, "Comprar");
	TextDrawBackgroundColor(ConceMenu[ playerid ][ 7 ], 255);
	TextDrawFont(ConceMenu[ playerid ][ 7 ], 2);
	TextDrawLetterSize(ConceMenu[ playerid ][ 7 ], 0.240000, 1.000000);
	TextDrawColor(ConceMenu[ playerid ][ 7 ], -1);
	TextDrawSetOutline(ConceMenu[ playerid ][ 7 ], 0);
	TextDrawSetProportional(ConceMenu[ playerid ][ 7 ], 1);
	TextDrawSetShadow(ConceMenu[ playerid ][ 7 ], 1);
	TextDrawUseBox(ConceMenu[ playerid ][ 7 ], 1);
	TextDrawBoxColor(ConceMenu[ playerid ][ 7 ], 17);
	TextDrawTextSize(ConceMenu[ playerid ][ 7 ], 364.000000, 10.000000);
	TextDrawSetSelectable(ConceMenu[ playerid ][ 7 ], true);

	ConceMenu[ playerid ][ 8 ] = TextDrawCreate(314.000000, 421.000000, "CANCELAR");
	TextDrawBackgroundColor(ConceMenu[ playerid ][ 8 ], 255);
	TextDrawFont(ConceMenu[ playerid ][ 8 ], 2);
	TextDrawLetterSize(ConceMenu[ playerid ][ 8 ], 0.230000, 1.000000);
	TextDrawColor(ConceMenu[ playerid ][ 8 ], -1);
	TextDrawSetOutline(ConceMenu[ playerid ][ 8 ], 0);
	TextDrawSetProportional(ConceMenu[ playerid ][ 8 ], 1);
	TextDrawSetShadow(ConceMenu[ playerid ][ 8 ], 1);
	TextDrawUseBox(ConceMenu[ playerid ][ 8 ], 1);
	TextDrawBoxColor(ConceMenu[ playerid ][ 8 ], 17);
	TextDrawTextSize(ConceMenu[ playerid ][ 8 ], 366.000000, 10.000000);
	TextDrawSetSelectable(ConceMenu[ playerid ][ 8 ], true); */


/*    CashText[ playerid ][ 0 ] = CreatePlayerTextDraw(playerid,61.000000, 429.000000, "~r~Cash:");
    PlayerTextDrawBackgroundColor(playerid,CashText[ playerid ][ 0 ], 255);
    PlayerTextDrawFont(playerid,CashText[ playerid ][ 0 ], 2);
    PlayerTextDrawLetterSize(playerid,CashText[ playerid ][ 0 ], 0.200000, 1.300000);
    PlayerTextDrawColor(playerid,CashText[ playerid ][ 0 ], -1);
    PlayerTextDrawSetOutline(playerid,CashText[ playerid ][ 0 ], 1);
    PlayerTextDrawSetProportional(playerid,CashText[ playerid ][ 0 ], 1);
    PlayerTextDrawSetSelectable(playerid,CashText[ playerid ][ 0 ], 0);

    CashText[ playerid ][ 1 ] = CreatePlayerTextDraw(playerid,90.000000, 429.000000, "0000");
    PlayerTextDrawBackgroundColor(playerid,CashText[ playerid ][ 1 ] , 255);
    PlayerTextDrawFont(playerid,CashText[ playerid ][ 1 ] , 1);
    PlayerTextDrawLetterSize(playerid,CashText[ playerid ][ 1 ] , 0.220000, 1.300000);
    PlayerTextDrawColor(playerid,CashText[ playerid ][ 1 ] , -1);
    PlayerTextDrawSetOutline(playerid,CashText[ playerid ][ 1 ] , 1);
    PlayerTextDrawSetProportional(playerid,CashText[ playerid ][ 1 ] , 1);
    PlayerTextDrawSetSelectable(playerid,CashText[ playerid ][ 1 ] , 0);*/

	UPText[ playerid ][ 0 ] = CreatePlayerTextDraw(playerid, 2.500000, 411.083526, "");
	PlayerTextDrawBackgroundColor(playerid,UPText[ playerid ][ 0 ], 255);
	PlayerTextDrawFont(playerid,UPText[ playerid ][ 0 ], 1);
	PlayerTextDrawLetterSize(playerid,UPText[ playerid ][ 0 ], 0.200000, 1.600000);
	PlayerTextDrawAlignment(playerid, UPText[ playerid ][ 0 ], 1);
	PlayerTextDrawColor(playerid,UPText[ playerid ][ 0 ], -16776961);
	PlayerTextDrawSetOutline(playerid,UPText[ playerid ][ 0 ], 0);
	PlayerTextDrawSetProportional(playerid,UPText[ playerid ][ 0 ], 1);
	PlayerTextDrawSetSelectable(playerid,UPText[ playerid ][ 0 ], 0);


/*	UPText[ playerid ][ 1 ] = CreatePlayerTextDraw(playerid,31.000000, 429.000000, "00:00");
	PlayerTextDrawBackgroundColor(playerid,UPText[ playerid ][ 1 ], 255);
	PlayerTextDrawFont(playerid,UPText[ playerid ][ 1 ], 1);
	PlayerTextDrawLetterSize(playerid,UPText[ playerid ][ 1 ], 0.219999, 1.299999);
	PlayerTextDrawColor(playerid,UPText[ playerid ][ 1 ], -1);
	PlayerTextDrawSetOutline(playerid,UPText[ playerid ][ 1 ], 1);
	PlayerTextDrawSetProportional(playerid,UPText[ playerid ][ 1 ], 1);
	PlayerTextDrawSetSelectable(playerid,UPText[ playerid ][ 1 ], 0);*/

    textPizzaJobs[playerid][0] = CreatePlayerTextDraw(playerid, 27.000000, 221.000000, "_");
	PlayerTextDrawFont(playerid, textPizzaJobs[playerid][0], 1);
	PlayerTextDrawLetterSize(playerid, textPizzaJobs[playerid][0], 0.600000, 1.450000);
	PlayerTextDrawTextSize(playerid, textPizzaJobs[playerid][0], 99.500000, 18.500000);
	PlayerTextDrawSetOutline(playerid, textPizzaJobs[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, textPizzaJobs[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, textPizzaJobs[playerid][0], 1);
	PlayerTextDrawColor(playerid, textPizzaJobs[playerid][0], -1);
	PlayerTextDrawBackgroundColor(playerid, textPizzaJobs[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, textPizzaJobs[playerid][0], 64);
	PlayerTextDrawUseBox(playerid, textPizzaJobs[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, textPizzaJobs[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, textPizzaJobs[playerid][0], 0);

	textPizzaJobs[playerid][2] = CreatePlayerTextDraw(playerid, 28.000000, 220.000000, "HUD:radar_pizza");
	PlayerTextDrawFont(playerid, textPizzaJobs[playerid][2], 4);
	PlayerTextDrawLetterSize(playerid, textPizzaJobs[playerid][2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, textPizzaJobs[playerid][2], 13.000000, 13.500000);
	PlayerTextDrawSetOutline(playerid, textPizzaJobs[playerid][2], 1);
	PlayerTextDrawSetShadow(playerid, textPizzaJobs[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, textPizzaJobs[playerid][2], 1);
	PlayerTextDrawColor(playerid, textPizzaJobs[playerid][2], -1);
	PlayerTextDrawBackgroundColor(playerid, textPizzaJobs[playerid][2], 255);
	PlayerTextDrawBoxColor(playerid, textPizzaJobs[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, textPizzaJobs[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, textPizzaJobs[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, textPizzaJobs[playerid][2], 0);

	textPizzaJobs[playerid][1] = CreatePlayerTextDraw(playerid, 44.000000, 220.000000, "Pizzas: ~y~10~w~/~y~10");
	PlayerTextDrawFont(playerid, textPizzaJobs[playerid][1], 3);
	PlayerTextDrawLetterSize(playerid, textPizzaJobs[playerid][1], 0.229166, 1.399999);
	PlayerTextDrawTextSize(playerid, textPizzaJobs[playerid][1], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, textPizzaJobs[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, textPizzaJobs[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, textPizzaJobs[playerid][1], 1);
	PlayerTextDrawColor(playerid, textPizzaJobs[playerid][1], -1);
	PlayerTextDrawBackgroundColor(playerid, textPizzaJobs[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, textPizzaJobs[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, textPizzaJobs[playerid][1], 0);
	PlayerTextDrawSetProportional(playerid, textPizzaJobs[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, textPizzaJobs[playerid][1], 0);

	/*textPizzaJobs[playerid][0] = CreatePlayerTextDraw(playerid, 88.000000, 318.000000, "_");
	PlayerTextDrawAlignment(playerid,textPizzaJobs[playerid][0], 2);
	PlayerTextDrawBackgroundColor(playerid,textPizzaJobs[playerid][0], 255);
	PlayerTextDrawFont(playerid,textPizzaJobs[playerid][0], 1);
	PlayerTextDrawLetterSize(playerid,textPizzaJobs[playerid][0], 0.500000, 1.799999);
	PlayerTextDrawColor(playerid,textPizzaJobs[playerid][0], -1);
	PlayerTextDrawSetOutline(playerid,textPizzaJobs[playerid][0], 0);
	PlayerTextDrawSetProportional(playerid,textPizzaJobs[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid,textPizzaJobs[playerid][0], 1);
	PlayerTextDrawUseBox(playerid,textPizzaJobs[playerid][0], 1);
	PlayerTextDrawBoxColor(playerid,textPizzaJobs[playerid][0], 136);
	PlayerTextDrawTextSize(playerid,textPizzaJobs[playerid][0], 77.000000, 63.000000);
	PlayerTextDrawSetSelectable(playerid,textPizzaJobs[playerid][0], 0);

	textPizzaJobs[playerid][1] = CreatePlayerTextDraw(playerid, 58.000000, 317.000000, "Pizzas: ~y~10~w~/~y~10");
	PlayerTextDrawBackgroundColor(playerid,textPizzaJobs[playerid][1], 255);
	PlayerTextDrawFont(playerid,textPizzaJobs[playerid][1], 1);
	PlayerTextDrawLetterSize(playerid,textPizzaJobs[playerid][1], 0.259999, 1.599998);
	PlayerTextDrawColor(playerid,textPizzaJobs[playerid][1], -1);
	PlayerTextDrawSetOutline(playerid,textPizzaJobs[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid,textPizzaJobs[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid,textPizzaJobs[playerid][1], 0);*/

    Carregando[playerid][0] = TextDrawCreate(-9.000000, 0.000000, "_");
    TextDrawBackgroundColor(Carregando[playerid][0], 255);
    TextDrawFont(Carregando[playerid][0], 1);
    TextDrawLetterSize(Carregando[playerid][0], 0.500000, 50.099998);
    TextDrawColor(Carregando[playerid][0], -1);
    TextDrawSetOutline(Carregando[playerid][0], 0);
    TextDrawSetProportional(Carregando[playerid][0], 1);
    TextDrawSetShadow(Carregando[playerid][0], 1);
    TextDrawUseBox(Carregando[playerid][0], 1);
    TextDrawBoxColor(Carregando[playerid][0], 255);
    TextDrawTextSize(Carregando[playerid][0], 650.000000, 0.000000);
    TextDrawSetSelectable(Carregando[playerid][0], 0);

    Carregando[playerid][1] = TextDrawCreate(269.000000, 176.000000, "~y~P~w~lay~y~S~w~tyle");
    TextDrawBackgroundColor(Carregando[playerid][1], 255);
    TextDrawFont(Carregando[playerid][1], 1);
    TextDrawLetterSize(Carregando[playerid][1], 0.539999, 2.900001);
    TextDrawColor(Carregando[playerid][1], -1);
    TextDrawSetOutline(Carregando[playerid][1], 1);
    TextDrawSetProportional(Carregando[playerid][1], 1);
    TextDrawSetSelectable(Carregando[playerid][1], 0);

    Carregando[playerid][2] = TextDrawCreate(326.000000, 192.000000, "~r~Mobile");
    TextDrawBackgroundColor(Carregando[playerid][2], 255);
    TextDrawFont(Carregando[playerid][2], 1);
    TextDrawLetterSize(Carregando[playerid][2], 0.390000, 2.000001);
    TextDrawColor(Carregando[playerid][2], -1);
    TextDrawSetOutline(Carregando[playerid][2], 1);
    TextDrawSetProportional(Carregando[playerid][2], 1);
    TextDrawSetSelectable(Carregando[playerid][2], 0);

    Carregando[playerid][3] = TextDrawCreate(320.000000, 242.000000, "Aguarde");
    TextDrawAlignment(Carregando[playerid][3], 2);
    TextDrawBackgroundColor(Carregando[playerid][3], 255);
    TextDrawFont(Carregando[playerid][3], 2);
    TextDrawLetterSize(Carregando[playerid][3], 0.269999, 1.500000);
    TextDrawColor(Carregando[playerid][3], -1);
    TextDrawSetOutline(Carregando[playerid][3], 1);
    TextDrawSetProportional(Carregando[playerid][3], 1);
    TextDrawSetSelectable(Carregando[playerid][3], 0);

    Carregando[playerid][4] = TextDrawCreate(319.000000, 288.000000, "Carregando dados do servidor");
    TextDrawAlignment(Carregando[playerid][4], 2);
    TextDrawBackgroundColor(Carregando[playerid][4], 255);
    TextDrawFont(Carregando[playerid][4], 2);
    TextDrawLetterSize(Carregando[playerid][4], 0.289999, 1.700000);
    TextDrawColor(Carregando[playerid][4], -1);
    TextDrawSetOutline(Carregando[playerid][4], 1);
    TextDrawSetProportional(Carregando[playerid][4], 1);

    //printf("%s Criaçao de TextDraws Completa", GetName( playerid ));
}