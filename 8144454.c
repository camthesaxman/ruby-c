_BOOL4 __fastcall sub_8144454(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r3@1
  unsigned int v4; // r6@1
  unsigned int v5; // r1@1
  unsigned int v6; // r2@1
  int *v7; // r0@4
  int *v8; // r0@8
  int *v9; // r0@12
  int *v10; // r0@16

  v2 = a1 << 24;
  v3 = v2 >> 24;
  v4 = v2 >> 24;
  v5 = a2 << 24;
  v6 = v5 >> 24;
  if ( v2 >> 24 == 6 )
    HIWORD(dword_3004B20[10 * v6 + 7]) = 2;
  if ( v3 == 12 )
  {
    v7 = &dword_3004B20[10 * v6];
    *((_WORD *)v7 + 11) = 1;
    *((_WORD *)v7 + 15) = 1;
  }
  if ( v3 == 18 )
    HIWORD(dword_3004B20[10 * v6 + 7]) = 2;
  if ( v3 == 24 )
  {
    v8 = &dword_3004B20[10 * v6];
    *((_WORD *)v8 + 11) = 2;
    *((_WORD *)v8 + 15) = 1;
  }
  if ( v3 == 30 )
    HIWORD(dword_3004B20[10 * v6 + 7]) = 2;
  if ( v3 == 35 )
  {
    v9 = &dword_3004B20[10 * v6];
    *((_WORD *)v9 + 11) = 3;
    *((_WORD *)v9 + 15) = 1;
  }
  if ( v3 == 40 )
    HIWORD(dword_3004B20[10 * v6 + 7]) = 2;
  if ( v4 == 46 )
  {
    v10 = &dword_3004B20[10 * v6];
    *((_WORD *)v10 + 11) = 4;
    *((_WORD *)v10 + 15) = 1;
  }
  return HIWORD(dword_3004B20[10 * (v5 >> 24) + 7]) != 0;
}
