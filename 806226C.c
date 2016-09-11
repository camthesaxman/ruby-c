signed int __fastcall sub_806226C(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  signed int result; // r0@2

  v2 = a1;
  v3 = a2;
  if ( sub_8061328(a1, a2) << 24 )
  {
    *(_BYTE *)(v2 + 2) &= 0xBFu;
    *(_WORD *)(v3 + 50) = 2;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
