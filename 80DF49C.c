char *__fastcall sub_80DF49C(int a1)
{
  char *result; // r0@1

  *(_BYTE *)(a1 + 62) |= 4u;
  *(_WORD *)(a1 + 56) = *(_BYTE *)(v202F7C8 + 0x2024BE0);
  *(_WORD *)(a1 + 46) = 128;
  *(_WORD *)(a1 + 48) = 10;
  *(_WORD *)(a1 + 50) = word_3004B00[0];
  *(_WORD *)(a1 + 52) = word_3004B02;
  *(_DWORD *)(a1 + 28) = sub_80DF4F4;
  result = &gSprites[68 * *(_WORD *)(a1 + 56)];
  *((_WORD *)result + 17) += 8;
  return result;
}
