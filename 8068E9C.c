signed int __fastcall dive_warp(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  unsigned __int8 v3; // r5@1
  int v4; // r0@3
  int v5; // r0@7

  v2 = a1;
  v3 = a2;
  if ( v202E83F != 5 || sub_805750C(a2) << 24 )
  {
    if ( (unsigned __int8)sub_80574EC(v3) != 1 )
      return 0;
    v4 = sub_80538D0(*(_WORD *)v2 - 7, *(_WORD *)(v2 + 2) - 7);
  }
  else
  {
    v4 = sub_80538B0(*(_WORD *)v2 - 7, *(_WORD *)(v2 + 2) - 7);
  }
  if ( v4 << 24 )
  {
    v5 = walkrun_find_lowest_active_bit_in_bitfield();
    sp13E_warp_to_last_warp(v5);
    audio_play(233);
    return 1;
  }
  return 0;
}
