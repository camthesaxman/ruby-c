unsigned int __fastcall sub_8031F88(unsigned __int8 a1)
{
  _BYTE *v1; // r3@1
  unsigned int result; // r0@1

  v1 = (_BYTE *)(4 * a1 + 33650688);
  result = (unsigned __int8)(*(_BYTE *)(4 * a1 + 0x2017800) & 0xFE) | ((unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(a1 + 0x2024BE0) + 62] << 29 >> 31);
  *v1 = result;
  return result;
}
