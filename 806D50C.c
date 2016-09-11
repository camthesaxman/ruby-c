int __fastcall sub_806D50C(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v2 = sub_806DDA0(a1, a2);
  *(_WORD *)&gSprites[68 * v2 + 32] += 240;
  return v4;
}
