int sub_8082188()
{
  unsigned __int16 v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  *(_WORD *)GetVarPointer(0x4023u) = v202E8DC;
  v0 = sub_8109E50(v202E8DC);
  sub_80C5374(v0, 5, 0, 0);
  ResetTasks();
  sub_80408BC();
  SetMainCallback2((int)sub_80821D8);
  sub_811AAD8(0);
  return v2;
}
