int __fastcall sub_80A8A80(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r2@4
  _BYTE *v3; // r5@7
  int *v4; // r5@12
  int v5; // r0@13
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] == 2 )
  {
    v3 = (_BYTE *)33748936;
_080A8ABA:
    if ( b_side_obj__get_some_boolean(*v3 ^ 2) << 24 )
    {
      LOWORD(v2) = *(_BYTE *)((*v3 ^ 2) + 0x2024BE0);
      goto _080A8AE8;
    }
_080A8AE0:
    move_anim_task_del(v1);
    return v7;
  }
  if ( word_3004B00[0] > 2 )
  {
    if ( word_3004B00[0] != 3 )
      goto _080A8AE0;
    v3 = (_BYTE *)33748937;
    goto _080A8ABA;
  }
  if ( word_3004B00[0] < 0 )
    goto _080A8AE0;
  v2 = obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0])) & 0xFF;
_080A8AE8:
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 4) = v2;
  if ( battle_side_get_owner(v202F7C9) << 24 )
    LOWORD(v5) = word_3004B02;
  else
    v5 = -(unsigned __int16)word_3004B02;
  *((_WORD *)v4 + 5) = v5;
  dword_3004B20[10 * v1] = (int)sub_80A8B3C;
  return v7;
}
