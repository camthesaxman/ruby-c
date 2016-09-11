int __fastcall sub_80D27E0(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 46) = sine(word_3004B00[0], 10);
  *(_WORD *)(v1 + 48) = cosine(word_3004B00[0], 7);
  *(_DWORD *)(v1 + 28) = sub_80D2834;
  return v3;
}
