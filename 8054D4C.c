int __fastcall sub_8054D4C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r0@1
  int v12; // [sp+4h] [bp-4h]@0

  v1 = a1;
  ResetTasks(a1);
  v2 = ResetSpriteData();
  v3 = ResetPaletteFade(v2);
  v4 = dp12_8087EA4(v3);
  v5 = ResetCameraUpdateInfo(v4);
  InstallCameraPanAheadCallback(v5);
  v6 = sub_805C7C4(0);
  v7 = FieldEffectActiveListClear(v6);
  v8 = sub_8064A74(v7);
  v9 = sub_807C828(v8);
  v10 = sub_8080750(v9);
  if ( !v1 )
    v10 = overworld_ensure_per_step_coros_running(v10);
  mapheader_run_script_with_tag_x5(v10);
  return v12;
}
