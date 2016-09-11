int __fastcall sub_8045180(int result)
{
  char *v1; // r1@1

  v1 = &gSprites[68 * (*(_WORD *)(result + 46) & 0xFF)];
  *(_WORD *)(result + 36) = *((_WORD *)v1 + 18);
  *(_WORD *)(result + 38) = *((_WORD *)v1 + 19);
  return result;
}
