int sub_81150FC()
{
  int v1; // [sp+0h] [bp-4h]@0

  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  if ( v20190B8 )
    task_tutorial_controls_fadein(33657016);
  return v1;
}
