int __fastcall sub_806ECE8(int a1, int a2)
{
  int v2; // r2@1
  unsigned int v3; // r0@1
  unsigned int v4; // r4@1
  unsigned int v5; // r6@1
  int v6; // r1@3
  int v7; // r2@3
  int v8; // r3@3
  int v9; // r1@4
  char v11; // [sp+0h] [bp-14h]@3
  char v12; // [sp+1h] [bp-13h]@3
  int v13; // [sp+10h] [bp-4h]@9

  a1 = (unsigned __int8)a1;
  dword_3004B20[10 * a1] = (int)TaskDummy;
  sub_806E8D0(a1, 0, a2);
  v3 = GetMonData(v201C000, 12, v2) << 16;
  v4 = v3 >> 16;
  v5 = v3 >> 16;
  if ( v3 >> 16 )
  {
    v11 = 0;
    v12 = 0;
    if ( (unsigned __int8)sub_80A9424(v3 >> 16, 1) == 1 )
    {
      if ( (unsigned __int8)itemid_is_mail(v4, v6, v7, v8) == 1 )
        sub_80A2DF8(v201C000, v9);
      sub_806EDB4(v201C005, v5, 0);
      SetMonData(v201C000, 12, (int)&v11);
    }
    else
    {
      sub_806E834((int)&gUnknown_0840F2FC, 0);
    }
    CreateTask(party_menu_link_mon_held_item_object, 5);
  }
  else
  {
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F213);
    sub_806E834((int)&gStringVar4, 0);
    CreateTask(party_menu_link_mon_held_item_object, 5);
  }
  return v13;
}
