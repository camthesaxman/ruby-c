int __fastcall StartSpriteAnimIfDifferent(int a1, char a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 42) != (unsigned __int8)a2 )
    StartSpriteAnim(a1, a2);
  return v3;
}
