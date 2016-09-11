int wild_encounter_reset_coro_args()
{
  int v0; // r1@1
  char *v1; // r0@2
  int v3; // [sp+0h] [bp-4h]@0

  FindTaskIdByFunc(task_per_step_callback_manager);
  v0 = (unsigned __int8)FindTaskIdByFunc(sub_80694B8);
  if ( v0 != 255 )
  {
    v1 = (char *)&unk_3004B28 + 40 * v0;
    *((_WORD *)v1 + 1) = 0;
    *((_WORD *)v1 + 2) = 0;
  }
  return v3;
}
