int sub_8071B28()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( sub_80719FC(&byte_3001BAC) )
  {
    CreateTask(sub_8071B64, 80);
    SetMainCallback2((int)sub_8071B54);
  }
  return v1;
}
