int __fastcall sub_80A8500(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B02 = -word_3004B02;
  sub_80A8408(v1);
  return v3;
}
