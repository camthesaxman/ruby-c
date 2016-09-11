int __fastcall sub_80934F4(int a1)
{
  int v1; // r2@1

  v1 = 0;
  if ( *(_WORD *)(a1 + 6) || *(_DWORD *)(a1 + 8) )
    v1 = 1;
  if ( *(_BYTE *)(a1 + 3) )
    v1 = (v1 + 1) & 0xFF;
  if ( (unsigned int)*(_WORD *)(a1 + 26) > 0x31 )
    v1 = (v1 + 1) & 0xFF;
  if ( *(_BYTE *)(a1 + 4) )
    v1 = (v1 + 1) & 0xFF;
  return v1;
}
