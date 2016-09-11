int __fastcall sub_80B33D0(__int16 a1, int a2, int a3)
{
  int v3; // r8@1
  __int16 v4; // r6@1
  int v5; // r4@1
  int v7; // [sp+10h] [bp-4h]@0

  v3 = a3;
  v4 = 2 * a1;
  v5 = ((a2 << 22) + 0x400000) >> 16;
  BuyMenuDrawMapMetatileLayer((int)gBG3TilemapBuffer, 2 * a1, v5, a3);
  BuyMenuDrawMapMetatileLayer((int)gBG2TilemapBuffer, v4, v5, v3 + 8);
  return v7;
}
