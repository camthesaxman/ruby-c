int sub_80BC224()
{
  int v0; // r4@1
  unsigned __int8 v1; // r0@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = 160 * (unsigned __int8)VarGet(16468) + 33714494;
  v1 = sub_80BB8A8(v0);
  *(_BYTE *)StringCopyN((int)&gStringVar1, v0, v1) = -1;
  return v3;
}
