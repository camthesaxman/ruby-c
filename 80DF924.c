int __fastcall sub_80DF924(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 *v2; // r0@2
  int v3; // r0@4
  int i; // r3@6
  int v6; // [sp+0h] [bp-1Ch]@2
  int v7; // [sp+18h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8) == 1 )
  {
    v6 = 67108884;
    v2 = &word_30042C0;
  }
  else
  {
    v6 = 67108888;
    v2 = &word_3004288;
  }
  *((_WORD *)v1 + 6) = *v2;
  v3 = (unsigned __int8)sub_8077FC0(v202F7C8);
  *((_WORD *)v1 + 7) = v3 - 32;
  *((_WORD *)v1 + 8) = v3 + 32;
  if ( v3 - 32 < 0 )
    *((_WORD *)v1 + 7) = 0;
  for ( i = *((_WORD *)v1 + 7); i <= *((_WORD *)v1 + 8); i = (i + 1) & 0xFFFF )
  {
    word_3004DE0[i] = *((_WORD *)v1 + 6);
    word_3005560[i] = *((_WORD *)v1 + 6);
  }
  sub_80895F8(v6, -1570766847, 1);
  *v1 = (int)sub_80DF9F4;
  return v7;
}
