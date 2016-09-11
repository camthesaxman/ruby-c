int __fastcall sub_8086408(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( (signed int)*(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 46) + 46] > 4 )
    FieldEffectFreeGraphicsResources(a1);
  return v2;
}
