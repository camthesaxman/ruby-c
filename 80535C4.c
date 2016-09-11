int __fastcall sub_80535C4(char a1)
{
  char v1; // r6@1
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sav1_map_get_light_level();
  v3 = (unsigned __int8)get_map_light_level_by_bank_and_number(v20297F8, v20297F9);
  if ( is_light_level_1_2_3_5_or_6(v2) << 24 && (is_light_level_1_2_3_5_or_6(v3) & 0xFF) != 1 )
    sub_805363C(v2025738, v2025739, -1, (char)(v1 - 7));
  return v5;
}
