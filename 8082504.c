int __fastcall GetTrainerFlagFromScriptPointer(int a1)
{
  int v1; // r0@1

  v1 = TrainerBattleLoadArg16(a1 + 2);
  return (unsigned __int8)FlagGet((unsigned int)((v1 << 16) + 83886080) >> 16);
}
