int __fastcall sub_8098E24(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_WORD *)(a1 + 48) )
  {
    --*(_WORD *)(a1 + 48);
    *(_WORD *)(a1 + 32) += *(_WORD *)(a1 + 50);
  }
  else
  {
    --v2001178;
    *(_WORD *)(a1 + 32) = *(_WORD *)(a1 + 52);
    *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
  }
  return v2;
}
