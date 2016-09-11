int __fastcall sub_80A5B78(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@6
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( itemid_get_overworld_function(v203855E) )
  {
    audio_play(5u);
    if ( calc_player_party_count() << 24 || (itemid_get_type(v203855E) & 0xFF) != 1 )
    {
      LOWORD(dword_3004B20[10 * v1 + 3]) = 0;
      if ( v2038559 == 3 )
      {
        sub_80C9C7C(v1);
      }
      else
      {
        v2 = itemid_get_overworld_function(v203855E);
        call_via_r1(v1, v2);
      }
    }
    else
    {
      sub_80A5BF8(v1);
    }
  }
  return v4;
}
