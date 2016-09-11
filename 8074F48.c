int task_add_50_overworld_fanfare_if_not_running()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( (unsigned __int8)FuncIsActiveTask(task50_overworld_fanfare) != 1 )
    CreateTask(task50_overworld_fanfare, 80);
  return v1;
}
