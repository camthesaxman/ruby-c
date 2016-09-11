_BOOL4 __fastcall sub_80A2370(unsigned __int8 a1, int a2)
{
  return (*(int *)((char *)gBitTable + (4 * a2 & 0x3FF)) & LOWORD(dword_3004B20[10 * a1 + 2])) != 0;
}
