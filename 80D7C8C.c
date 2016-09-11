int __fastcall sub_80D7C8C(int a1)
{
  int v1; // r4@1
  int v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = 1;
  sub_8078CE8(a1);
  if ( (unsigned int)(*(_WORD *)(v1 + 32) + *(_WORD *)(v1 + 36) + 16) > 0x110
    || (v2 = *(_WORD *)(v1 + 34) + *(_WORD *)(v1 + 38), v2 > 256)
    || v2 < -16 )
  {
    move_anim_8072740(v1);
  }
  return v4;
}
