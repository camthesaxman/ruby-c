int __fastcall sub_80D3554(int a1)
{
  int v1; // r5@1
  __int16 v2; // r2@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 46) = 30;
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_WORD *)(v1 + 56) = 53760 / *(_WORD *)(v1 + 46);
  v2 = word_3004B06;
  *(_WORD *)(v1 + 60) = word_3004B06;
  if ( word_3004B0E <= 127 )
  {
    *(_WORD *)(v1 + 58) = word_3004B0E << 8;
  }
  else
  {
    *(_WORD *)(v1 + 58) = (word_3004B0E - 127) << 8;
    *(_WORD *)(v1 + 60) = -v2;
  }
  *(_DWORD *)(v1 + 28) = sub_80D35DC;
  call_via_r1(v1, sub_80D35DC);
  return v4;
}
