int __fastcall little_step(int result, int a2)
{
  char *v2; // r1@1

  v2 = (char *)&gUnknown_083756A4 + (4 * a2 & 0x3FF);
  *(_WORD *)(result + 32) += *(_WORD *)v2;
  *(_WORD *)(result + 34) += *((_WORD *)v2 + 1);
  return result;
}
