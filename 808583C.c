int __fastcall FieldEffectStop(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a2;
  FieldEffectFreeGraphicsResources(a1);
  FieldEffectActiveListRemove(v2);
  return v4;
}
