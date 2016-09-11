int __fastcall sub_80BBBEC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    warp1_set(
      v2025738,
      v2025739,
      -1,
      gUnknown_083D1374[(char)(4 * (v20387DC / 0xAu)) + 2],
      gUnknown_083D1374[(char)(4 * (v20387DC / 0xAu)) + 3]);
    warp_in();
    dword_300485C = (int)sub_80BBB90;
    SetMainCallback2((int)c2_load_new_map);
    DestroyTask(v1);
  }
  return v3;
}
