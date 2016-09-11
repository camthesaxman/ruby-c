int cur_mapheader_run_tileset_funcs_after_some_cpuset()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = sub_8072DF8();
  v1 = cur_mapheader_run_tileset1_func(v0);
  cur_mapheader_run_tileset2_func(v1);
  return v3;
}
