int __fastcall AnimCmd_frame(int a1)
{
  int v1; // r4@1
  unsigned __int16 *v2; // r0@1
  unsigned __int16 v3; // r7@1
  unsigned __int16 v4; // r8@1
  int v5; // r0@1
  unsigned int v6; // r3@1
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int16 *)(4 * *(_BYTE *)(a1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8)));
  v3 = *v2;
  v4 = *v2;
  v5 = *(_DWORD *)v2;
  v6 = (unsigned int)(v5 << 10) >> 26;
  if ( v6 )
    v6 = (((unsigned int)(v5 << 10) >> 26) - 1) & 0xFF;
  *(_BYTE *)(v1 + 44) = *(_BYTE *)(v1 + 44) & 0xC0 | v6 & 0x3F;
  if ( !(*(_BYTE *)(v1 + 1) & 1) )
    SetSpriteOamFlipBits(v1, (unsigned int)(v5 << 9) >> 31, (unsigned int)(v5 << 8) >> 31);
  if ( *(_BYTE *)(v1 + 63) & 0x40 )
    *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | (*(_WORD *)(v1 + 64) + v3) & 0x3FF;
  else
    RequestSpriteFrameImageCopy(v4, *(_WORD *)(v1 + 4) & 0x3FF, *(_DWORD *)(v1 + 12));
  return v8;
}
