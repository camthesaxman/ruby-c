int __fastcall ItemUseOutOfBattle_CannotUse(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  DisplayDadsAdviceCannotUseItemMessage(a1, dword_3004B20[10 * a1 + 3]);
  return v2;
}
