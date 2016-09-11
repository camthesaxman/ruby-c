int sub_8088AF4()
{
  int *v0; // r4@1
  char v1; // r0@2
  unsigned __int8 v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v0 = &dword_30048A0[9 * v202E85D];
  if ( FieldObjectClearAnimIfSpecialAnimFinished(v0) << 24 )
  {
    v202E85E = 0;
    v202E858 &= 0xDFu;
    v1 = GetFaceDirectionAnimId(*((_BYTE *)v0 + 24) >> 4);
    FieldObjectSetSpecialAnim(v0, v1);
    sub_8127ED0(*((_BYTE *)v0 + 26), 1);
    sub_806451C();
    script_env_2_disable();
    FieldEffectActiveListRemove(9u);
    v2 = FindTaskIdByFunc((int)sub_8088954);
    DestroyTask(v2);
  }
  return v4;
}
