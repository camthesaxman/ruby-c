int sub_811A0C0()
{
  char *v0; // r0@2
  unsigned int v1; // r2@4
  int v3; // [sp+4h] [bp-4h]@0

  if ( gPcmDmaCounter > 1 )
    v0 = (char *)&unk_3006320 + dword_3005FE0 * ((unsigned __int8)byte_3005FDB - (gPcmDmaCounter - 1));
  else
    v0 = (char *)&unk_3006320;
  v1 = 0;
  do
  {
    *(_BYTE *)(v1 + 33669120) = 2 * v0[2 * v1 + 1584];
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  return v3;
}
