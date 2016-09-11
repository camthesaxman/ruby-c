int sub_811B688()
{
  unsigned __int8 v0; // r0@2

  if ( !(FieldEffectActiveListContains(0x2Du) << 24) )
  {
    sub_811D6D4(0);
    v0 = FindTaskIdByFunc((int)sub_811B578);
    DestroyTask(v0);
  }
  return 0;
}
