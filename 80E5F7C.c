int __fastcall GetOnOffBike(unsigned __int8 a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  v202E854 = 0;
  if ( v202E858 & 6 )
  {
    SetPlayerAvatarTransitionFlags(1u);
    sav1_reset_battle_music_maybe();
    sub_8053E90();
  }
  else
  {
    SetPlayerAvatarTransitionFlags(a1);
    sav1_set_battle_music_maybe(403);
    sub_8053FB0(403);
  }
  return v2;
}
