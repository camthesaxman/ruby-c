int __fastcall sub_812CDC8(unsigned __int8 a1)
{
  int *v1; // r5@1
  unsigned __int8 *v2; // r4@2
  int v3; // r6@4
  int v4; // r7@4
  __int16 *v5; // r0@7
  __int16 v6; // r2@9
  __int16 v7; // r3@10
  signed int v8; // r2@12
  signed int v9; // r2@13
  int v10; // r0@15
  int v12; // [sp+1Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = (unsigned __int8)sub_8077FC0(*v2);
  v4 = (unsigned __int8)battle_get_per_side_status_permutated(*v2);
  *((_WORD *)v1 + 4) = v3 + 36;
  *((_WORD *)v1 + 5) = v3 + 36;
  *((_WORD *)v1 + 6) = v3 - 33;
  if ( v3 - 33 < 0 )
    *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = *((_WORD *)v1 + 4);
  *((_WORD *)v1 + 8) = 8;
  *((_WORD *)v1 + 9) = word_3004B02;
  *((_WORD *)v1 + 10) = 0;
  *((_WORD *)v1 + 11) = 0;
  if ( v4 == 1 )
    v5 = &word_30042C0;
  else
    v5 = &word_3004288;
  v6 = *v5;
  *((_WORD *)v1 + 12) = *v5;
  *((_WORD *)v1 + 13) = v6 + 240;
  *((_WORD *)v1 + 14) = word_3004B04;
  if ( word_3004B04 )
  {
    *((_WORD *)v1 + 15) = v6;
    v7 = *((_WORD *)v1 + 13);
  }
  else
  {
    *((_WORD *)v1 + 15) = v6 + 240;
    v7 = *((_WORD *)v1 + 12);
  }
  *((_WORD *)v1 + 19) = 0;
  v8 = *((_WORD *)v1 + 6) << 16;
  if ( *((_WORD *)v1 + 6) <= (signed int)*((_WORD *)v1 + 7) )
  {
    do
    {
      v9 = v8 >> 16;
      word_3004DE0[v9] = v7;
      word_3005560[v9] = v7;
      v8 = (v9 + 1) << 16;
    }
    while ( v8 >> 16 <= *((_WORD *)v1 + 7) );
  }
  if ( v4 == 1 )
    v10 = 67108884;
  else
    v10 = 67108888;
  sub_80895F8(v10, -1570766847, 1);
  *v1 = (int)sub_812CEF0;
  return v12;
}
