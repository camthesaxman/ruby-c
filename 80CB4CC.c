int __fastcall sub_80CB4CC(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      *(_BYTE *)(v1 + 62) &= 0xFBu;
      if ( *(_BYTE *)(v1 + 63) & 0x20 )
      {
        ChangeSpriteAffineAnim(v1, 1);
        *(_WORD *)(v1 + 46) = 25;
        *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
        *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
        *(_DWORD *)(v1 + 28) = sub_8078CC0;
        oamt_set_x3A_32(v1, (int)move_anim_8072740);
      }
    }
  }
  else
  {
    if ( !(battle_side_get_owner(v202F7C9) << 24) )
      word_3004B00[0] = -word_3004B00[0];
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 0) + word_3004B00[0];
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) + word_3004B02;
    *(_BYTE *)(v1 + 62) |= 4u;
    ++*(_WORD *)(v1 + 46);
  }
  return v4;
}
