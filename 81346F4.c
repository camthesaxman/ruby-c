signed int sub_81346F4()
{
  signed int v0; // r9@1
  int v1; // r7@1
  unsigned __int16 v2; // r0@1
  int v3; // r8@1
  int v4; // r5@3
  int *v5; // r10@3
  int v6; // r4@4
  int v7; // r1@4
  unsigned int v8; // r2@4
  int *v9; // r3@4
  int v10; // r0@5
  int v12; // [sp+0h] [bp-38h]@3
  int v13; // [sp+14h] [bp-24h]@4

  v0 = 0;
  v1 = v20253F8 & 1;
  v2 = sub_8135D3C(v1);
  v3 = v2;
  if ( sub_8134650(v1, v2) << 24 )
  {
    v2025408 = -56;
  }
  else
  {
    v4 = 0;
    v5 = &v12;
    do
    {
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v13 = v4 + 1;
      v9 = (int *)(164 * v4 + 33705968);
      do
      {
        v10 = *v9;
        ++v9;
        v6 |= v10;
        v7 += v10;
        ++v8;
      }
      while ( v8 <= 0x27 );
      if ( *(_WORD *)(164 * v4 + 0x2024FF2) == v3
        && *(_BYTE *)(164 * v4 + 0x2024FF0) == v1
        && v6
        && *(_DWORD *)(164 * v4 + 0x2025090) == v7 )
      {
        ++v5;
        *(v5 - 1) = v4;
        ++v0;
      }
      v4 = v13;
    }
    while ( v13 <= 4 );
    if ( !v0 )
      return 0;
    v2025408 = *((_BYTE *)&v12 + 4 * ((unsigned __int16)Random() % v0)) + 100;
  }
  return 1;
}
