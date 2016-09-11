int __fastcall sub_8047754(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 63) & 0x10 )
    *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
  return v2;
}
