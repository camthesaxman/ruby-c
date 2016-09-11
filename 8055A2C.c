int __fastcall sub_8055A2C(int a1, __int16 a2, __int16 a3)
{
  int v3; // r4@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = a1;
  *(_WORD *)(a1 + 16) = a2;
  *(_WORD *)(a1 + 18) = a3;
  *(_WORD *)(a1 + 20) = a2;
  *(_WORD *)(a1 + 22) = a3;
  sub_80603CC(a2, a3, v3 + 12, v3 + 14);
  *(_WORD *)(v3 + 12) += 8;
  FieldObjectUpdateZCoord(v3);
  return v5;
}
