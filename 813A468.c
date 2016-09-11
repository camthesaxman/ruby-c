int __fastcall sub_813A468(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  BuyMenuFreeMemory();
  SetBgTilemapBuffer(0);
  SetBgTilemapBuffer(1u);
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  MenuDisplayMessageBox();
  v2 = &dword_3004B20[10 * v1];
  sub_8139F58(*((_BYTE *)v2 + 20));
  *v2 = (int)sub_8139FD4;
  return v4;
}
