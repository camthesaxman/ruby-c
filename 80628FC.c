int __fastcall sub_80628FC(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = a1;
  v3 = a2;
  sub_8060ED8(a1, a2, 1);
  *(_BYTE *)(v3 + 44) &= 0x7Fu;
  ChangeSpriteAffineAnimIfDifferent(v3, 1);
  return (unsigned __int8)sub_8062930(v2, v3);
}
