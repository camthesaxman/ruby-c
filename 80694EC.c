int overworld_ensure_per_step_coros_running()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !(unsigned __int8)FuncIsActiveTask(task_per_step_callback_manager) )
    LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask(task_per_step_callback_manager, 80) + 2]) = 0;
  if ( !(FuncIsActiveTask(sub_806A1E8) << 24) )
    CreateTask(sub_806A1E8, 80);
  if ( !(FuncIsActiveTask(sub_80694B8) << 24) )
    CreateTask(sub_80694B8, 80);
  return v1;
}
