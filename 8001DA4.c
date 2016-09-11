int __fastcall DecrementAnimDelayCounter(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( !(*(_BYTE *)(a1 + 44) & 0x40) )
    *(_BYTE *)(a1 + 44) = *(_BYTE *)(a1 + 44) & 0xC0 | ((*(_BYTE *)(a1 + 44) & 0x3F) - 1) & 0x3F;
  return v2;
}
