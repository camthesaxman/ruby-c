int __fastcall sub_80CADA8(int a1)
{
  int v1; // r4@1
  char v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 )
  {
    move_anim_8072740(v1);
  }
  else
  {
    *(_WORD *)(v1 + 36) += sine(*(_WORD *)(v1 + 56), 32);
    *(_WORD *)(v1 + 38) += cosine(*(_WORD *)(v1 + 56), -5);
    if ( ((*(_WORD *)(v1 + 56) - 64) & 0xFFFFu) > 0x7F )
      v2 = sub_8079E90(v202F7C8) + 1;
    else
      v2 = sub_8079E90(v202F7C8) - 1;
    *(_BYTE *)(v1 + 67) = v2;
    *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 56) + 5) & 0xFF;
  }
  return v4;
}
