int __fastcall sub_806EACC(unsigned __int8 a1)
{
  int v1; // r6@1
  char v2; // r0@1
  int v3; // r2@2
  int v4; // r5@2
  int v5; // r2@2
  int v6; // r3@2
  int v7; // r1@3
  int v8; // r2@3
  int v9; // r3@3
  int v11; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = ProcessMenuInputNoWrap_();
  if ( !v2 )
  {
    MenuZeroFillWindowRect(23, 8, 29, 13);
    v4 = (unsigned __int16)GetMonData(v201C000, 12, v3);
    sub_80A9538(v201C006, 1);
    if ( (unsigned __int8)sub_80A9424(v4, 1) == 1 )
    {
      sub_806E904(v201C000, v201C006, v5, v6);
      if ( itemid_is_mail(v201C006, v7, v8, v9) << 24 )
      {
        sub_806EDB4(v201C005, v4, 1);
      }
      else
      {
        itemid_copy_name(v201C006, &gStringVar1);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F26E);
        sub_806E834((int)&gStringVar4, 1u);
      }
    }
    else
    {
      sub_806E834((int)&gUnknown_0840F2FC, 0);
      sub_80A9424(v201C006, 1);
    }
_0806EB9A:
    dword_3004B20[10 * v1] = (int)party_menu_link_mon_held_item_object;
    return v11;
  }
  if ( v2 == 1 || v2 == -1 )
  {
    if ( v2 == -1 )
      audio_play(5);
    MenuZeroFillWindowRect(23, 8, 29, 13);
    goto _0806EB9A;
  }
  return v11;
}
