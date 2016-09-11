signed int __fastcall sub_8061510(int a1, int a2)
{
  int v2; // r0@1
  signed int result; // r0@2

  v2 = *(_WORD *)(a2 + 52) - 1;
  *(_WORD *)(a2 + 52) = v2;
  if ( v2 << 16 )
  {
    result = 0;
  }
  else
  {
    *(_WORD *)(a2 + 50) = 2;
    result = 1;
  }
  return result;
}
