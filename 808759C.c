int __fastcall sub_808759C(int a1, _BYTE *a2)
{
  unsigned __int8 v2; // r0@2

  if ( FieldObjectClearAnimIfSpecialAnimFinished(a2) << 24 )
  {
    v202E85E = 0;
    script_env_2_disable();
    sub_806451C();
    v2 = FindTaskIdByFunc((int)sub_8087470);
    DestroyTask(v2);
  }
  return 0;
}
