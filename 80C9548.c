_BOOL4 __fastcall ItemfinderCheckForHiddenItems(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r6@1
  unsigned int v4; // r3@1
  signed int v5; // r3@2
  int v6; // r4@2
  int v7; // r1@2
  signed int v8; // r7@2
  int v9; // r1@4
  int v10; // r0@4
  int v11; // r2@4
  int v12; // r1@4
  unsigned __int16 v14; // [sp+0h] [bp-20h]@1
  unsigned __int16 v15; // [sp+2h] [bp-1Eh]@1

  v2 = a1;
  v3 = a2;
  PlayerGetDestCoords(&v14, &v15);
  LOWORD(dword_3004B20[10 * v3 + 3]) = 0;
  v4 = 0;
  if ( (signed int)*(_BYTE *)(v2 + 3) > 0 )
  {
    do
    {
      v5 = v4 << 16;
      v6 = 12 * (v5 >> 16);
      v7 = v6 + *(_DWORD *)(v2 + 16);
      v8 = v5;
      if ( *(_BYTE *)(v7 + 5) == 7 && !(FlagGet(*(_WORD *)(v6 + *(_DWORD *)(v2 + 16) + 10) + 600) << 24) )
      {
        v9 = v6 + *(_DWORD *)(v2 + 16);
        v10 = (*(_WORD *)(v9 + 2) + 7 - v15) & 0xFFFF;
        v11 = (*(_WORD *)v9 + 7 - v14) << 16;
        v12 = (signed __int16)(*(_WORD *)v9 + 7 - v14);
        if ( (unsigned int)(v11 + 458752) >> 16 <= 0xE && (signed __int16)v10 >= -5 && (signed __int16)v10 <= 5 )
          sub_80C9838(v3, v12);
      }
      v4 = (unsigned int)(v8 + 0x10000) >> 16;
    }
    while ( (v8 + 0x10000) >> 16 < *(_BYTE *)(v2 + 3) );
  }
  sub_80C9720(v3);
  return LOWORD(dword_3004B20[10 * v3 + 3]) == 1;
}
