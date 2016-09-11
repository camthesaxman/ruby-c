int __fastcall sub_809A61C(int a1)
{
  int v1; // r2@1
  int v2; // r0@3
  int v3; // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 48) )
  {
    --*(_WORD *)(a1 + 48);
  }
  else
  {
    v2 = *(_WORD *)(a1 + 46) + *(_WORD *)(a1 + 32);
    *(_WORD *)(v1 + 32) = v2;
    v3 = v2 + *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 50) = v3;
    if ( ((v3 - 64) & 0xFFFFu) > 0xC0 )
      DestroySprite(v1);
  }
  return v5;
}
