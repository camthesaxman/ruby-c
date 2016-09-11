int __fastcall ItemUseOutOfBattle_Bike(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r4@1
  signed __int16 v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+Ch] [bp-4h]@11

  v1 = a1;
  PlayerGetDestCoords(&v4, &v4 + 1);
  v2 = MapGridGetMetatileBehaviorAt(v4, *(&v4 + 1));
  if ( (unsigned __int8)FlagGet(0x82Bu) != 1
    && (unsigned __int8)MetatileBehavior_IsVerticalRail(v2) != 1
    && (unsigned __int8)MetatileBehavior_IsHorizontalRail(v2) != 1
    && (unsigned __int8)MetatileBehavior_IsIsolatedVerticalRail(v2) != 1
    && (unsigned __int8)MetatileBehavior_IsIsolatedHorizontalRail(v2) != 1 )
  {
    if ( sub_8053C44() != 1 || sub_80E5EF4() << 24 )
    {
      DisplayDadsAdviceCannotUseItemMessage(v1, dword_3004B20[10 * v1 + 3]);
    }
    else
    {
      dword_3005D00 = (int)ItemUseOnFieldCB_Bike;
      SetUpItemUseOnFieldCallback(v1);
    }
  }
  else
  {
    sub_80C9104(v1, dword_3004B20[10 * v1 + 3]);
  }
  return v5;
}
