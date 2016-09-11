int __fastcall RemoveMoneyLabelObject(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int8 v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  DestroySpriteAndFreeResources((int)&gSprites[68 * v2038734]);
  FreeSpritePaletteByTag(0x2722u);
  MenuZeroFillWindowRect(v2, v3, v2 + 13, v3 + 3);
  return v5;
}
