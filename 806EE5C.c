int __fastcall sub_806EE5C(unsigned __int8 a1)
{
  int v1; // r4@1
  char v2; // r0@1
  int v3; // r1@2
  signed int v4; // r0@5
  signed int v5; // r1@5
  signed int v6; // r3@5
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = ProcessMenuInputNoWrap_();
  if ( !v2 )
  {
    if ( (unsigned __int8)sub_80A9424(v201C006, 1) == 1 )
    {
      sub_80A2DF8(v201C000, v3);
      sub_806E834((int)"Ç»ÃÆ", 0);
    }
    else
    {
      sub_806E834((int)&gUnknown_0840F2FC, 0);
    }
    v4 = 23;
    v5 = 8;
    v6 = 13;
_0806EEDE:
    MenuZeroFillWindowRect(v4, v5, 29, v6);
    dword_3004B20[10 * v1] = (int)party_menu_link_mon_held_item_object;
    return v8;
  }
  if ( v2 == 1 || v2 == -1 )
  {
    if ( v2 == -1 )
      audio_play(5);
    MenuZeroFillWindowRect(23, 8, 29, 13);
    v4 = 0;
    v5 = 14;
    v6 = 19;
    goto _0806EEDE;
  }
  return v8;
}
