int sub_81048A8()
{
  unsigned __int8 v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( sub_8104E18() << 24 )
  {
    v0 = FindTaskIdByFunc((int)sub_810434C);
    DestroyTask(v0);
  }
  return v2;
}
