int sub_80AF2FC()
{
  unsigned int v0; // r4@1
  __int16 v1; // r1@2
  unsigned int v2; // r4@3
  signed int v3; // r2@4
  unsigned __int8 v4; // r5@5
  char *v5; // r3@5
  char *v6; // r2@5
  __int16 v7; // r0@6
  int v8; // r4@9
  unsigned int v9; // r2@10
  unsigned __int8 v10; // r5@10
  int v11; // r0@15
  int v13; // [sp+0h] [bp-1Ch]@2
  int v14; // [sp+18h] [bp-4h]@15

  v0 = 0;
  do
  {
    v1 = *(_WORD *)(28 * v0 + 0x2019262) + *(_WORD *)(28 * v0 + 0x2019264);
    *(_WORD *)(28 * v0 + 0x2019264) = v1;
    *((_WORD *)&v13 + v0) = v1;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  v2 = 0;
  do
  {
    v3 = 3;
    if ( v2 < 3 )
    {
      do
      {
        v4 = v3 - 1;
        v5 = (char *)&v13 + 2 * (v3 - 1);
        v6 = (char *)&v13 + 2 * v3;
        if ( *(_WORD *)v5 < (signed int)*(_WORD *)v6 )
        {
          v7 = *(_WORD *)v6;
          *(_WORD *)v6 = *(_WORD *)v5;
          *(_WORD *)v5 = v7;
        }
        v3 = v4;
      }
      while ( v4 > v2 );
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 2 );
  v8 = 0;
  do
  {
    v9 = 0;
    v10 = v8 + 1;
    while ( *(_WORD *)(28 * v8 + 0x2019264) != *((_WORD *)&v13 + v9) )
    {
      v9 = (v9 + 1) & 0xFF;
      if ( v9 > 3 )
        goto _080AF3A6;
    }
    *(_BYTE *)(28 * v8 + 0x201926B) = *(_BYTE *)(28 * v8 + 0x201926B) & 0xFC | v9 & 3;
_080AF3A6:
    v8 = (unsigned __int8)(v8 + 1);
  }
  while ( v10 <= 3u );
  v11 = sub_80B0F28(1);
  sub_80B159C(v11);
  return v14;
}
