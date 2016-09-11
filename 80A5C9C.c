int __fastcall sub_80A5C9C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0xDu, 0x1Du, 0x13u);
  DestroyTask(v1);
  sub_8064E2C();
  script_env_2_disable();
  return v3;
}
