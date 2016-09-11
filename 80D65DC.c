int __fastcall sub_80D65DC(int a1)
{
  int v1; // r6@1
  __int16 v2; // r0@4
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(byte_3001BAD & 2) || !(battle_side_get_owner(v202F7C9) << 24) )
    word_3004B02 = -word_3004B02;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + word_3004B02;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + word_3004B04;
  *(_WORD *)(v1 + 52) = word_3004B00[0];
  v2 = word_3004B06;
  *(_WORD *)(v1 + 54) = word_3004B06;
  *(_WORD *)(v1 + 56) = v2;
  *(_DWORD *)(v1 + 28) = sub_80D658C;
  return v4;
}
