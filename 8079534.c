int __fastcall sub_8079534(int a1)
{
  int v1; // r5@1
  int v2; // r4@2
  unsigned __int8 v3; // r7@2
  unsigned __int8 *v4; // r0@5
  unsigned __int8 v5; // r6@7
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B0C )
  {
    v2 = 0;
    v3 = 1;
  }
  else
  {
    v2 = 1;
    v3 = 3;
  }
  if ( word_3004B0A )
  {
    sub_8078764(a1, v2);
    v4 = (unsigned __int8 *)33748937;
  }
  else
  {
    sub_80787B0(a1, v2);
    v4 = (unsigned __int8 *)33748936;
  }
  v5 = *v4;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  sub_8078764(v1, v2);
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v5, 2u) + word_3004B04;
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v5, v3) + word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v7;
}
