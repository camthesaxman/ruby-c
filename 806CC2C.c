int __fastcall sub_806CC2C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  DestroySprite((int)&gSprites[68 * v2001001]);
  sub_806D538(0, 0);
  v201B261 = 2;
  SwitchTaskToFollowupFunc(v2001000);
  DestroyTask(v1);
  return v3;
}
