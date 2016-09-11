int __fastcall sub_80D1D48(unsigned __int8 a1)
{
  int *v1; // r3@1
  int v2; // r4@1
  int v3; // r2@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4) + 13;
  *((_WORD *)v1 + 4) = v2;
  v3 = *((_WORD *)v1 + 5) - 13;
  *((_WORD *)v1 + 5) = v3;
  if ( v2 << 16 < v3 << 16 )
  {
    word_30042C4 = v3 | ((_WORD)v2 << 8);
  }
  else
  {
    word_30042C4 = 0;
    *v1 = (int)sub_80D1D9C;
  }
  return v5;
}
