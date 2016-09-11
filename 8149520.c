int sub_8149520()
{
  unsigned int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    SetOamMatrix((v0 + 20) & 0xFF, gUnknown_08416ED0[v0], 0, 0, gUnknown_08416ED0[v0]);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0xB );
  return v2;
}
