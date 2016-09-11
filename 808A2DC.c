int __fastcall sub_808A2DC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v3; // r2@1
  int v4; // r4@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = sub_806CA38(a1);
  v4 = (unsigned __int8)GetMonData((int)&dword_3004360[25 * v2], 64, v3);
  DestroyTask(v1);
  sub_80E62A0(4, 36 * v4 + 33718912, sub_808A520, 3);
  return v6;
}
