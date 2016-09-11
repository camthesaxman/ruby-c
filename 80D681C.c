int __fastcall sub_80D681C(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = (unsigned __int8)sub_8077ABC(v202F7C9, 0) + word_3004B00[0];
  *((_WORD *)v1 + 5) = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) + word_3004B02;
  *((_WORD *)v1 + 6) = word_3004B04;
  *v1 = (int)sub_80D6874;
  return v3;
}
