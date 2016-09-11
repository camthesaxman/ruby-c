int __fastcall SeekSpriteAnim(int a1, char a2)
{
  _BYTE *v2; // r4@1
  unsigned int v3; // r6@1
  int v5; // [sp+10h] [bp-4h]@0

  v2 = (_BYTE *)(a1 + 44);
  v3 = (unsigned int)*(_BYTE *)(a1 + 44) << 25 >> 31;
  *(_BYTE *)(a1 + 43) = a2 - 1;
  *v2 = *(_BYTE *)(a1 + 44) & 0xC0;
  *(_BYTE *)(a1 + 63) &= 0xEBu;
  *v2 = *(_BYTE *)(a1 + 44) & 0xBF;
  ContinueAnim(a1);
  if ( *v2 & 0x3F )
    *v2 = *v2 & 0xC0 | ((*v2 & 0x3F) + 1) & 0x3F;
  *v2 = *v2 & 0xBF | ((_BYTE)v3 << 6);
  return v5;
}
