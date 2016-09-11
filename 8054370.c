int c2_overworld_basic()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v6; // [sp+0h] [bp-4h]@0

  v0 = script_env_2_run_current_script();
  RunTasks(v0);
  v1 = AnimateSprites();
  v2 = CameraUpdate(v1);
  UpdateCameraPanning(v2);
  v3 = BuildOamBuffer();
  v4 = UpdatePaletteFade(v3);
  sub_8072EDC(v4);
  return v6;
}
