int __fastcall sub_8045110(int a1)
{
  int v1; // r3@1
  int v2; // r0@3
  unsigned int v3; // r4@3
  int v4; // r0@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 48) <= 0 )
  {
    v2 = *(_WORD *)(a1 + 50) << 24;
    v3 = (*(_WORD *)(v1 + 52) + 56) << 16;
    *(_WORD *)(v1 + 52) = (*(_WORD *)(v1 + 52) + 56) & 0xFFF0;
    if ( v2 )
      v4 = (v3 >> 20) + *(_WORD *)(v1 + 36);
    else
      v4 = *(_WORD *)(v1 + 36) - (v3 >> 20);
    *(_WORD *)(v1 + 36) = v4;
    if ( (unsigned int)(*(_WORD *)(v1 + 36) + *(_WORD *)(v1 + 32) + 8) > 0x100 )
    {
      *(_BYTE *)(v1 + 62) |= 4u;
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
    }
  }
  else
  {
    --*(_WORD *)(a1 + 48);
  }
  return v6;
}
