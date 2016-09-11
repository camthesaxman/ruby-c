int __fastcall FreeSpriteOamMatrix(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 1) & 1 )
  {
    FreeOamMatrix((unsigned int)*(_BYTE *)(a1 + 3) << 26 >> 27);
    *(_BYTE *)(v1 + 1) &= 0xFCu;
  }
  return v3;
}
