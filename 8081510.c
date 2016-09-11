int sub_8081510()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( !(FuncIsActiveTask((int)sub_80814E8) << 24) )
    CreateTask((int)sub_80814E8, 80);
  return v1;
}
