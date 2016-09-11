int __fastcall AnimCmd_jump(int a1)
{
  int v1; // r4@1
  unsigned __int16 *v2; // r1@1
  unsigned __int16 v3; // r7@1
  unsigned __int16 v4; // r8@1
  int v5; // r3@1
  int v6; // r6@1
  int v7; // r5@1
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 43) = *(_DWORD *)(4 * *(_BYTE *)(a1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8))) << 10 >> 26;
  v2 = (unsigned __int16 *)(4 * *(_BYTE *)(a1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8)));
  v3 = *v2;
  v4 = *v2;
  v5 = *(_DWORD *)v2 << 10 >> 26;
  v6 = *(_DWORD *)v2 << 9 >> 31;
  v7 = *(_DWORD *)v2 << 8 >> 31;
  if ( v5 )
    v5 = ((*(_DWORD *)v2 << 10 >> 26) - 1) & 0xFF;
  *(_BYTE *)(a1 + 44) = *(_BYTE *)(a1 + 44) & 0xC0 | v5 & 0x3F;
  if ( !(*(_BYTE *)(a1 + 1) & 1) )
    SetSpriteOamFlipBits(a1, v6, v7);
  if ( *(_BYTE *)(v1 + 63) & 0x40 )
    *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | (*(_WORD *)(v1 + 64) + v3) & 0x3FF;
  else
    RequestSpriteFrameImageCopy(v4, *(_WORD *)(v1 + 4) & 0x3FF, *(_DWORD *)(v1 + 12));
  return v9;
}
