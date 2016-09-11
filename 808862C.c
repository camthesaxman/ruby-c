int __fastcall sub_808862C(int a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+0h] [bp-14h]@1
  int v5; // [sp+4h] [bp-10h]@1
  int v6; // [sp+10h] [bp-4h]@1

  v1 = a1;
  v4 = 0;
  CpuSet(&v4, (((unsigned int)v4000008 >> 8 << 11) & 0xFFFF) + 100663296, 83886592);
  LoadWordFromTwoHalfwords(v1 + 34, &v5);
  SetVBlankCallback(v5);
  SetUpWindowConfig((int)&gWindowConfig_81E6CE4);
  InitMenuWindow();
  sub_8085C44((int)&gSprites[68 * *(_WORD *)(v1 + 38)]);
  FieldEffectActiveListRemove(6u);
  v2 = FindTaskIdByFunc((int)sub_808847C);
  DestroyTask(v2);
  return v6;
}
