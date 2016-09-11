int __fastcall sub_80CD190(int a1)
{
  int v1; // r5@1
  _BYTE *v2; // r0@2
  int v3; // r6@4
  unsigned __int8 v4; // r0@8
  unsigned __int8 v5; // r1@8
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B04 )
    v2 = (_BYTE *)33748937;
  else
    v2 = (_BYTE *)33748936;
  v3 = *v2;
  if ( battle_type_is_double() << 24 && b_side_obj__get_some_boolean(v3 ^ 2) << 24 )
  {
    sub_807A3FC(v3, (unsigned __int8)word_3004B0C, (_WORD *)(v1 + 32), (_WORD *)(v1 + 34));
    sub_807867C(v1, word_3004B00[0]);
    *(_WORD *)(v1 + 34) += word_3004B02;
  }
  else
  {
    if ( word_3004B0C )
    {
      *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v3, 2u);
      v4 = v3;
      v5 = 3;
    }
    else
    {
      *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v3, 0);
      v4 = v3;
      v5 = 1;
    }
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v4, v5) + word_3004B02;
    sub_807867C(v1, word_3004B00[0]);
  }
  *(_WORD *)(v1 + 46) = word_3004B0A;
  *(_WORD *)(v1 + 48) = word_3004B06;
  *(_WORD *)(v1 + 50) = word_3004B08;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_8078394;
  return v7;
}
