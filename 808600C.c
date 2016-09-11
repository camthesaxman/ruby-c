int __fastcall sub_808600C(int a1)
{
  char *v1; // r1@1
  unsigned __int8 v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &gSprites[68 * *(_WORD *)(a1 + 20)];
  if ( (signed int)*((_WORD *)v1 + 23) > 6 )
  {
    DestroySprite((int)v1);
    FieldEffectActiveListRemove(0x3Eu);
    v2 = FindTaskIdByFunc((int)sub_8085F10);
    DestroyTask(v2);
  }
  return v4;
}
