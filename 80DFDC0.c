int __fastcall sub_80DFDC0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  signed __int16 v2; // r2@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v4000052 = 4096;
  if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8) == 1 )
    v2 = 16194;
  else
    v2 = 16196;
  v4000050 = v2;
  move_anim_task_del(v1);
  return v4;
}
