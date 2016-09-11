_BOOL4 __fastcall sub_80FFB94(unsigned __int8 a1, __int16 a2, __int16 a3, __int16 a4)
{
  __int16 v4; // r4@1
  int *v5; // r2@1

  v4 = a3;
  v5 = &dword_3004B20[10 * a1];
  return a2 != *((_WORD *)v5 + 7) + 7 || v4 != *((_WORD *)v5 + 8) + 7 || !a4;
}
