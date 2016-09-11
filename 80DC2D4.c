int __fastcall sub_80DC2D4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r1@1
  signed __int16 v3; // r0@7
  int v4; // r0@14
  signed int v5; // r3@16
  signed int v6; // r3@17
  int v8; // [sp+18h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = (unsigned __int8)sub_8077FC0(v202F7C9);
  *((_WORD *)v1 + 18) = v2 - 32;
  if ( word_3004B00[0] == 1 )
  {
    *((_WORD *)v1 + 15) = 2;
    *((_WORD *)v1 + 16) = 5;
    v3 = 192;
    goto _080DC33E;
  }
  if ( word_3004B00[0] <= 1 )
  {
    if ( word_3004B00[0] )
      goto _080DC346;
    *((_WORD *)v1 + 15) = 2;
    *((_WORD *)v1 + 16) = 5;
    v3 = 64;
_080DC33E:
    *((_WORD *)v1 + 17) = v3;
    *((_WORD *)v1 + 19) = v2 + 32;
    goto _080DC346;
  }
  if ( word_3004B00[0] == 2 )
  {
    *((_WORD *)v1 + 15) = 4;
    *((_WORD *)v1 + 16) = 4;
    v3 = 0;
    goto _080DC33E;
  }
_080DC346:
  if ( (signed int)*((_WORD *)v1 + 18) < 0 )
    *((_WORD *)v1 + 18) = 0;
  if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C9) == 1 )
  {
    *((_WORD *)v1 + 14) = word_30042C0;
    v4 = 67108884;
  }
  else
  {
    *((_WORD *)v1 + 14) = word_3004288;
    v4 = 67108888;
  }
  v5 = *((_WORD *)v1 + 18) << 16;
  if ( *((_WORD *)v1 + 18) <= *((_WORD *)v1 + 18) + 64 )
  {
    do
    {
      v6 = v5 >> 16;
      word_3004DE0[v6] = *((_WORD *)v1 + 14);
      word_3005560[v6] = *((_WORD *)v1 + 14);
      v5 = (v6 + 1) << 16;
    }
    while ( v5 >> 16 <= *((_WORD *)v1 + 18) + 64 );
  }
  sub_80895F8(v4, -1570766847, 1);
  *v1 = (int)sub_80DC3F4;
  return v8;
}
