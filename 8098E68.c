int __fastcall sub_8098E68(int a1)
{
  int v1; // r2@1
  int v2; // r0@3
  int v3; // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 54) )
  {
    --*(_WORD *)(a1 + 54);
  }
  else
  {
    v2 = *(_WORD *)(a1 + 50) + *(_WORD *)(a1 + 32);
    *(_WORD *)(v1 + 32) = v2;
    v3 = v2 + *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 56) = v3;
    if ( ((v3 - 69) & 0xFFFFu) > 0xB6 )
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
  }
  return v5;
}
