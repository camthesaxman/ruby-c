signed int __fastcall VarSet(unsigned __int16 a1, __int16 a2)
{
  __int16 v2; // r4@1
  _WORD *v3; // r0@1
  signed int result; // r0@2

  v2 = a2;
  v3 = (_WORD *)GetVarPointer(a1);
  if ( v3 )
  {
    *v3 = v2;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
