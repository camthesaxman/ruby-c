int __fastcall sub_80A7FA0(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r6@1
  int v3; // r3@2
  unsigned __int8 v4; // r0@11
  int v5; // r4@15
  _BYTE *v6; // r0@17
  char *v7; // r0@22
  int *v8; // r0@22
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( word_3004B00[0] <= 3 )
  {
    v3 = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
    if ( v3 == 255 )
      goto _080A8026;
    goto _080A8022;
  }
  if ( word_3004B00[0] != 8 )
  {
    if ( word_3004B00[0] == 5 )
    {
      v4 = 2;
    }
    else if ( word_3004B00[0] > 5 )
    {
      if ( word_3004B00[0] != 6 )
        goto _080A7FF4;
      v4 = 1;
    }
    else
    {
      if ( word_3004B00[0] != 4 )
      {
_080A7FF4:
        v4 = 3;
        goto _080A7FF6;
      }
      v4 = 0;
    }
_080A7FF6:
    v5 = (unsigned __int8)battle_get_side_with_given_state(v4);
    if ( !(b_side_obj__get_some_boolean(v5) << 24) )
      v2 = 1;
    v6 = (_BYTE *)(v5 + 33704928);
    goto _080A8020;
  }
  v6 = (_BYTE *)(v202F7C8 + 33704928);
_080A8020:
  v3 = *v6;
_080A8022:
  if ( !v2 )
  {
    v7 = &gSprites[68 * v3];
    *((_WORD *)v7 + 18) = word_3004B02;
    *((_WORD *)v7 + 19) = word_3004B04;
    v8 = &dword_3004B20[10 * v1];
    *((_WORD *)v8 + 4) = v3;
    *((_WORD *)v8 + 5) = word_3004B06;
    *((_WORD *)v8 + 6) = word_3004B08;
    *((_WORD *)v8 + 7) = word_3004B08;
    *((_WORD *)v8 + 8) = word_3004B02;
    *((_WORD *)v8 + 9) = word_3004B04;
    *v8 = (int)sub_80A808C;
    call_via_r1(v1, sub_80A808C);
    return v10;
  }
_080A8026:
  move_anim_task_del(v1);
  return v10;
}
