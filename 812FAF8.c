int __fastcall sub_812FAF8(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r3@1
  __int16 v3; // r0@2
  __int16 v4; // r0@4
  int *v5; // r1@6
  __int16 v6; // r0@7
  int *v7; // r4@10
  unsigned int v8; // r5@10
  int v9; // r9@10
  unsigned int v10; // r7@10
  char *v11; // r2@11
  int *v12; // r4@13
  int v13; // r1@14
  int v14; // r0@14
  int *v15; // r2@16
  int v17; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  --*((_WORD *)v2 + 4);
  if ( *((_WORD *)v2 + 10) & 0x8000 )
  {
    v3 = *((_WORD *)v2 + 5) - 1;
    *((_WORD *)v2 + 5) = v3;
    if ( v3 == -1 )
    {
      if ( *((_WORD *)v2 + 13) )
      {
        *((_WORD *)v2 + 13) = 0;
      }
      else
      {
        v4 = *((_WORD *)v2 + 8);
        *((_WORD *)v2 + 13) = v4;
        *((_WORD *)v2 + 8) = -v4;
      }
      v5 = &dword_3004B20[10 * v1];
      if ( *((_WORD *)v5 + 14) )
      {
        *((_WORD *)v5 + 14) = 0;
      }
      else
      {
        v6 = *((_WORD *)v5 + 9);
        *((_WORD *)v5 + 14) = v6;
        *((_WORD *)v5 + 9) = -v6;
      }
      HIWORD(dword_3004B20[10 * v1 + 2]) = HIWORD(dword_3004B20[10 * v1 + 8]);
    }
  }
  v7 = &dword_3004B20[10 * v1];
  v8 = ((*((_WORD *)v7 + 6) & 0x7FFF) + *((_WORD *)v7 + 11)) << 16;
  v9 = ((*((_WORD *)v7 + 6) & 0x7FFF) + *((_WORD *)v7 + 11)) & 0xFFFF;
  v10 = ((*((_WORD *)v7 + 7) & 0x7FFF) + *((_WORD *)v7 + 12)) & 0xFFFF;
  if ( *((_WORD *)v7 + 6) & 0x8000 )
  {
    *(_WORD *)&gSprites[68 * *((_WORD *)v7 + 19) + 36] = *((_WORD *)v7 + 13) - (v8 >> 24);
    v11 = gSprites;
  }
  else
  {
    v11 = gSprites;
    *(_WORD *)&gSprites[68 * *((_WORD *)v7 + 19) + 36] = (v8 >> 24) + *((_WORD *)v7 + 13);
  }
  v12 = &dword_3004B20[10 * v1];
  if ( *((_WORD *)v12 + 7) & 0x8000 )
  {
    v13 = (int)&v11[68 * *((_WORD *)v12 + 19)];
    v14 = *((_WORD *)v12 + 14) - (v10 >> 8);
  }
  else
  {
    v13 = (int)&v11[68 * *((_WORD *)v12 + 19)];
    v14 = (v10 >> 8) + *((_WORD *)v12 + 14);
  }
  *(_WORD *)(v13 + 38) = v14;
  v15 = &dword_3004B20[10 * v1];
  *((_WORD *)v15 + 11) = v9;
  *((_WORD *)v15 + 12) = v10;
  if ( (signed int)*((_WORD *)v15 + 4) <= 0 )
  {
    *((_WORD *)v15 + 4) = 30;
    *((_WORD *)v15 + 17) = 0;
    *v15 = (int)sub_812F9B0;
  }
  return v17;
}
