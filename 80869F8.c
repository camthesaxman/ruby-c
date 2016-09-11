int sub_80869F8()
{
  unsigned __int8 v0; // r0@1

  v202E85E = 0;
  script_env_2_disable();
  CameraObjectReset1();
  sub_806451C();
  InstallCameraPanAheadCallback();
  v0 = FindTaskIdByFunc((int)sub_8086774);
  DestroyTask(v0);
  return 0;
}
