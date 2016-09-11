signed int sub_8053AA8()
{
  int v0; // r7@0
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  unsigned int v3; // r7@1

  v1 = (unsigned __int8)sav1_map_get_light_level();
  v2 = cur_mapdata_block_role_at_screen_center_acc_to_sav1();
  v3 = v0 & 0xFFFFFF00 | (unsigned __int8)sub_8053B00(33724432, v2, v1);
  v2029810 = v3 & 0xFFFF00FF | (sub_8053B60(33724432) << 8) & 0xFFFF;
  return 33724432;
}
