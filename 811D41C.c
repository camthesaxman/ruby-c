signed int __fastcall sub_811D41C(int a1)
{
  int v1; // r1@1
  int v2; // r0@1
  signed int result; // r0@2

  v1 = a1;
  v2 = *(_WORD *)(a1 + 14) - 1;
  *(_WORD *)(v1 + 14) = v2;
  if ( v2 << 16 )
  {
    result = 0;
  }
  else
  {
    result = 1;
    *(_WORD *)(v1 + 8) = 1;
  }
  return result;
}
