int __fastcall sub_80A7E7C(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r2@1
  char *v3; // r0@3
  int *v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  if ( v2 == 255 )
  {
    move_anim_task_del(v1);
  }
  else
  {
    v3 = &gSprites[68 * v2];
    *((_WORD *)v3 + 18) = word_3004B02;
    *((_WORD *)v3 + 19) = word_3004B04;
    v4 = &dword_3004B20[10 * v1];
    *((_WORD *)v4 + 4) = v2;
    *((_WORD *)v4 + 5) = word_3004B06;
    *((_WORD *)v4 + 6) = word_3004B08;
    *((_WORD *)v4 + 7) = word_3004B08;
    *((_WORD *)v4 + 8) = word_3004B02;
    *((_WORD *)v4 + 9) = word_3004B04;
    *v4 = (int)sub_80A7EF0;
    call_via_r1(v1, sub_80A7EF0);
  }
  return v6;
}
