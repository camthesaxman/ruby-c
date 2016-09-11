int __fastcall sub_80D09C0(int a1)
{
  int v1; // r6@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r5@4
  __int16 v4; // r0@6
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  if ( (unsigned __int8)battle_side_get_owner(*v2) == 1 )
    word_3004B02 = -word_3004B02;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v3, 2u) + word_3004B02;
  v4 = (unsigned __int8)sub_8077ABC(v3, 3u) + word_3004B04;
  *(_WORD *)(v1 + 34) = v4;
  if ( v4 <= 7 )
    *(_WORD *)(v1 + 34) = 8;
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  *(_DWORD *)(v1 + 28) = sub_80785E4;
  return v6;
}
