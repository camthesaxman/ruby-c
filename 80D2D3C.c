int __fastcall sub_80D2D3C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(sub_807992C((int)&dword_3004B20[10 * a1]) << 24) )
    move_anim_task_del(v1);
  return v3;
}
