int __fastcall sub_80BCA84(unsigned __int8 a1)
{
  int v1; // r5@1
  _BYTE *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  SetBgTilemapBuffer(0);
  v3 = SetBgTilemapBuffer(1);
  sub_8072DEC(v3);
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  sub_80BC190(&gStringVar1, v2[8]);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F96D);
  DisplayItemMessageOnField(v1, &gStringVar4, sub_80BCAEC, 0);
  return v5;
}
