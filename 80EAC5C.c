int sub_80EAC5C()
{
  unsigned int i; // r4@2
  int v2; // [sp+Ch] [bp-4h]@0

  if ( v20010BC )
  {
    for ( i = 0; i < v20010C2; i = (i + 1) & 0xFFFF )
      sub_80EACBC(100689920, 16 * i + 33558728, 12 * i + 33558856);
    v20010BC = 0;
  }
  return v2;
}
