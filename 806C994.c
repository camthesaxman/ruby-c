int __fastcall sub_806C994(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = (unsigned __int8)sub_806CA00(a1);
  *(_WORD *)&gSprites[68 * v3 + 46] = v2;
  sub_806C92C(v3);
  return v5;
}
