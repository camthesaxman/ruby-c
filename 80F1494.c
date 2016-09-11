int sub_80F1494()
{
  char **v0; // r4@2
  int v1; // r0@3
  int v3; // [sp+10h] [bp-4h]@0

  if ( v200BC91 > 2u )
  {
    v20388B4 = v200BC8E - v200BC8F;
    v20388B4 = *(_BYTE *)(v20388B4 + v200BC90 + 0x200BC4C);
    v1 = *(_BYTE *)(v20388B4 + 0x202882B);
    v20388B4 = *(_BYTE *)(v20388B4 + 0x202882B);
    if ( !v1 )
    {
      sub_8072C74(33790816, (int)&gEmptyString_81E72B0, 0x80u, 0);
      sub_8072C74(33791480, (int)&gEmptyString_81E72B0, 0x80u, 0);
      goto _080F158A;
    }
    v20388B4 = v1 - 1;
    v0 = gGiftRibbonDescriptions;
  }
  else
  {
    v20388B4 = 9 * v200BC91 + v200BC90;
    v20388B4 = *(_BYTE *)(v20388B4 + 0x200BC4C);
    v0 = &gRibbonDescriptions;
  }
  sub_8072C74(33790816, (int)v0[2 * v20388B4], 0x80u, 0);
  sub_8072C74(33791480, (int)v0[2 * v20388B4 + 1], 0x80u, 0);
_080F158A:
  MenuPrint(33790816, 12, 0xDu);
  MenuPrint(33791480, 12, 0xFu);
  return v3;
}
