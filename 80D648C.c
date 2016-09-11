int __fastcall sub_80D648C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 46) = word_3004B06;
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_WORD *)(v1 + 56) = word_3004B04;
  *(_WORD *)(v1 + 58) = word_3004B0A;
  *(_WORD *)(v1 + 60) = word_3004B08;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 4 * word_3004B0C) & 0x3FF;
  *(_DWORD *)(v1 + 28) = sub_80D6514;
  call_via_r1(v1, sub_80D6514);
  return v3;
}
