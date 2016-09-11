int __fastcall unref_sub_80AFAB8(__int16 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  unsigned int v3; // r5@1
  signed __int16 v4; // r2@1
  unsigned int v5; // r1@5
  int v7; // [sp+0h] [bp-24h]@7
  int v8; // [sp+20h] [bp-4h]@10

  v2 = a2;
  v3 = (unsigned __int8)sub_80AFB74(a1);
  v4 = 20642;
  if ( v2 )
  {
    v4 = 24738;
    if ( v2 != 1 )
    {
      v4 = -32606;
      if ( v2 == 2 )
        v4 = 28834;
    }
  }
  v5 = 0;
  do
  {
    if ( v5 >= v3 )
      *((_WORD *)&v7 + v5) = 0;
    else
      *((_WORD *)&v7 + v5) = v4;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 8 );
  v40000D4 = &v7;
  v40000D8 = 320 * v2 + 100712744;
  v40000DC = -2147483639;
  return v8;
}
