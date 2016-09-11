int __fastcall sub_80CEF9C(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r4@4
  unsigned __int8 v4; // r0@4
  unsigned int v5; // r1@4
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  sub_80CEF44(*v2, v1);
  v4 = battle_side_get_owner(v3);
  v5 = (-v4 | (unsigned int)v4) >> 31;
  *(_WORD *)(v1 + 46) = word_3004B02;
  *(_WORD *)(v1 + 48) = v5 + 2;
  StartSpriteAnim(v1, v5);
  oamt_set_x3A_32(v1, (int)sub_80CF008);
  *(_DWORD *)(v1 + 28) = sub_8078600;
  return v7;
}
