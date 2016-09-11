int sub_8054C2C()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = sub_8054814();
  sub_8054C54(v0);
  SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
  InitMenuWindow(&gWindowConfig_81E6CE4);
  mapdata_load_assets_to_gpu_and_full_redraw();
  return v2;
}
