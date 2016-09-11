int __fastcall ItemUseOutOfBattle_WailmerPail(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)WaterBerryTree() == 1 )
  {
    dword_3005D00 = (int)sub_80C9D74;
    SetUpItemUseOnFieldCallback(v1);
  }
  else
  {
    DisplayDadsAdviceCannotUseItemMessage(v1, dword_3004B20[10 * v1 + 3]);
  }
  return v3;
}
