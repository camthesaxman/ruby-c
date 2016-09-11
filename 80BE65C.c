int sub_80BE65C()
{
  int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 36 * byte_3005D38 + 33717868;
  *(_BYTE *)v0 = 2;
  *(_BYTE *)(v0 + 1) = 1;
  StringCopy((_BYTE *)(v0 + 16), (_BYTE *)0x2024EA4);
  *(_WORD *)(v0 + 2) = 0;
  sub_80BE160(v0);
  *(_BYTE *)(v0 + 24) = 2;
  return v2;
}
