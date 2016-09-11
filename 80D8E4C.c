int __fastcall unc_080B06FC(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r1@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (((unsigned __int64)*(_BYTE *)(v202F7B4 + 17) >> 4) - (*(_BYTE *)(v202F7B4 + 17) & 0xF) - 1) & 0xFF;
  if ( v2 > 4 )
    LOBYTE(v2) = 4;
  StartSpriteAffineAnim(a1, v2);
  sub_80787B0(v1, 1);
  *(_WORD *)(v1 + 46) = word_3004B08;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + word_3004B04;
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + word_3004B06;
  *(_WORD *)(v1 + 56) = word_3004B0A;
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_80D8EE0;
  return v4;
}
