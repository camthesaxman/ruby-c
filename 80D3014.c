int __fastcall sub_80D3014(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( v20239F8 & 1 && b_side_obj__get_some_boolean(v202F7C8 ^ 2) << 24 )
  {
    sub_807A3FC(v202F7C8, 0, (_WORD *)(v1 + 32), (_WORD *)(v1 + 34));
    *(_WORD *)(v1 + 34) += 40;
    StartSpriteAffineAnim(v1, 1);
  }
  else
  {
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u) + 40;
  }
  *(_WORD *)(v1 + 46) = 13;
  *(_WORD *)(v1 + 50) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 54) = *(_WORD *)(v1 + 34) - 72;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
