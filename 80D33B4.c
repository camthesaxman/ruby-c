int __fastcall sub_80D33B4(int a1)
{
  int v1; // r5@1
  int v2; // r6@2
  __int16 *v3; // r7@2
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = 0xFFFF * (unsigned __int16)word_3004B04 & 0xFFFF;
    v3 = word_3004B00;
  }
  else
  {
    LOWORD(v2) = word_3004B04;
    v3 = word_3004B00;
  }
  *(_WORD *)(v1 + 46) = v3[4];
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + (_WORD)v2;
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + v3[3];
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_DWORD *)(v1 + 28) = sub_80D344C;
  *(_BYTE *)(v1 + 44) |= 0x80u;
  call_via_r1(v1, *(_DWORD *)(v1 + 28));
  return v5;
}
