int __fastcall sub_80830E4(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  unsigned int v3; // r6@1
  int v4; // r4@5
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( sub_8082E28(BYTE3(v1)) != 1 && sub_8082EB8(v2) != 1 && sub_8082DF4(v2) != 1 && !(textbox_any_visible() << 24) )
  {
    v4 = sub_800820C();
    if ( v4 << 24 != GetLinkPlayerCount_2() << 24 || word_300179C & 2 )
    {
      box_related_two__3((int)gUnknown_081A4932);
      dword_3004B20[10 * v2] = (int)sub_8082FEC;
    }
    else if ( word_300179C & 1 )
    {
      audio_play(5u);
      sub_8007F4C();
      dword_3004B20[10 * v3] = (int)sub_8083188;
    }
  }
  return v6;
}
