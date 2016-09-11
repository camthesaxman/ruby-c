int sub_800EB08()
{
  signed int v0; // r3@2
  signed int v1; // r3@4
  signed int v2; // r8@7
  int v3; // r3@9
  __int16 *v4; // r5@10
  int v5; // r4@10
  signed int v6; // r2@10
  int v7; // r7@10
  _BYTE *v8; // r3@10
  signed int v9; // r2@12
  _BYTE *v10; // r3@12
  int v11; // r0@14
  int v13; // [sp+1Ch] [bp-4h]@0

  if ( v20239F8 & 2 )
  {
    v2 = 2;
    if ( v20239F8 & 0x40 )
      v2 = 4;
    v3 = 0;
    if ( v2 > 0 )
    {
      do
      {
        v4 = &word_3002B84[128 * v3];
        v5 = *((_BYTE *)&gLinkPlayers + 28 * v3 + 24);
        v6 = 0;
        v7 = v3 + 1;
        v8 = (_BYTE *)(28 * v5 + 33705456);
        do
          *v8++ = *((_BYTE *)v4 + v6++);
        while ( v6 <= 6 );
        v9 = 0;
        v10 = (_BYTE *)(28 * v5 + 33705464);
        do
          *v10++ = *((_BYTE *)v4 + v9++ + 8);
        while ( v9 <= 17 );
        v11 = 28 * v5 + 33705456;
        *(_BYTE *)(v11 + 7) = *((_BYTE *)v4 + 7);
        *(_BYTE *)(v11 + 26) = *((_BYTE *)v4 + 26);
        v3 = v7;
      }
      while ( v7 < v2 );
    }
  }
  else
  {
    v0 = 0;
    do
    {
      *(_BYTE *)(v0 + 33705456) = *(_BYTE *)(v0 + 33720468);
      *(_BYTE *)(v0 + 33705512) = *(_BYTE *)(v0 + 33720468);
      ++v0;
    }
    while ( v0 <= 6 );
    v1 = 0;
    do
    {
      *(_BYTE *)(v1 + 33705464) = *(_BYTE *)(v1 + 33721770);
      *(_BYTE *)(v1 + 33705520) = *(_BYTE *)(v1 + 33721770);
      ++v1;
    }
    while ( v1 <= 17 );
    v2024DF7 = v2028DBC;
    v2024E2F = v2028DBC;
    v2024E0A = v2028DBD;
    v2024E42 = v2028DBD;
  }
  return v13;
}
