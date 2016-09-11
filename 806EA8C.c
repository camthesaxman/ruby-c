int __fastcall party_menu_link_mon_held_item_object(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !v202E8F6 )
  {
    sub_806DF60(v201C004, v201C005);
    dword_3004B20[10 * v201C004] = v201C010;
    DestroyTask(v1);
  }
  return v3;
}
