_BOOL4 __fastcall sub_808F250(unsigned __int8 a1)
{
  int *v1; // r1@1

  v1 = &dword_3004B20[10 * a1];
  return *((_WORD *)v1 + 4) || (int (*)())*v1 != sub_808F6CC;
}
