int __fastcall sub_80E1F8C(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = word_3004B00[0];
  *((_WORD *)v1 + 5) = word_3004B02;
  *((_WORD *)v1 + 6) = word_3004B04;
  *((_WORD *)v1 + 7) = word_3004B06;
  *((_WORD *)v1 + 8) = word_3004B08;
  *((_WORD *)v1 + 9) = word_3004B0A;
  *((_WORD *)v1 + 12) = 0;
  sub_80E1FDC();
  *v1 = (int)sub_80E202C;
  return v3;
}
