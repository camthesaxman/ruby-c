int __fastcall TrainerBattleLoadArg32(int a1)
{
  return *(_BYTE *)a1 | (*(_BYTE *)(a1 + 1) << 8) | (*(_BYTE *)(a1 + 2) << 16) | (*(_BYTE *)(a1 + 3) << 24);
}
