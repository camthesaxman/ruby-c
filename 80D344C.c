int __fastcall sub_80D344C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int16)word_3004B0E == 0xFFFF )
  {
    StartSpriteAnim(a1, 1);
    *(_BYTE *)(v1 + 44) &= 0x7Fu;
  }
  if ( sub_8078B5C(v1) << 24 )
    move_anim_8072740(v1);
  return v3;
}
