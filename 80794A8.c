int __fastcall sub_80794A8(int a1)
{
  int v1; // r6@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + word_3004B04;
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + word_3004B06;
  *(_WORD *)(v1 + 56) = word_3004B0A;
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_8079518;
  return v3;
}
