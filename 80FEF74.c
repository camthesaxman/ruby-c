int sub_80FEF74()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  sub_80F9520(33786103);
  SetBgTilemapBuffer(0);
  v0 = SetBgTilemapBuffer(1u);
  sub_8072DEC(v0);
  MenuZeroFillWindowRect(0, 0, 0xEu, 0x13u);
  return v2;
}
