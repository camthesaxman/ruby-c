int __fastcall sub_80DDF40(int a1)
{
  int v1; // r4@1
  __int16 v2; // r5@1
  __int16 v3; // r6@1
  __int16 v4; // r0@1
  int v6; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 32);
  v3 = *(_WORD *)(a1 + 34);
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  v4 = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 34) = v4;
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = word_3004B00[0];
  *(_WORD *)(v1 + 50) = word_3004B02;
  *(_WORD *)(v1 + 52) = word_3004B04;
  *(_WORD *)(v1 + 54) = 16 * *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 56) = 16 * v4;
  *(_WORD *)(v1 + 58) = 16 * (v2 - (signed int)*(_WORD *)(v1 + 32)) / (2 * word_3004B00[0]);
  *(_WORD *)(v1 + 60) = 16 * (v3 - (signed int)*(_WORD *)(v1 + 34)) / (2 * word_3004B00[0]);
  *(_DWORD *)(v1 + 28) = sub_80DDFE8;
  return v6;
}
