int __fastcall sub_8059F40(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  unsigned __int8 v5; // r0@3

  v3 = a2;
  v4 = a3;
  if ( FieldObjectCheckIfSpecialAnimFinishedOrInactive(a2) << 24
    && FieldObjectCheckIfSpecialAnimFinishedOrInactive(v4) << 24 )
  {
    FieldObjectClearAnimIfSpecialAnimFinished(v3);
    FieldObjectClearAnimIfSpecialAnimFinished(v4);
    v202E85E = 0;
    script_env_2_disable(0);
    v5 = FindTaskIdByFunc(sub_8059E2C);
    DestroyTask(v5);
  }
  return 0;
}
