int sub_80C0750()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( (unsigned int)*(_BYTE *)(4 * v0 + 0x20281F0) > 3 )
      sub_80BEC10(v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  sub_80BEC40();
  return v2;
}
