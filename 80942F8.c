int sub_80942F8()
{
  int v1; // [sp+8h] [bp-4h]@0

  StringCopy(&gStringVar1, (_BYTE *)0x2000094);
  ConvertInternationalString((int)&gStringVar1, v200009C);
  StringAppend(&gStringVar1, &gUnknown_0842C8DC);
  sub_8072B4C(&gStringVar1, 28, 2u);
  return v1;
}
