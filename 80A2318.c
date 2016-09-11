int __fastcall sub_80A2318(unsigned __int8 a1, int a2)
{
  int v2; // r2@1
  int *v3; // r1@1
  int result; // r0@1

  v2 = ~*(int *)((char *)gBitTable + (4 * a2 & 0x3FF)) & 0xFFFF;
  v3 = &dword_3004B20[10 * a1];
  result = *((_WORD *)v3 + 4);
  *((_WORD *)v3 + 4) = v2 & result;
  return result;
}
