signed int __fastcall sub_8061FF8(int a1, int a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1
  signed int result; // r0@2

  v2 = (_BYTE *)a1;
  v3 = a2;
  if ( sub_8061340(a1, a2) << 24 )
  {
    *(_WORD *)(v3 + 50) = 2;
    *v2 &= 0xDFu;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
