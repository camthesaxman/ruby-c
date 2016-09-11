int sub_80B3F88()
{
  int v0; // r1@1
  int v1; // r2@1
  int v2; // r10@1
  signed int v3; // r6@1
  _WORD *v4; // r3@2
  _WORD *v5; // r4@2
  signed int v6; // r5@2
  int v7; // r0@3
  int v8; // r1@7
  int v9; // r2@7
  signed int v10; // r6@7
  int v12; // [sp+20h] [bp-4h]@0

  v0 = v202E930 + 990;
  v1 = v202E930 + 1118;
  v2 = v202E92C;
  v3 = 13;
  do
  {
    v4 = (_WORD *)v1;
    v5 = (_WORD *)v0;
    v6 = 14;
    do
    {
      v7 = v202E922 + 1;
      if ( (*v5 & 0x3FF) > v7 )
        LOWORD(v7) = *v5 + 60;
      *v4 = v7;
      ++v4;
      ++v5;
      --v6;
    }
    while ( v6 >= 0 );
    v1 -= 64;
    v0 -= 64;
    --v3;
  }
  while ( v3 >= 0 );
  v8 = v2 + 14880;
  v9 = v2 + 16800;
  v10 = 13;
  do
  {
    v40000D4 = v8;
    v40000D8 = v9;
    v40000DC = -2147483408;
    v9 -= 960;
    v8 -= 960;
    --v10;
  }
  while ( v10 >= 0 );
  return v12;
}
