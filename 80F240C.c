int __fastcall sub_80F240C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_DWORD *)(4 * *(_WORD *)(a1 + 48) + 16 * *(_WORD *)(a1 + 46) + 0x2000320) = 0;
  if ( *(_BYTE *)(a1 + 63) & 0x20 )
    FreeOamMatrix((unsigned int)*(_BYTE *)(a1 + 3) << 26 >> 27);
  DestroySprite(v1);
  return v3;
}
