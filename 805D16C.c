signed int __fastcall sub_805D16C(int a1, int a2)
{
  int v2; // r4@1
  signed int result; // r0@2

  v2 = a2;
  if ( sub_8064824(a2) << 24 )
  {
    *(_WORD *)(v2 + 48) = 4;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
