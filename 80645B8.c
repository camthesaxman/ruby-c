int __fastcall sub_80645B8(int result, int a2)
{
  char *v2; // r1@1

  v2 = (char *)&gUnknown_083756A4 + (4 * a2 & 0x3FF);
  *(_WORD *)(result + 32) += 4 * *(_WORD *)v2;
  *(_WORD *)(result + 34) += 4 * *((_WORD *)v2 + 1);
  return result;
}
