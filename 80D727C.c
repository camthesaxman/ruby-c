int __fastcall sub_80D727C(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 == 1 && *(_BYTE *)(v1 + 63) & 0x20 )
      move_anim_8074EE0(v1);
  }
  else
  {
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
    StartSpriteAffineAnim(v1, 2);
    ++*(_WORD *)(v1 + 46);
  }
  return v4;
}
