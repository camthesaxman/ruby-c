int __fastcall SingleTrainerWantsBattle(char a1, int a2)
{
  int v3; // [sp+4h] [bp-4h]@0

  byte_3004AE0 = a1;
  v202E8DE = LOBYTE(dword_30048A0[9 * (unsigned __int8)a1 + 2]);
  sub_80823C8(a2 + 1);
  script_env_1_execute_new_script((int)&gUnknown_0819F80B);
  script_env_2_enable();
  return v3;
}
