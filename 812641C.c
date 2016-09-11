int __fastcall sub_812641C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  v2 = script_read_word(a1);
  script_env_2_execute_new_script(v2 - *(_DWORD *)(v1 + 104) + *(_DWORD *)(v1 + 100));
  return 0;
}
