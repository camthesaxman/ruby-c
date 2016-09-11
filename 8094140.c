int sub_8094140()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  BasicInitMenuWindow((int)&gWindowConfig_81E6DC4);
  StringCopy(&gStringVar1, (_BYTE *)0x2000094);
  ConvertInternationalString((int)&gStringVar1, v200009C);
  v0 = MenuPrint((int)&gStringVar1, 7, 5u);
  v1 = sub_80941D8(v0);
  v2 = sub_8094200(v1);
  v3 = sub_8094218(v2);
  sub_809429C(v3);
  return v5;
}
