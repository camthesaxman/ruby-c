int __fastcall TrainerBattleLoadArg16(int a1)
{
  return *(_BYTE *)a1 | (*(_BYTE *)(a1 + 1) << 8);
}
