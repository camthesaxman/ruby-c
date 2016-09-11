int sub_80A18C4()
{
  unsigned int v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33660928) = -1;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x1D );
  return v2;
}
