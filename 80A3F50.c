int __fastcall sub_80A3F50(int a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  LOWORD(dword_3004B20[10 * a1 + 7]) = (unsigned __int8)byte_3005D10[4 * v2038559 + 1]
                                     + (unsigned __int8)byte_3005D10[4 * v2038559]
                                     + 1;
  sub_80A48E8(
    (unsigned __int8)a1,
    (unsigned __int8)byte_3005D10[4 * v2038559],
    (unsigned __int8)byte_3005D10[4 * v2038559]);
  sub_80A7528(1);
  return v2;
}
