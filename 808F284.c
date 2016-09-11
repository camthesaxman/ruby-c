int __fastcall sub_808F284(int a1, unsigned __int8 a2)
{
  int v2; // r2@1
  int result; // r0@1
  int *v4; // r1@1

  v2 = a1;
  result = a2;
  v202FFBC = v2;
  v4 = &dword_3004B20[10 * a2];
  *((_WORD *)v4 + 4) = 1;
  *((_WORD *)v4 + 5) = 0;
  *((_WORD *)v4 + 6) = 0;
  *((_WORD *)v4 + 7) = 0;
  return result;
}
