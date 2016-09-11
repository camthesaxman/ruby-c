int sub_811CEB0()
{
  unsigned __int8 v0; // r0@2

  ++v200C012;
  if ( v200C012 > 0x10u )
  {
    sub_811D6D4(v200C012);
    v0 = FindTaskIdByFunc((int)sub_811CCDC);
    DestroyTask(v0);
  }
  return 0;
}
