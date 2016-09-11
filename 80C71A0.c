int __fastcall sub_80C71A0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = sub_80597D0();
  SetPlayerAvatarTransitionFlags(v2);
  DestroyTask(v1);
  script_env_2_enable_and_set_ctx_running();
  return v4;
}
