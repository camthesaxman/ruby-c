int __fastcall sub_806EF38(unsigned __int8 a1)
{
  int v1; // r4@1
  char v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = ProcessMenuInputNoWrap_();
  if ( v2 )
  {
    if ( v2 == 1 || v2 == -1 )
    {
      if ( v2 == -1 )
        audio_play(5);
      MenuZeroFillWindowRect(23, 8, 29, 13);
      sub_806E834((int)&gUnknown_0840F147, 1u);
      dword_3004B20[10 * v1] = (int)sub_806EF00;
    }
  }
  else
  {
    MenuZeroFillWindowRect(23, 8, 29, 13);
    if ( (sub_80A2E78(v201C000) & 0xFF) == 255 )
      sub_806E834((int)"׃דיז", 0);
    else
      sub_806E834((int)&gUnknown_0840F10A, 0);
    dword_3004B20[10 * v1] = (int)party_menu_link_mon_held_item_object;
  }
  return v4;
}
