int __fastcall sub_80A2348(unsigned __int8 a1, int a2)
{
  int *v2; // r2@1
  int result; // r0@1

  v2 = &dword_3004B20[10 * a1];
  result = *(int *)((char *)gBitTable + (4 * a2 & 0x3FF)) | *((_WORD *)v2 + 4);
  *((_WORD *)v2 + 4) = result;
  return result;
}
