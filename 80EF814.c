int sub_80EF814()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( FuncIsActiveTask((int)sub_80EF780) << 24 )
    DestroyTask(v2006DA4);
  return v1;
}
