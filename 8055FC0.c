int sub_8055FC0()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  mapheader_copy_mapdata_with_padding(33744936);
  sub_80BBCCC(0);
  v0 = sub_80BB970(v202E82C);
  v1 = sub_8056670(v0);
  mapheader_run_script_with_tag_x1(v1);
  UpdateTVScreensOnMap(dword_3004870, dword_3004874);
  return v3;
}
