int __fastcall sub_80994A8(__int16 a1)
{
  unsigned int v1; // r3@1
  int v2; // r2@3
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v1 + 0x2001038) )
    {
      *(_WORD *)(*(_DWORD *)(4 * v1 + 0x2001038) + 34) += a1;
      v2 = *(_DWORD *)(4 * v1 + 0x2001038);
      if ( (((*(_BYTE *)(v2 + 41) + *(_WORD *)(v2 + 38) + (unsigned int)*(_WORD *)(v2 + 34)) << 16) + 0x100000) >> 16 <= 0xC0 )
        *(_BYTE *)(v2 + 62) &= 0xFBu;
      else
        *(_BYTE *)(v2 + 62) |= 4u;
    }
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 5 );
  return v4;
}
