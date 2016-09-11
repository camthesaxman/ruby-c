int sub_80F99CC()
{
  int v1; // [sp+4h] [bp-4h]@0

  script_env_2_enable();
  LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80F9A8C, 10) + 2]) = 2;
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  return v1;
}
