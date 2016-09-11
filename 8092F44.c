_BOOL4 __fastcall sub_8092F44(unsigned __int8 a1)
{
  int v1; // r1@1
  _BYTE *v2; // r2@1
  _WORD *v3; // r1@1

  v1 = 10 * a1;
  v2 = &gUnknown_083B5A7C[8 * BYTE2(dword_3004B20[v1 + 2])];
  v3 = &byte_3004B28[2 * v2[5]] + v1 * 4;
  return ((*((_WORD *)v2 + 3) - 1) & 0xFFFFu) <= 5 || !*v3;
}
