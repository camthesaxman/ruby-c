unsigned int __fastcall VarGet(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  _WORD *v3; // r0@1
  unsigned int result; // r0@2

  v1 = a1 << 16;
  v2 = v1 >> 16;
  v3 = (_WORD *)GetVarPointer(HIWORD(v1));
  if ( v3 )
    result = *v3;
  else
    result = v2;
  return result;
}
