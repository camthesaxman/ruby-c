int __fastcall sub_80E26BC(unsigned __int8 a1)
{
  int *v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = word_3004B00[0];
  *((_WORD *)v1 + 5) = word_3004B02;
  *((_WORD *)v1 + 6) = word_3004B04;
  *((_WORD *)v1 + 7) = word_3004B06;
  *((_WORD *)v1 + 12) = word_3004B06;
  word_30041B0 = word_3004B00[0];
  word_30041B8 = word_3004B02;
  *v1 = (int)sub_80E2710;
  call_via_r1(a1, sub_80E2710);
  return v3;
}
