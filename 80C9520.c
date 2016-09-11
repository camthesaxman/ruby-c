int __fastcall sub_80C9520(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
  sub_8064E2C();
  script_env_2_disable();
  DestroyTask(v1);
  return v3;
}
