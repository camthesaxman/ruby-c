int __fastcall sub_80AAB30(int a1, char a2)
{
  int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v2 = a1;
  *(_WORD *)((*(_WORD *)(a1 + 50) << 6) + 0x2038590) = sub_80AAAC8(
                                                         *(_WORD *)(a1 + 50) & 0xFF,
                                                         *(_WORD *)((*(_WORD *)(a1 + 50) << 6) + 0x2038590),
                                                         a2);
  sub_80AA4F0(*(_BYTE *)(v2 + 50), 1u);
  return v4;
}
