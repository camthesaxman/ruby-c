int sub_811AD80()
{
  unsigned __int8 v0; // r0@2

  if ( !(v202F38F & 0x80) )
  {
    v0 = FindTaskIdByFunc((int)sub_811ACB4);
    DestroyTask(v0);
  }
  return 0;
}
