unsigned int __fastcall sub_8127EFC(unsigned __int8 a1, int a2)
{
  char *v2; // r2@1
  unsigned int result; // r0@1

  v2 = &gSprites[68 * a1];
  result = ((a2 << 24) & 0xF000000u) >> 20;
  *((_WORD *)v2 + 23) = *((_WORD *)v2 + 23) & 0xFF0F | result;
  return result;
}
