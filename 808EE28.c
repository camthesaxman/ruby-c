int __fastcall sub_808EE28(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  int v3; // r0@3
  unsigned int v4; // r2@4
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) & 0xFF;
  if ( *(_BYTE *)(v202FFB4 + 1610) && *(_BYTE *)(v202FFB4 + 1610) != 3 )
  {
    DestroySprite(a1);
    v3 = v202FFB4;
_0808EF16:
    *(_WORD *)(v3 + 1566 + 2 * v2) = -1;
    return v6;
  }
  *(_WORD *)(a1 + 38) = 76 * *(_WORD *)((char *)gSineTable + (2 * *(_WORD *)(a1 + 56) & 0x1FF)) / 256;
  v4 = 0x10000 / gSineTable[*(_WORD *)(a1 + 56) + 64];
  if ( v4 > 0xFFFF )
    LOWORD(v4) = -1;
  SetOamMatrix((*(_WORD *)(a1 + 48) + 1) & 0xFF, 256, 0, 0, v4);
  *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * ((v2 + 1) & 0x1F);
  if ( ((*(_WORD *)(v1 + 56) + 63) & 0xFFFFu) > 0x7E )
  {
    *(_BYTE *)(v1 + 62) |= 4u;
  }
  else
  {
    *(_BYTE *)(v1 + 62) &= 0xFBu;
    *(_WORD *)(v1 + 46) = 1;
  }
  if ( ((*(_WORD *)(v1 + 56) + 63) & 0xFFFFu) > 0x7E && *(_WORD *)(v1 + 46) )
  {
    DestroySprite(v1);
    v3 = v202FFB4;
    goto _0808EF16;
  }
  return v6;
}
