int sub_8096100()
{
  int *v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_8095EB4, 80)];
  *((_WORD *)v0 + 4) = 0;
  *((_WORD *)v0 + 5) = 0;
  script_env_2_enable();
  return v2;
}
