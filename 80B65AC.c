int __fastcall sub_80B65AC(unsigned __int8 a1)
{
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = sub_80B654C(a1);
  *(_WORD *)((2 * v1 & 0x1FFFF) + 0x202EEC8) = *(_WORD *)((2 * v1 & 0x1FFFF) + 0x202EAC8);
  return v3;
}
