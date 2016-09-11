int sub_80F7BA0()
{
  _WORD *v0; // r5@1
  char *k; // r2@3
  char *v2; // r4@3
  int v3; // r6@3
  int v4; // r1@4
  _WORD *v5; // r5@4
  char *v6; // r2@4
  unsigned __int16 i; // r7@4
  _BYTE *v8; // r4@8
  int v9; // r1@8
  _WORD *v10; // r5@8
  _BYTE *j; // r2@8
  int v12; // r1@12
  _BYTE *v13; // r2@17
  int v15; // [sp+10h] [bp-4h]@0

  v0 = (_WORD *)33719510;
  if ( !v202E8CC )
    v0 = (_WORD *)33719498;
  k = &gStringVar4;
  v2 = &gStringVar4;
  v3 = 0;
  do
  {
    v4 = *v0;
    v5 = v0 + 1;
    v6 = sub_80EB3FC(k, v4);
    for ( i = v3 + 1; v6 != v2; ++v2 )
    {
      if ( !*v2 )
        *v2 = 55;
    }
    v8 = v2 + 1;
    *v6 = 0;
    v9 = *v5;
    v10 = v5 + 1;
    for ( j = sub_80EB3FC(v6 + 1, v9); j != v8; ++v8 )
    {
      if ( !*v8 )
        *v8 = 55;
    }
    v2 = v8 + 1;
    *j = -2;
    v12 = *v10;
    v0 = v10 + 1;
    for ( k = sub_80EB3FC(j + 1, v12); k != v2; ++v2 )
    {
      if ( !*v2 )
        *v2 = 55;
    }
    if ( !v3 )
    {
      *k = -4;
      v13 = k + 1;
      *v13 = 15;
      k = v13 + 1;
    }
    v3 = (unsigned __int16)(v3 + 1);
  }
  while ( i <= 1u );
  return v15;
}
