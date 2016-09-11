unsigned int __fastcall GetSpriteMatrixNum(int a1)
{
  unsigned int v1; // r3@1

  v1 = 0;
  if ( *(_BYTE *)(a1 + 1) & 1 )
    v1 = (unsigned int)*(_BYTE *)(a1 + 3) << 26 >> 27;
  return v1;
}
