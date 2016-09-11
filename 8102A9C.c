signed int __fastcall sub_8102A9C(int a1)
{
  int v1; // r4@1
  signed int result; // r0@3

  v1 = a1;
  if ( !(sub_8103E38() << 24) || (++*(_WORD *)(v1 + 8), v200000E) )
  {
    result = 0;
  }
  else
  {
    *(_WORD *)(v1 + 8) = 2;
    result = 1;
  }
  return result;
}
