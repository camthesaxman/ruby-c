int __fastcall BeginAnim(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r5@1
  unsigned __int16 v3; // r9@1
  int v4; // r0@2
  unsigned int v5; // r3@2
  int v7; // [sp+18h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 43) = 0;
  v2 = (_BYTE *)(a1 + 63);
  *(_BYTE *)(a1 + 63) &= 0xEFu;
  *(_BYTE *)(a1 + 45) = 0;
  v3 = *(_WORD *)(4 * *(_BYTE *)(a1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8)));
  if ( (signed __int16)v3 != -1 )
  {
    *v2 &= 0xFBu;
    v4 = *(_DWORD *)(4 * *(_BYTE *)(a1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8)));
    v5 = (unsigned int)(v4 << 10) >> 26;
    if ( v5 )
      v5 = (((unsigned int)(v4 << 10) >> 26) - 1) & 0xFF;
    *(_BYTE *)(v1 + 44) = *(_BYTE *)(v1 + 44) & 0xC0 | v5 & 0x3F;
    if ( !(*(_BYTE *)(v1 + 1) & 1) )
      SetSpriteOamFlipBits(v1, (unsigned int)(v4 << 9) >> 31, (unsigned int)(v4 << 8) >> 31);
    if ( *v2 & 0x40 )
      *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | (*(_WORD *)(v1 + 64) + v3) & 0x3FF;
    else
      RequestSpriteFrameImageCopy(v3, *(_WORD *)(v1 + 4) & 0x3FF, *(_DWORD *)(v1 + 12));
  }
  return v7;
}
