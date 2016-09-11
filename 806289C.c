int __fastcall sub_806289C(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = a1;
  v3 = a2;
  sub_8060ED8(a1, a2, 1);
  *(_BYTE *)(v3 + 44) &= 0x7Fu;
  StartSpriteAffineAnimIfDifferent(v3, 0);
  return (unsigned __int8)sub_80628D0(v2, v3);
}
