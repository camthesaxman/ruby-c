int __fastcall sub_811C630(int *a1)
{
  int *v1; // r4@1
  unsigned __int8 v2; // r0@1

  v1 = a1;
  v40000BA &= 0xC5FFu;
  v40000BA &= 0x7FFFu;
  sub_811D6D4(v40000BA);
  v2 = FindTaskIdByFunc(*v1);
  DestroyTask(v2);
  return 0;
}
