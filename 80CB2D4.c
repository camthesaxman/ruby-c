int __fastcall sub_80CB2D4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@2
  __int16 v3; // r0@4
  int v4; // r0@7
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  obj_id_for_side_relative_to_move(1);
  if ( *(_WORD *)(v1 + 50) )
    v2 = *(_WORD *)(v1 + 46) - 11;
  else
    v2 = *(_WORD *)(v1 + 46) + 11;
  *(_WORD *)(v1 + 46) = v2;
  v3 = *(_WORD *)(v1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v3;
  if ( v3 == 6 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 50) ^= 1u;
  }
  if ( *(_BYTE *)(v1 + 63) & 0x20 )
  {
    v4 = *(_WORD *)(v1 + 60) - 1;
    *(_WORD *)(v1 + 60) = v4;
    if ( v4 << 16 <= 0 )
      move_anim_8072740(v1);
    else
      StartSpriteAffineAnim(v1, *(_BYTE *)(v1 + 58));
  }
  return v6;
}
