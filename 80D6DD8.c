int __fastcall sub_80D6DD8(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  StartSpriteAffineAnim(a1, 1);
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 58) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *(_WORD *)(v1 + 60) = 16;
  if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 )
    *(_WORD *)(v1 + 60) = -*(_WORD *)(v1 + 60);
  *(_DWORD *)(v1 + 28) = sub_80D6E38;
  return v3;
}
