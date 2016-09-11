int __fastcall sub_80DA48C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 46) = v2 - 1;
  if ( v2 << 16 <= 0 )
  {
    if ( *(_BYTE *)(v1 + 1) & 1 )
    {
      FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
      *(_BYTE *)(v1 + 1) &= 0xFCu;
    }
    DestroySprite(v1);
    --v202F7B2;
  }
  return v4;
}
