int __fastcall sub_80D0930(int a1)
{
  int v1; // r4@1
  signed __int16 v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    StartSpriteAnim(v1, 1);
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) - 32;
    v2 = -64;
  }
  else
  {
    StartSpriteAnim(v1, 0);
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) + 32;
    v2 = 64;
  }
  *(_WORD *)(v1 + 48) = v2;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 46) = 52;
  *(_WORD *)(v1 + 50) = 0;
  *(_WORD *)(v1 + 52) = 0;
  *(_WORD *)(v1 + 54) = 0;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_8078394;
  return v4;
}
