int __fastcall sub_806E964(unsigned __int8 a1, __int16 a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  int v5; // r9@1
  int *v6; // r6@1
  int v7; // r2@1
  unsigned __int16 v8; // r0@1
  int v9; // r3@1
  int v10; // r7@1
  int v11; // r1@4
  int v12; // r2@4
  int v13; // r3@4
  int v14; // r1@6
  int v15; // r2@6
  int v16; // r3@6
  int v18; // [sp+1Ch] [bp-4h]@0

  v3 = a3;
  v4 = (unsigned __int16)a2;
  v5 = (unsigned __int16)a2;
  v6 = &dword_3004B20[10 * a1];
  *v6 = (int)TaskDummy;
  sub_806E8D0(a1, a2, a3);
  v8 = GetMonData(v201C000, 12, v7);
  v10 = v8;
  v202E8F4 = 0;
  v202E8F8 = 0;
  if ( v8 )
  {
    if ( (unsigned __int8)itemid_is_mail(v8, 33745144, v8, v9) == 1 )
    {
      sub_806E834((int)"Ç»ÃÆ", 1u);
      CreateTask(party_menu_link_mon_held_item_object, 5);
    }
    else
    {
      GetMonNickname(v201C000, (int)&gStringVar1);
      itemid_copy_name(v10, &gStringVar2);
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F1CD);
      sub_806E834((int)&gStringVar4, 1u);
      CreateTask(sub_806EBB8, 5);
      if ( (unsigned __int8)itemid_is_mail(v4, v11, v12, v13) == 1 )
        v202E8F8 = v10;
    }
  }
  else
  {
    sub_806E904(v201C000, v4, 0, v9);
    sub_80A9538(v4, 1);
    if ( itemid_is_mail(v4, v14, v15, v16) << 24 )
    {
      *v6 = v3;
    }
    else
    {
      sub_806EBF0(v201C005, v5, 1);
      CreateTask(party_menu_link_mon_held_item_object, 5);
    }
  }
  return v18;
}
