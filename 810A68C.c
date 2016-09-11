int __fastcall sub_810A68C(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( LOWORD(dword_3004B20[10 * *(_WORD *)(a1 + 46) + 2]) == *(_WORD *)(a1 + 48) )
    StartSpriteAnimIfDifferent(a1, 1);
  else
    StartSpriteAnimIfDifferent(a1, 0);
  return v2;
}
