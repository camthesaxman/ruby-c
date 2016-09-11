int __fastcall sub_805A1B8(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned __int8 v4; // r0@2
  unsigned __int8 v5; // r0@2
  int v6; // r0@2
  unsigned __int8 v7; // r0@2

  v2 = a1;
  v3 = a2;
  if ( FieldObjectClearAnimIfSpecialAnimFinished(a2) << 24 )
  {
    v4 = GetOppositeDirection(*(_BYTE *)(v2 + 10));
    v5 = GetSimpleGoAnimId(v4);
    v6 = FieldObjectSetSpecialAnim(v3, v5);
    script_env_2_disable(v6);
    v202E85E = 0;
    v7 = FindTaskIdByFunc(sub_805A08C);
    DestroyTask(v7);
  }
  return 0;
}
