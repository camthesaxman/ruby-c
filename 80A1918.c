int __fastcall sub_80A1918(unsigned __int8 a1, char a2)
{
  char *v2; // r2@1
  int result; // r0@1

  v2 = &gSprites[68 * *(_BYTE *)(a1 + 0x201A000) + 62];
  result = (unsigned __int8)(*v2 & 0xFB) | 4 * (a2 & 1);
  *v2 = result;
  return result;
}
