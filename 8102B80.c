int sub_8102B80()
{
  unsigned __int8 v0; // r0@2

  if ( sub_8103E7C() << 24 )
  {
    v0 = FindTaskIdByFunc((int)sub_8102A64);
    DestroyTask(v0);
  }
  return 0;
}
