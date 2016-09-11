int __fastcall sub_80E2838(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 && !(sub_8076BE0() << 24) )
    word_3004B02 = -word_3004B02;
  sub_80E27A0(v1);
  return v3;
}
