int sub_80F19FC()
{
  int v0; // r0@2
  int v2; // [sp+Ch] [bp-4h]@0

  if ( v20388B0 == 1 )
  {
    v0 = sub_811A8CC(v2006E2C, v2006E2F, v20388B1);
    if ( !v0
      || (sub_8072A18(v0, 112, (((unsigned int)v20388B1 << 20) + 3145728) >> 16, 120, 1), ++v20388B1, v20388B1 == 4) )
    {
      MenuFillWindowRectWithBlankTile(0xEu, (((unsigned int)v20388B1 << 25) + 100663296) >> 24, 0x1Cu, 0xFu);
      v20388B0 = 0;
    }
  }
  return v2;
}
