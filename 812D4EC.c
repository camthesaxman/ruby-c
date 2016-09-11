int __fastcall sub_812D4EC(int a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int v3; // r0@4
  int v4; // r5@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) += 72;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    v2 = *(_WORD *)(v1 + 46) << 16 >> 20;
  else
    v2 = -(*(_WORD *)(v1 + 46) << 16 >> 20);
  *(_WORD *)(v1 + 36) = v2;
  v3 = *(_WORD *)(v1 + 48) + 16;
  *(_WORD *)(v1 + 48) = v3;
  v4 = (v3 << 16 >> 24) + *(_WORD *)(v1 + 38);
  *(_WORD *)(v1 + 38) = v4;
  LOWORD(v3) = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v3;
  if ( !((signed __int16)v3 % 3 << 16) )
    CreateSpriteAndAnimate(
      (int)&gSpriteTemplate_8402500,
      (signed __int16)(*(_WORD *)(v1 + 36) + *(_WORD *)(v1 + 32)),
      (signed __int16)(*(_WORD *)(v1 + 34) + v4),
      *(_BYTE *)(v1 + 67) + 1);
  if ( (unsigned int)(*(_WORD *)(v1 + 32) + *(_WORD *)(v1 + 36) + 32) > 0x130 )
    move_anim_8072740(v1);
  return v6;
}
