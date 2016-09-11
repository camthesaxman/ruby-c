int __fastcall sub_80D2C38(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r4@4
  __int16 v3; // r0@7
  char v4; // r1@9
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B04 )
  {
    if ( word_3004B00[0] )
      v2 = (unsigned __int8 *)33748937;
    else
      v2 = (unsigned __int8 *)33748936;
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(*v2, 2u);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(*v2, 3u);
    if ( word_3004B02 )
      v3 = *(_WORD *)(v1 + 32) - 32;
    else
      v3 = *(_WORD *)(v1 + 32) + 32;
    *(_WORD *)(v1 + 32) = v3;
    *(_WORD *)(v1 + 46) = word_3004B04;
    v4 = word_3004B02;
    *(_WORD *)(v1 + 48) = word_3004B02;
    StartSpriteAnim(v1, v4);
    *(_DWORD *)(v1 + 28) = sub_80D2CC4;
  }
  else
  {
    move_anim_8072740(a1);
  }
  return v6;
}
