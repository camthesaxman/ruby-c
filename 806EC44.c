int __fastcall sub_806EC44(int a1, int a2)
{
  int v2; // r2@1
  int v3; // r0@1
  int v4; // r2@1
  int v5; // r4@1
  int v7; // [sp+8h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  dword_3004B20[10 * a1] = (int)TaskDummy;
  sub_806E8D0(a1, 0, a2);
  v3 = GetMonData(v201C000, 12, v2);
  v202E8F4 = 0;
  v4 = 36 * (v201FE00 + 6 + v201FE02);
  v5 = v4 + 33718912;
  if ( v3 << 16 )
  {
    sub_806E834((int)"ÎÜÝç", 1u);
    CreateTask(party_menu_link_mon_held_item_object, 5);
  }
  else
  {
    sub_80A2D88(v201C000, v4 + 33718912);
    sub_80A2B40(v5);
    sub_806E834((int)"Ç»ÃÆ", 1u);
    CreateTask(party_menu_link_mon_held_item_object, 5);
  }
  return v7;
}
