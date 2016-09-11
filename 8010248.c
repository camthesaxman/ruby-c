int __fastcall oac_poke_opponent(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  *(_DWORD *)(a1 + 28) = sub_8010278;
  StartSpriteAnimIfDifferent(a1, 0);
  BeginNormalPaletteFade(0x20000, 0, 10, 10);
  return v2;
}
