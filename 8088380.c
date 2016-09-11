int __fastcall sub_8088380(int a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+Ch] [bp-4h]@1

  v1 = a1;
  LoadWordFromTwoHalfwords(a1 + 34, &v4);
  SetVBlankCallback(v4);
  SetUpWindowConfig((int)&gWindowConfig_81E6CE4);
  InitMenuWindow();
  sub_8085C44((int)&gSprites[68 * *(_WORD *)(v1 + 38)]);
  FieldEffectActiveListRemove(6u);
  v2 = FindTaskIdByFunc((int)sub_8088120);
  DestroyTask(v2);
  return v5;
}
