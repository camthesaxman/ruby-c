int happiness_algorithm_step()
{
  _WORD *v0; // r0@1
  int v1; // r1@1
  unsigned int *v2; // r5@2
  signed int v3; // r4@2
  int v5; // [sp+8h] [bp-4h]@0

  v0 = (_WORD *)GetVarPointer(16426);
  v1 = ++*v0 & 0x7F;
  *v0 = v1;
  if ( !v1 )
  {
    v2 = dword_3004360;
    v3 = 5;
    do
    {
      sub_803FCD4((int)v2, 5u);
      v2 += 25;
      --v3;
    }
    while ( v3 >= 0 );
  }
  return v5;
}
