int task_del_textbox()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = (unsigned __int8)FindTaskIdByFunc(sub_8064AA0);
  if ( v0 != 255 )
    DestroyTask(v0);
  return v2;
}
