int sub_80BF334()
{
  unsigned __int8 v0; // r0@2
  int v1; // r0@2
  int v3; // [sp+4h] [bp-4h]@0

  sub_80BF25C(1u);
  if ( !v202E8DC )
  {
    v0 = sub_810F87C(v202E8DC);
    v1 = GetMonData((int)&dword_3004360[25 * v0], 11, 0);
    StringCopy(&gStringVar1, &gSpeciesNames[11 * v1]);
    sub_80EB6FC(36 * byte_3005D38 + 33717872, 6);
  }
  return v3;
}
