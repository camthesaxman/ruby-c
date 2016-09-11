int __fastcall sub_8062B8C(int a1, int a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r6@1
  int v6; // r5@1
  unsigned __int8 v7; // r4@1
  char v8; // r0@1
  int v10; // [sp+10h] [bp-4h]@0

  v5 = a1;
  v6 = a2;
  v7 = a3;
  sub_806113C(a1, a2, a3, a4, a5);
  v8 = sub_805FD98(v7);
  StartSpriteAnimIfDifferent(v6, v8);
  DoShadowFieldEffect(v5);
  return v10;
}
