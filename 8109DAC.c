int __fastcall sub_8109DAC(int a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8072DEC(a1);
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  v202E8D0 = 0;
  DestroyTask(v1);
  script_env_2_enable_and_set_ctx_running();
  return v3;
}
