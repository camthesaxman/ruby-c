char *__fastcall CopyOamMatrix(int a1, int a2)
{
  char *result; // r0@1

  result = (char *)gOamMatrices + (8 * a1 & 0x7FF);
  *(_WORD *)result = *(_WORD *)a2;
  *((_WORD *)result + 1) = *(_WORD *)(a2 + 2);
  *((_WORD *)result + 2) = *(_WORD *)(a2 + 4);
  *((_WORD *)result + 3) = *(_WORD *)(a2 + 6);
  return result;
}
