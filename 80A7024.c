int __fastcall sub_80A7024(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  byte_3000700 = 0;
  sub_80A6FDC();
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 14) = (unsigned __int8)byte_3005D10[4 * v2038559 + 1]
                      + (unsigned __int8)byte_3005D10[4 * v2038559]
                      + 1;
  v3 = sub_80A48E8(v1, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
  sub_80A73FC(v3);
  sub_80A6DF0((int)gBG1TilemapBuffer);
  *v2 = (int)sub_80A6EB8;
  return v5;
}
