int __fastcall sub_8130AEC(int a1)
{
  int v1; // r3@1
  signed __int16 v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
  {
    *(_WORD *)(a1 + 32) = 140;
    v2 = -1;
  }
  else
  {
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(a1 + 3) & 0xC1 | 2 * (((unsigned int)*(_BYTE *)(a1 + 3) << 26 >> 27) | 8);
    *(_WORD *)(a1 + 32) = 100;
    v2 = 1;
  }
  *(_WORD *)(v1 + 60) = v2;
  *(_WORD *)(v1 + 34) = 56;
  *(_DWORD *)(v1 + 28) = sub_8130B38;
  return v4;
}
