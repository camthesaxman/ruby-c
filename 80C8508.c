int sub_80C8508()
{
  unsigned int v0; // r4@1
  int v1; // r0@3
  int v3; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( *(_BYTE *)(16 * v0 + 0x2038811) )
    {
      v1 = *(_BYTE *)(16 * v0 + 0x2038811) - 1;
      *(_BYTE *)(16 * v0 + 0x2038811) = v1;
      if ( !(v1 << 24) )
        sub_80C82BC(v0);
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 9 );
  return v3;
}
