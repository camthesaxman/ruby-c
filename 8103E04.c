char *__fastcall sub_8103E04(unsigned __int8 a1)
{
  char *result; // r0@1

  result = &gSprites[68 * *(_BYTE *)(a1 + 0x2000044)];
  *((_WORD *)result + 24) = 1;
  *((_WORD *)result + 25) = 4;
  *((_WORD *)result + 26) = 0;
  *((_WORD *)result + 27) = 0;
  *((_WORD *)result + 28) = 2;
  *((_WORD *)result + 30) = 0;
  return result;
}
