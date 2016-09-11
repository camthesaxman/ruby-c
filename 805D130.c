signed int __fastcall sub_805D130(int a1, int a2)
{
  int v2; // r6@1
  char v3; // r0@2
  signed int result; // r0@2

  v2 = a2;
  if ( FieldObjectExecRegularAnim() << 24 )
  {
    v3 = Random();
    sub_8064820(v2, (signed __int16)gUnknown_0837520C[v3 & 3]);
    *(_WORD *)(v2 + 48) = 3;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
