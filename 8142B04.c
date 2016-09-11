int __fastcall sub_8142B04(int a1)
{
  int v1; // r8@1
  signed int v2; // r3@1
  int v3; // r5@1
  int v4; // r0@1
  signed int v5; // r4@3
  int *v6; // r1@3
  unsigned int v7; // r5@3
  signed int v8; // r4@7
  unsigned int v9; // r5@7
  unsigned int v10; // r7@7
  __int16 v11; // r3@10
  char *v12; // r1@10
  int v13; // ST00_4@12
  int v14; // ST04_4@12
  int v15; // r0@12
  _BYTE *v16; // r0@15
  int *v17; // r4@15
  _BYTE *v18; // r0@15
  int v20; // [sp+2Ch] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v1 = a1;
  v2 = 33677312;
  v3 = 0;
  v4 = LOWORD(dword_3004B20[10 * (unsigned __int8)a1 + 2]);
  if ( v4 > 0 )
  {
    do
    {
      v2 += 120;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 < v4 );
  }
  v5 = v2;
  v203931C = 0;
  v6 = &dword_3004B20[10 * v1];
  *((_WORD *)v6 + 6) = 0;
  *((_WORD *)v6 + 8) = 0;
  v7 = 0;
  do
  {
    if ( *(_WORD *)(v5 + 8) & 0x1FF )
      ++*((_WORD *)v6 + 8);
    v7 = (v7 + 1) & 0xFFFF;
    v5 += 20;
  }
  while ( v7 <= 5 );
  v8 = v2;
  v9 = 0;
  v10 = 40 * v1;
  do
  {
    if ( *(_WORD *)(v8 + 8) & 0x1FF )
    {
      if ( (signed int)LOWORD(dword_3004B20[v10 / 4 + 4]) <= 3 )
      {
        v11 = word_840B568[4 * v9];
        v12 = (char *)&gUnknown_0840B56A + 8 * v9;
      }
      else
      {
        v11 = word_840B538[4 * v9];
        v12 = (char *)&gUnknown_0840B53A + 8 * v9;
      }
      v13 = *(_DWORD *)v8;
      v14 = *(_DWORD *)(v8 + 4);
      v15 = (unsigned __int16)sub_81436BC(*(_WORD *)(v8 + 8) & 0x1FF, v11, *(_WORD *)v12, v9);
      gSprites[68 * v15 + 5] = gSprites[68 * v15 + 5] & 0xF3 | 4;
      *(_WORD *)(&byte_3004B28[2 * (v9 + 5)] + v10) = v15;
    }
    else
    {
      *(_WORD *)(&byte_3004B28[2 * (v9 + 5)] + v10) = 255;
    }
    v9 = (v9 + 1) & 0xFFFF;
    v8 += 20;
  }
  while ( v9 <= 5 );
  BlendPalettes(0xFFFF0000, 0xCu, 29535);
  v16 = StringCopy(&gStringVar1, "Â»ÆÆ");
  *v16 = -4;
  v16[1] = 20;
  v16[2] = 6;
  v17 = &dword_3004B20[10 * v1];
  v18 = ConvertIntToDecimalString(v16 + 3, *((_WORD *)v17 + 5));
  *v18 = -4;
  v18[1] = 19;
  v18[2] = -16;
  v18[3] = -1;
  MenuPrint((int)&gStringVar1, 0, 0);
  *v17 = (int)sub_8142CC8;
  return v20;
}
