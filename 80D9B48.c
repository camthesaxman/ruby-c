int __fastcall sub_80D9B48(int a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  *(_WORD *)(v1 + 48) = word_3004B06;
  *(_WORD *)(v1 + 50) = word_3004B00[0];
  *(_WORD *)(v1 + 52) = word_3004B02;
  *(_WORD *)(v1 + 54) = word_3004B04;
  v2 = v202F7C4;
  if ( !(battle_side_get_owner(v202F7C9) << 24) )
    v2 = (v2 + 1) & 0xFF;
  if ( v2 & 1 )
  {
    *(_WORD *)(v1 + 50) = -*(_WORD *)(v1 + 50);
    ++*(_WORD *)(v1 + 48);
  }
  StartSpriteAnim(v1, *(_BYTE *)(v1 + 48));
  *(_WORD *)(v1 + 36) = *(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 52);
  *(_DWORD *)(v1 + 28) = sub_80D9B24;
  return v4;
}
