signed int __fastcall script_stack_push(_BYTE *a1, int a2)
{
  int v2; // r3@1
  int v3; // r1@1
  signed int result; // r0@2

  v2 = a2;
  v3 = *a1;
  if ( v3 + 1 > 19 )
  {
    result = 1;
  }
  else
  {
    *(_DWORD *)&a1[4 * v3 + 12] = v2;
    ++*a1;
    result = 0;
  }
  return result;
}
