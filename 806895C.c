int overworld_poison_step()
{
  _WORD *v0; // r0@2
  int v1; // r1@2
  int v2; // r0@3
  int result; // r0@6

  result = 0;
  if ( v202E83F != 9 )
  {
    v0 = (_WORD *)GetVarPointer(16427);
    v1 = ++*v0 & 3;
    *v0 = v1;
    if ( !v1 )
    {
      v2 = overworld_poison();
      if ( v2 != 1 && v2 > 1 && v2 == 2 )
        result = 1;
    }
  }
  return result;
}
