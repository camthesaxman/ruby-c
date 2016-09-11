int sub_80F8E80()
{
  int v0; // r6@1
  unsigned int i; // r4@1
  int v2; // r6@4
  int v4; // [sp+14h] [bp-4h]@0

  v0 = 0;
  for ( i = 0; i < *v200010C; i = (i + 1) & 0xFFFF )
  {
    if ( *(_BYTE *)(27 * i + 0x2000000) != 255 && *(_BYTE *)(27 * i + 0x2000000) )
    {
      v2 = (v0 + (*(_DWORD *)(4 * i + *(_DWORD *)(v200010C + 4)) & 3)) & 0xFF;
      MenuPrint(
        27 * i + 0x2000000,
        (*(_BYTE *)(v200010C + 3) >> 4) + (*(_DWORD *)(4 * i + *(_DWORD *)(v200010C + 4)) << 24 >> 28),
        v2 + (*(_BYTE *)(v200010C + 3) & 0xF));
      v0 = (v2 + 2) & 0xFF;
    }
  }
  MenuPrint(33554648, v20000F9, *(_BYTE *)(v200010C + 1));
  return v4;
}
