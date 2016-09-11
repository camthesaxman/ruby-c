int __fastcall sub_8047830(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 36) -= *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 38) -= *(_WORD *)(a1 + 48);
  if ( !*(_DWORD *)(a1 + 36) )
    *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
  return v2;
}
