int __fastcall sub_80AD92C(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 36) -= 6;
  if ( *(_WORD *)(a1 + 32) + (signed int)*(_WORD *)(a1 + 36) < -32 )
  {
    *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
    *(_BYTE *)(a1 + 62) |= 4u;
  }
  return v2;
}
