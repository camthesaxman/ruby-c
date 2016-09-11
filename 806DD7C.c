int __fastcall sub_806DD7C(int result)
{
  char *v1; // r1@1

  v1 = &gSprites[68 * (*(_WORD *)(result + 60) & 0xFF)];
  *(_WORD *)(result + 32) = *((_WORD *)v1 + 18) + *((_WORD *)v1 + 16);
  *(_WORD *)(result + 34) = *((_WORD *)v1 + 17);
  return result;
}
