int __fastcall sub_80A4B14(char a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r4@1
  int v3; // r0@1
  int v4; // r0@1
  int v6; // [sp+4h] [bp-4h]@0

  v2 = a2;
  byte_3005D10[4 * v2038559 + 1] += a1;
  v3 = MoveMenuCursor(0);
  v4 = sub_80A73C0(v3);
  sub_80A763C(v4);
  sub_80A4ADC(v2);
  return v6;
}
