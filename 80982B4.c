int sub_80982B4()
{
  _BYTE *v0; // r1@2
  char v1; // r0@2
  int v3; // [sp+4h] [bp-4h]@0

  if ( v20011F0 )
  {
    sub_80F7A10(v20011F7, v20012B8);
    v0 = (_BYTE *)(v20012AC + 62);
    v1 = *(_BYTE *)(v20012AC + 62) & 0xFB;
  }
  else
  {
    v0 = (_BYTE *)(v20012AC + 62);
    v1 = *(_BYTE *)(v20012AC + 62) | 4;
  }
  *v0 = v1;
  MenuZeroFillWindowRect(0, 0xBu, 9u, 0x11u);
  MenuPrint(33559162, 1, 0x10u);
  MenuPrint(33559055, 1, 0xBu);
  MenuPrint(33559092, 0, 0xDu);
  MenuPrint(33559129, 1, 0xFu);
  return v3;
}
