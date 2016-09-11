int sub_8104C44()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = FindTaskIdByFunc((int)sub_8104B0C);
  DestroyTask(v0);
  return v2;
}
