int __fastcall sub_80CAE20(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 46) = word_3004B06;
  v2 = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 48) = v2;
  *(_WORD *)(v1 + 50) = v2;
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u) + word_3004B04;
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_WORD *)(v1 + 56) = 64;
  *(_DWORD *)(v1 + 28) = sub_80CAE74;
  call_via_r1(v1, sub_80CAE74);
  return v4;
}
