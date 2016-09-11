int __fastcall sub_80DFC24(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@1
  unsigned __int8 v3; // r0@1
  signed __int16 v4; // r2@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 4) = word_3004B00[0];
  v3 = v202F7C8;
  *((_WORD *)v2 + 5) = 16;
  v4000052 = 16;
  if ( (unsigned __int8)battle_get_per_side_status_permutated(v3) == 1 )
    v4 = 16194;
  else
    v4 = 16196;
  v4000050 = v4;
  dword_3004B20[10 * v1] = (int)sub_80DFC9C;
  return v6;
}
