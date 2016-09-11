int __fastcall sub_80D0C88(unsigned __int8 a1)
{
  int *v1; // r5@1
  int v2; // r0@2
  signed int v3; // r2@4
  signed int v4; // r3@5
  int v6; // [sp+18h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = (unsigned __int8)sub_8077FC0(v202F7C9) + 32;
  *((_WORD *)v1 + 5) = 4;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = 0;
  *((_WORD *)v1 + 8) = 0;
  *((_WORD *)v1 + 9) = 0;
  *((_WORD *)v1 + 19) = sub_807A100(v202F7C9, 0);
  if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C9) == 1 )
  {
    *((_WORD *)v1 + 10) = word_30042C0;
    v2 = 67108884;
  }
  else
  {
    *((_WORD *)v1 + 10) = word_3004288;
    v2 = 67108888;
  }
  v3 = (*((_WORD *)v1 + 4) - 64) << 16;
  if ( v3 <= *((_WORD *)v1 + 4) << 16 )
  {
    do
    {
      v4 = v3 >> 16;
      if ( v3 >> 16 >= 0 )
      {
        word_3004DE0[v4] = *((_WORD *)v1 + 10) + 240;
        word_3005560[v4] = *((_WORD *)v1 + 10) + 240;
      }
      v3 = ((v3 >> 16) + 1) << 16;
    }
    while ( (signed __int16)(v4 + 1) <= (signed int)*((_WORD *)v1 + 4) );
  }
  sub_80895F8(v2, -1570766847, 1);
  *v1 = (int)sub_80D0D68;
  return v6;
}
