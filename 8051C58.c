signed int sub_8051C58()
{
  unsigned int v0; // r0@1
  _BYTE *v1; // r1@4
  _DWORD *v2; // r2@4
  int v3; // r0@4
  int v4; // r0@6
  unsigned int v5; // r6@7
  unsigned int v6; // r6@10
  int v7; // r5@11
  _BYTE *v8; // r0@11
  int v9; // r0@11
  _BYTE *v10; // r7@12
  int v11; // r0@12
  _BYTE *v12; // r0@12
  unsigned int v13; // r0@12
  signed int v14; // r5@12
  _BYTE *v15; // r0@12
  _BYTE *v16; // r0@12
  _BYTE *v17; // r0@12
  _BYTE *v18; // r0@12
  unsigned int v19; // r6@15
  int v20; // r3@15
  char v22; // [sp+4h] [bp-50h]@19
  char v23; // [sp+Ch] [bp-48h]@11
  __int16 v24; // [sp+16h] [bp-3Eh]@10
  char v25[8]; // [sp+20h] [bp-34h]@17
  char v26; // [sp+28h] [bp-2Ch]@19
  char *i; // [sp+30h] [bp-24h]@10

  v0 = *(_BYTE *)dword_3004854;
  if ( v0 <= 6 )
  {
    switch ( v0 )
    {
      case 0u:
        ++*(_BYTE *)dword_3004854;
        *(_DWORD *)(dword_3004854 + 304) = 17;
        return 0;
      case 1u:
        v1 = (_BYTE *)dword_3004854;
        v2 = (_DWORD *)(dword_3004854 + 304);
        v3 = *(_DWORD *)(dword_3004854 + 304) - 10;
        *(_DWORD *)(dword_3004854 + 304) = v3;
        if ( v3 >= 0 )
          return 0;
        *v2 = 0;
        goto _08051FE2;
      case 2u:
        v4 = *(_DWORD *)(dword_3004854 + 304) + 1;
        *(_DWORD *)(dword_3004854 + 304) = v4;
        if ( v4 <= 20 )
          return 0;
        v5 = 0;
        do
        {
          DestroySprite((int)&gSprites[68 * *(_BYTE *)(dword_3004854 + 80 + v5)]);
          v5 = (v5 + 1) & 0xFFFF;
        }
        while ( v5 <= 2 );
        v1 = (_BYTE *)dword_3004854;
        *(_DWORD *)(dword_3004854 + 304) = 0;
        goto _08051FE2;
      case 3u:
        MenuDrawTextWindow(4, 2, 25, 17);
        sub_8072BD8("Ì¿ÍÏÆÎÍ", 5, 3, 160);
        v6 = 0;
        for ( i = (char *)&v24; v6 < *(_BYTE *)(dword_3004854 + 136); v6 = (unsigned __int16)(v6 + 1) )
        {
          v7 = *(_BYTE *)(dword_3004854 + 356 + v6);
          StringCopy(&v23, (_BYTE *)(16 * v7 + dword_3004854 + 382));
          ConvertInternationalString((int)&v23, *((_BYTE *)&gLinkPlayers + 28 * v7 + 26));
          StringAppend(&v23, &gUnknown_0842D498);
          v8 = ConvertIntToDecimalString((_BYTE *)(dword_3004854 + 171), v6 + 1);
          *v8 = 0;
          v8[1] = -83;
          v8[2] = 0;
          v9 = sub_8072C74(v8 + 3, (char *)&unk_3002978 + 28 * v7, 88, 0);
          sub_8072C74(v9, &v23, 157, 0);
          MenuPrint(
            dword_3004854 + 171,
            5,
            (v6 * gUnknown_082165EE[*(_BYTE *)(dword_3004854 + 136)] + gUnknown_082165E9[*(_BYTE *)(dword_3004854 + 136)]) & 0xFF);
        }
        ConvertIntToDecimalStringN(&v23, *(_WORD *)(dword_3004854 + 90) % 0x64u, 2, 2);
        v10 = StringCopy((_BYTE *)(dword_3004854 + 171), "Ç»ÒÃÇÏÇ");
        v11 = sub_8072C14(v10, *(_WORD *)(dword_3004854 + 90) / 0x64u, 121, 1);
        *(_BYTE *)v11 = 0;
        *(_BYTE *)(v11 + 1) = -83;
        *(_BYTE *)(v11 + 2) = 0;
        v12 = (_BYTE *)sub_8072C74(v11 + 3, &v23, 142, 1);
        StringCopy(v12, &gUnknown_0842D4C5);
        MenuPrint(dword_3004854 + 171, 5, 13);
        v13 = *(_DWORD *)(dword_3004854 + 300) / 0x3Cu;
        v14 = (unsigned __int16)v13 % 0x3Cu & 0xFFFF;
        ConvertIntToDecimalStringN(&v23, (unsigned __int16)v13 / 0x3Cu & 0xFFFF, 2, 2);
        ConvertIntToDecimalStringN(i, v14, 2, 2);
        v15 = StringCopy((_BYTE *)(dword_3004854 + 171), "Ì¿ËÏÃÌ¿¾");
        v16 = (_BYTE *)sub_8072C74(v15, &v23, 102, 1);
        v17 = StringAppend(v16, &gUnknown_0842D4AD);
        v18 = (_BYTE *)sub_8072C74(v17, i, 136, 1);
        StringCopy(v18, &gUnknown_0842D4B2);
        MenuPrint(dword_3004854 + 171, 5, 15);
        v1 = (_BYTE *)dword_3004854;
        *(_DWORD *)(dword_3004854 + 304) = 0;
        goto _08051FE2;
      case 4u:
        if ( !(word_300179E & 1) )
          return 0;
        v1 = (_BYTE *)dword_3004854;
        goto _08051FE2;
      case 5u:
        MenuZeroFillScreen(v0);
        MenuDrawTextWindow(0, 14, 29, 19);
        v19 = 0;
        v20 = dword_3004854 + 128;
        do
        {
          if ( *(_WORD *)(v20 + 2 * v19) )
            *(_WORD *)&v25[2 * v19] = *(_WORD *)(v20 + 2 * v19) - 133;
          v19 = (v19 + 1) & 0xFFFF;
        }
        while ( v19 <= 3 );
        sub_8050760();
        sub_8050520(
          dword_3004854 + 380,
          (int)&v26,
          *(_BYTE *)(dword_3004854 + 136),
          (int)&v22,
          *(_WORD *)(dword_3004854 + 90));
        sub_805201C(&v26, dword_3004854 + 171);
        CreateTask(sub_8052BD0, 6);
        MenuPrintMessage(dword_3004854 + 171, 1, 15);
        sub_80A9538(v203855E, 1);
        sub_810CA34(&v26);
        v1 = (_BYTE *)dword_3004854;
_08051FE2:
        ++*v1;
        return 0;
      case 6u:
        if ( !(MenuUpdateWindowText() << 24) )
          return 0;
        sub_8051C24();
        return 1;
      default:
        return 0;
    }
  }
  return 0;
}
