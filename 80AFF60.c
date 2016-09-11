int __fastcall sub_80AFF60(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( *(_WORD *)(a1 + 36) == *(_WORD *)(a1 + 48) )
  {
    *(_BYTE *)(4 * *(_WORD *)(a1 + 46) + 0x201933A) &= 0xFEu;
    *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
  }
  else
  {
    *(_WORD *)(a1 + 36) += *(_WORD *)(a1 + 50);
  }
  return v2;
}
