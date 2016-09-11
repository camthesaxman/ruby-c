int sub_813B01C()
{
  int v0; // r7@1
  int v1; // r4@1
  int v3; // [sp+14h] [bp-4h]@0

  LOBYTE(v0) = 0;
  v1 = v201FE02;
  if ( v201FE02 < v201FE02 + v201FE01 )
  {
    while ( 1 )
    {
      v0 = 2 * (v1 - v201FE02) & 0xFFFF;
      MenuFillWindowRectWithBlankTile(0x15u, 2 * (v1 - v201FE02) + 2, 0x1Cu, 2 * (v1 - v201FE02) + 3);
      if ( v1 == v201FE03 )
        break;
      StringCopy(&gStringVar1, (_BYTE *)(36 * v1 + 33719146));
      sub_814A568(&gStringVar1);
      MenuPrint((int)&gStringVar1, 21, v0 + 2);
      v1 = (v1 + 1) & 0xFFFF;
      if ( v1 >= v201FE02 + v201FE01 )
        goto _0813B08A;
    }
    MenuPrint((int)&OtherText_Cancel2, 21, v0 + 2);
  }
_0813B08A:
  if ( v1 - v201FE02 != 8 )
    MenuFillWindowRectWithBlankTile(0x15u, v0 + 4, 0x1Cu, 0x12u);
  if ( v201FE02 )
    sub_80F953C(0, 200, 8);
  else
    SetBgTilemapBuffer(0);
  if ( v201FE02 + v201FE01 > v201FE03 )
    SetBgTilemapBuffer(1u);
  else
    sub_80F953C(1u, 200, 152);
  return v3;
}
