int __fastcall sub_808648C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 46) = 0;
    *(_BYTE *)(a1 + 62) &= 0xFBu;
    StartSpriteAnim(a1, 1);
  }
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
    FieldEffectFreeGraphicsResources(v1);
  return v3;
}
