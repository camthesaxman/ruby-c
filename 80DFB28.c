int __fastcall sub_80DFB28(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  __int16 v3; // r0@1
  __int16 v4; // r2@1
  __int16 *v5; // r4@1
  __int16 *v6; // r2@1
  signed int v7; // r1@1
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 3 * word_3004B04 / 5;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u) + word_3004B08;
  *(_WORD *)(v1 + 48) = cosine(word_3004B02, word_3004B04);
  v3 = sine(word_3004B02, v2);
  *(_WORD *)(v1 + 50) = v3;
  v4 = word_3004B00[0];
  *(_WORD *)(v1 + 32) += word_3004B00[0] * *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 34) += v4 * v3;
  *(_WORD *)(v1 + 52) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_80DFBD8;
  v5 = (__int16 *)(v1 + 46);
  v6 = &word_3000730;
  v7 = 6;
  do
  {
    *v6 = *v5;
    ++v5;
    ++v6;
    --v7;
  }
  while ( v7 >= 0 );
  return v9;
}
