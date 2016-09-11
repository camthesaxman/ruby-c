int __fastcall sub_8043D5C(int result)
{
  char *v1; // r2@1

  v1 = &gSprites[68 * (*(_WORD *)(result + 56) & 0xFF)];
  *(_WORD *)(result + 32) = *((_WORD *)v1 + 16) + 64;
  *(_WORD *)(result + 34) = *((_WORD *)v1 + 17);
  *(_WORD *)(result + 36) = *((_WORD *)v1 + 18);
  *(_WORD *)(result + 38) = *((_WORD *)v1 + 19);
  return result;
}
