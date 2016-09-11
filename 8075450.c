int sub_8075450()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( (unsigned __int8)FuncIsActiveTask(sub_8075408) != 1 )
    CreateTask(sub_8075408, 80);
  return v1;
}
