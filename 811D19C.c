int __fastcall sub_811D19C(int a1)
{
  int v1; // r1@1
  unsigned __int8 v2; // r0@2

  v1 = *(_WORD *)(a1 + 10) - 1;
  *(_WORD *)(a1 + 10) = v1;
  if ( !(v1 << 16) )
  {
    sub_811D6D4(a1);
    v2 = FindTaskIdByFunc((int)sub_811D0B8);
    DestroyTask(v2);
  }
  return 0;
}
