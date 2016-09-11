int __fastcall sub_80FF058(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80F9520(33786103);
  SetBgTilemapBuffer(0);
  SetBgTilemapBuffer(1u);
  BuyMenuFreeMemory();
  dword_3004B20[10 * v1] = (int)sub_80FF034;
  return v3;
}
