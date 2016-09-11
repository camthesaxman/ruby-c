int __fastcall sub_8087BEC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  script_env_2_enable();
  player_bitmagic();
  CameraObjectReset2();
  *(_WORD *)(v1 + 38) = (unsigned __int8)player_get_direction_lower_nybble();
  ++*(_WORD *)(v1 + 8);
  return v3;
}
