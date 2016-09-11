int FieldEffectActiveListClear()
{
  unsigned int v0; // r2@1
  int v1; // r1@2
  int v3; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (unsigned __int8)byte_30006E0[v0] | 0xFF;
    byte_30006E0[v0] = -1;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x1F );
  return v3;
}
