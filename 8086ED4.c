int sub_8086ED4()
{
  int *v0; // r4@1
  char v1; // r0@2
  unsigned __int8 v2; // r0@2

  v0 = &dword_30048A0[9 * v202E85D];
  if ( FieldObjectClearAnimIfSpecialAnimFinished(v0) << 24 )
  {
    CameraObjectReset1();
    script_env_2_disable();
    v1 = GetGoSpeed0AnimId(4u);
    FieldObjectSetSpecialAnim(v0, v1);
    v2 = FindTaskIdByFunc((int)sub_8086CBC);
    DestroyTask(v2);
  }
  return 0;
}
