int __fastcall sub_80E3AD0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r1@1
  int v3; // r3@1
  int v4; // r2@1
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5) + *((_WORD *)v2 + 14);
  *((_WORD *)v2 + 14) = v3;
  v4 = *((_WORD *)v2 + 6) + *((_WORD *)v2 + 15);
  *((_WORD *)v2 + 15) = v4;
  word_30041B0 += v3 << 16 >> 24;
  word_30041B8 += v4 << 16 >> 24;
  *((_WORD *)v2 + 14) = (unsigned __int8)v3;
  *((_WORD *)v2 + 15) = (unsigned __int8)v4;
  if ( word_3004B0E == *((_WORD *)v2 + 7) )
  {
    word_30041B0 = 0;
    word_30041B8 = 0;
    sub_80789D4(1);
    DestroyTask(v1);
  }
  return v6;
}
