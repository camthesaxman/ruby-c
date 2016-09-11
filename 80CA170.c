int __fastcall task08_080A1C44(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  player_avatar_init_params_reset();
  sub_80878A8();
  DestroyTask(v1);
  return v3;
}
