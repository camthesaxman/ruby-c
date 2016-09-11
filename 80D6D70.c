int __fastcall sub_80D6D70(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r4@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(*v2, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(*v2, 3u);
  *(_WORD *)(v1 + 36) = word_3004B02;
  *(_WORD *)(v1 + 38) = word_3004B04;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_8078600;
  return v4;
}
