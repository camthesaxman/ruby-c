int __fastcall ItemMenu_Give(int a1)
{
  unsigned int v1; // r0@1
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r0@2
  int *v5; // r0@6
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  audio_play(5u);
  if ( sub_80F931C(v203855E) << 24 )
  {
    if ( (unsigned __int8)itemid_is_unique(v203855E) )
    {
      DisplayCannotDismountBikeMessage(v3);
    }
    else if ( calc_player_party_count() << 24 )
    {
      v5 = &dword_3004B20[10 * v2];
      *((_WORD *)v5 + 12) = (unsigned int)sub_808B020 >> 16;
      *((_WORD *)v5 + 13) = (unsigned int)sub_808B020;
      *v5 = (int)sub_80A5B00;
      v2038561 = 1;
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    }
    else
    {
      sub_80A5BF8(v2);
    }
  }
  else
  {
    v4 = sub_80A73FC(0);
    sub_80A7590(v4);
    DisplayCannotUseItemMessage(v2, &gUnknown_0840E781, sub_80A6024, 1);
  }
  return v7;
}
