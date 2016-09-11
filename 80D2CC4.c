int __fastcall sub_80D2CC4(int a1)
{
  int v1; // r2@1
  int v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
  {
    v2 = *(_WORD *)(a1 + 46) - 1;
    *(_WORD *)(v1 + 46) = v2;
    if ( v2 << 16 )
      StartSpriteAnim(v1, *(_BYTE *)(v1 + 48));
    else
      move_anim_8072740(v1);
  }
  return v4;
}
