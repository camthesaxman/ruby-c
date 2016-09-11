int __fastcall script_stack_pop(_BYTE *a1)
{
  _BYTE *v1; // r2@1
  int v2; // r0@1
  int result; // r0@2

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    *v1 = v2 - 1;
    result = *(_DWORD *)&v1[4 * *v1 + 12];
  }
  else
  {
    result = 0;
  }
  return result;
}
