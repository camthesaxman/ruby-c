int __fastcall sub_8051524(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 50) += *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 52) += *(_WORD *)(a1 + 48);
  *(_WORD *)(a1 + 36) = *(_WORD *)(a1 + 50) / 8;
  *(_WORD *)(a1 + 38) = *(_WORD *)(a1 + 52) / 8;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
    DestroySprite(a1);
  return v2;
}
