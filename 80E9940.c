int __fastcall sub_80E9940(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r4@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = a2 & 7;
  MenuFillWindowRectWithBlankTile(2u, 2 * (a2 & 7), 0x1Fu, 2 * (a2 & 7) + 1);
  sub_80E9A7C(v2, v3);
  sub_80E9A60(v2, 2, 2 * v4);
  return v6;
}
