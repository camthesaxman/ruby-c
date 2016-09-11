int __fastcall sub_80C6A14(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 4) == 7 )
  {
    sub_80C69C4(*((_WORD *)v2 + 5), *((_WORD *)v2 + 6));
    DestroyTask(v1);
  }
  else
  {
    ++*((_WORD *)v2 + 4);
  }
  return v4;
}
