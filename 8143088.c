int __fastcall sub_8143088(int a1, char a2, char a3)
{
  int v3; // r9@1
  char v4; // r8@1
  char v5; // r10@1
  __int16 v6; // r2@1
  signed int v7; // r6@2
  char *v8; // r0@3
  unsigned int v9; // r3@4
  int v10; // r2@5
  char *v11; // r7@8
  _BYTE *v12; // r7@10
  int v13; // r7@10
  unsigned int v14; // r3@10
  _BYTE *v15; // r7@13
  char *v16; // r7@13
  __int16 v17; // r0@13
  int v18; // r0@15
  char v19; // r0@18
  signed int v20; // r6@21
  _BYTE *v21; // r0@21
  char *v22; // r0@21
  signed int v23; // r6@21
  char *v24; // r0@21
  unsigned __int8 v26; // [sp+0h] [bp-34h]@4
  unsigned __int8 v27; // [sp+8h] [bp-2Ch]@4
  char v28; // [sp+Ch] [bp-28h]@4
  int v29; // [sp+30h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  gStringVar1[0] = -4;
  byte_20231CD = 19;
  byte_20231CE = 40;
  byte_20231CF = -1;
  v6 = *(_WORD *)(a1 + 8);
  if ( (v6 & 0x1FF) != 412 )
  {
    v7 = (unsigned __int16)sub_80406D8(v6 & 0x1FF);
    if ( v7 != 0xFFFF )
    {
      v8 = StringCopy(gStringVar1, &gUnknown_0840E547);
      ConvertIntToDecimalStringN(v8, v7, 2, 3);
    }
  }
  MenuPrint((int)gStringVar1, v4 + 4, v5 + 1);
  v9 = 0;
  v26 = v5 + 1;
  v28 = v4 + 9;
  v27 = v5 + 3;
  if ( *(_BYTE *)(v3 + 10) != 255 )
  {
    v10 = v3 + 10;
    do
    {
      gStringVar1[v9] = *(_BYTE *)(v10 + v9);
      v9 = (v9 + 1) & 0xFFFF;
    }
    while ( v9 <= 9 && *(_BYTE *)(v10 + v9) != 255 );
  }
  v11 = &gStringVar1[v9];
  gStringVar1[v9] = -1;
  if ( (*(_WORD *)(v3 + 8) & 0x1FF) != 412 )
  {
    *v11 = -4;
    v11[1] = 19;
    v11[2] = 62;
    v12 = v11 + 3;
    *v12 = -70;
    v13 = (int)(v12 + 1);
    v14 = 0;
    if ( (unsigned __int8)gSpeciesNames[11 * (*(_WORD *)(v3 + 8) & 0x1FF)] != 255 )
    {
      do
      {
        *(_BYTE *)(v13 + v14) = *(&gSpeciesNames[11 * (*(_WORD *)(v3 + 8) & 0x1FF)] + v14);
        v14 = (v14 + 1) & 0xFFFF;
      }
      while ( v14 <= 9 && (unsigned __int8)*(&gSpeciesNames[11 * (*(_WORD *)(v3 + 8) & 0x1FF)] + v14) != 255 );
    }
    v15 = (_BYTE *)(v13 + v14);
    *v15 = 0;
    v16 = v15 + 1;
    v17 = *(_WORD *)(v3 + 8);
    if ( (v17 & 0x1FF) == 32 || (v17 & 0x1FF) == 29 )
      goto _0814324A;
    v18 = (unsigned __int8)GetGenderFromSpeciesAndPersonality(v17 & 0x1FF, *(_DWORD *)(v3 + 4));
    if ( v18 )
    {
      if ( v18 != 254 )
        goto _0814324A;
      v19 = -74;
    }
    else
    {
      v19 = -75;
    }
    *v16++ = v19;
_0814324A:
    *v16 = -4;
    v16[1] = 19;
    v16[2] = -96;
    v16[3] = -1;
    MenuPrint((int)gStringVar1, v28, v26);
    v20 = (unsigned int)*(_BYTE *)(v3 + 9) >> 1;
    v21 = StringCopy(gStringVar1, &OtherText_Level3);
    *v21 = -4;
    v21[1] = 20;
    v21[2] = 6;
    v22 = ConvertIntToDecimalStringN(v21 + 3, v20, 0, 3);
    *v22 = -4;
    v22[1] = 19;
    v22[2] = 48;
    v22[3] = -1;
    MenuPrint((int)gStringVar1, v4 + 7, v27);
    v23 = *(_WORD *)v3;
    v24 = StringCopy(gStringVar1, "√æ»„≠");
    ConvertIntToDecimalStringN(v24, v23, 2, 5);
    MenuPrint((int)gStringVar1, v4 + 13, v27);
    return v29;
  }
  *v11 = -4;
  v11[1] = 19;
  v11[2] = -96;
  v11[3] = -1;
  MenuPrint((int)gStringVar1, v28, v26);
  MenuZeroFillWindowRect(0, v27, 0x1Du, v5 + 4);
  return v29;
}
