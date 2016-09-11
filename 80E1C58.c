int __fastcall sub_80E1C58(unsigned __int8 a1)
{
  int *v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( word_3004B0E == *((_WORD *)v1 + 7) )
  {
    word_30041B0 = 0;
    word_30041B8 = 0;
    DestroyTask(a1);
  }
  else
  {
    word_30041B0 = *((_WORD *)v1 + 5);
    word_30041B8 = *((_WORD *)v1 + 6);
  }
  return v3;
}
