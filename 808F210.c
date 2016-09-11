int __fastcall sub_808F210(int a1, unsigned __int8 a2)
{
  __int16 v2; // r4@1
  int result; // r0@1
  int *v4; // r1@1

  v2 = a2;
  v202FFBC = a1;
  result = (unsigned __int8)CreateTask((int)sub_808F2B0, 0);
  v4 = &dword_3004B20[10 * result];
  *((_WORD *)v4 + 4) = 0;
  *((_WORD *)v4 + 5) = 1;
  *((_WORD *)v4 + 6) = 0;
  *((_WORD *)v4 + 7) = 0;
  *((_WORD *)v4 + 8) = v2;
  return result;
}
