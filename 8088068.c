int sub_8088068()
{
  unsigned __int8 v0; // r0@1
  int (*v1)(); // r0@2
  int v2; // r4@4

  v0 = sav1_map_get_light_level();
  if ( (unsigned __int8)is_light_level_1_2_3_5_or_6(v0) == 1 )
    v1 = sub_8088120;
  else
    v1 = sub_808847C;
  v2 = (unsigned __int8)CreateTask((int)v1, -1);
  HIWORD(dword_3004B20[10 * v2 + 9]) = (unsigned __int8)sub_8088830(v202FF84, v202FF88, v202FF8C);
  return 0;
}
