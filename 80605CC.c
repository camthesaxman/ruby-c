char *__fastcall FieldObjectClearAnim(int a1)
{
  char *result; // r0@1

  *(_BYTE *)(a1 + 28) = -1;
  *(_BYTE *)a1 &= 0x3Fu;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(a1 + 4) + 48] = 0;
  result = &gSprites[68 * *(_BYTE *)(a1 + 4)];
  *((_WORD *)result + 25) = 0;
  return result;
}
