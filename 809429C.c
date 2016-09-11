int sub_809429C()
{
  _BYTE *v0; // r0@2
  _BYTE *v1; // r0@2
  int v3; // [sp+Ch] [bp-4h]@0

  if ( v2000001 )
  {
    v0 = StringCopy(&gStringVar1, (_BYTE *)0x2000020);
    *v0 = 0;
    StringCopy(v0 + 1, (_BYTE *)0x2000030);
    MenuPrint((int)&gStringVar1, 2, 0xEu);
    v1 = StringCopy(&gStringVar1, (_BYTE *)0x2000040);
    *v1 = 0;
    StringCopy(v1 + 1, (_BYTE *)0x2000050);
    MenuPrint((int)&gStringVar1, 2, 0x10u);
  }
  return v3;
}
