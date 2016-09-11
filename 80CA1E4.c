int __fastcall ItemUseOutOfBattle_EscapeRope(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)sub_80CA1C8() == 1 )
  {
    dword_3005D00 = (int)sub_80CA18C;
    SetUpItemUseOnFieldCallback(v1);
  }
  else
  {
    DisplayDadsAdviceCannotUseItemMessage(v1, dword_3004B20[10 * v1 + 3]);
  }
  return v3;
}
