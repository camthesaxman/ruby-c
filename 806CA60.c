int __fastcall sub_806CA60(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  dword_3004B20[10 * a1] = (int)TaskDummy;
  v2001000 = a1;
  CreateTask(sub_806CB74, 0);
  v2001001 = object_new_hidden_with_callback((int)SpriteCallbackDummy);
  sub_806C9C4(v1, v2001001);
  v2001002 = sub_806CA00(v1);
  sub_806D538(v201B272, 0);
  sub_806BF24(
    &gUnknown_083769A8[2 * *(_WORD *)&gSprites[68 * v2001001 + 46]],
    *(_WORD *)&gSprites[68 * v2001001 + 46],
    6,
    0);
  v201B261 = 2;
  return v3;
}
