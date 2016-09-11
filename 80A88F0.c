int __fastcall sub_80A88F0(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  *(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 56) + 36] = 0;
  *(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 56) + 38] = 0;
  move_anim_8072740(a1);
  return v2;
}
