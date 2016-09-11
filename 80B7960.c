int sub_80B7960()
{
  int v1; // [sp+4h] [bp-4h]@0

  gStringVar1 = -4;
  byte_20231CD = 20;
  byte_20231CE = 8;
  byte_20231CF = -4;
  byte_20231D0 = 17;
  byte_20231D1 = 1;
  StringCopy(&unk_20231D2, (_BYTE *)0x2000011);
  BasicInitMenuWindow((int)&gWindowConfig_81E6F4C);
  MenuPrint((int)&gStringVar1, v2000002, 4u);
  return v1;
}
