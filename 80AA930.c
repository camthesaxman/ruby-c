int __fastcall sub_80AA930(int a1, char a2)
{
  int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v2 = a1;
  *(_BYTE *)((*(_WORD *)(a1 + 50) << 6) + 0x2038596) = sub_80AA908(
                                                         *(_WORD *)(a1 + 50) & 0xFF,
                                                         *(_BYTE *)((*(_WORD *)(a1 + 50) << 6) + 0x2038596),
                                                         a2);
  sub_80AA340(*(_WORD *)(v2 + 50) & 0xFF);
  return v4;
}