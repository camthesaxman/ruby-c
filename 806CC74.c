int __fastcall sub_806CC74(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_806BF24(
    &gUnknown_083769A8[2 * *(_WORD *)&gSprites[68 * v2001002 + 46]],
    *(_WORD *)&gSprites[68 * v2001002 + 46],
    3,
    1u);
  sub_806BF24(
    &gUnknown_083769A8[2 * *(_WORD *)&gSprites[68 * v2001001 + 46]],
    *(_WORD *)&gSprites[68 * v2001001 + 46],
    3,
    0);
  sub_806CC2C(v1);
  return v3;
}
