int __fastcall sub_80D7E88(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( *(_BYTE *)(a1 + 63) & 0x10 )
      move_anim_8072740(a1);
  }
  else
  {
    if ( word_3004B04 )
    {
      sub_807A3FC(v202F7C9, 0, (_WORD *)(a1 + 32), (_WORD *)(a1 + 34));
      if ( battle_side_get_owner(v202F7C8) << 24 )
        word_3004B00[0] = -word_3004B00[0];
      *(_WORD *)(v1 + 32) += word_3004B00[0];
      *(_WORD *)(v1 + 34) += word_3004B02;
    }
    else
    {
      sub_8078764(a1, 0);
    }
    ++*(_WORD *)(v1 + 46);
  }
  return v3;
}
