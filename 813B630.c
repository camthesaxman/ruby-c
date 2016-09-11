int __fastcall sub_813B630(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( calc_player_party_count() << 24 )
  {
    fade_screen(1, 0);
    dword_3004B20[10 * v1] = (int)sub_813B66C;
  }
  else
  {
    sub_813B718(v1);
  }
  return v3;
}
