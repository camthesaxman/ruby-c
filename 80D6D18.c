int __fastcall sub_80D6D18(int a1)
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
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  *(_DWORD *)(v1 + 28) = sub_80785E4;
  return v4;
}
