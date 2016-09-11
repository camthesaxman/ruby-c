int sub_811BBEC()
{
  unsigned __int8 v0; // r0@1

  v40000BA &= 0xC5FFu;
  v40000BA &= 0x7FFFu;
  sub_811D6D4(v40000BA);
  v0 = FindTaskIdByFunc((int)sub_811B7E8);
  DestroyTask(v0);
  return 0;
}
