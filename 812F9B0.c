int __fastcall sub_812F9B0(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r3@1
  __int16 v3; // r0@2
  __int16 v4; // r0@4
  int *v5; // r1@6
  __int16 v6; // r0@7
  int *v7; // r4@10
  unsigned int v8; // r7@10
  char *v9; // r2@11
  int *v10; // r4@13
  int v11; // r1@14
  int v12; // r0@14
  int v14; // [sp+14h] [bp-4h]@0

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
  v8 = *((_WORD *)v7 + 12);
  if ( *((_WORD *)v7 + 6) & 0x8000 )
  {
    *(_WORD *)&gSprites[68 * *((_WORD *)v7 + 19) + 36] = *((_WORD *)v7 + 13) - (*((_WORD *)v7 + 11) >> 8);
    v9 = gSprites;
  }
  else
  {
    v9 = gSprites;
    *(_WORD *)&gSprites[68 * *((_WORD *)v7 + 19) + 36] = (*((_WORD *)v7 + 11) >> 8) + *((_WORD *)v7 + 13);
  }
  v10 = &dword_3004B20[10 * v1];
  if ( *((_WORD *)v10 + 7) & 0x8000 )
  {
    v11 = (int)&v9[68 * *((_WORD *)v10 + 19)];
    v12 = *((_WORD *)v10 + 14) - (v8 >> 8);
  }
  else
  {
    v11 = (int)&v9[68 * *((_WORD *)v10 + 19)];
    v12 = (v8 >> 8) + *((_WORD *)v10 + 14);
  }
  *(_WORD *)(v11 + 38) = v12;
  if ( (signed int)LOWORD(dword_3004B20[10 * v1 + 2]) <= 0 )
  {
    DestroyTask(v1);
    --v202F7B2;
  }
  return v14;
}
