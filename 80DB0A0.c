int __fastcall sub_80DB0A0(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r0@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) += *(_WORD *)(a1 + 48) << 16 >> 24;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == 6 )
  {
    *(_WORD *)(v1 + 46) = 0;
    *(_WORD *)(v1 + 36) = 0;
    StartSpriteAnim(v1, 0);
  }
  v3 = *(_WORD *)(v1 + 60) - 1;
  *(_WORD *)(v1 + 60) = v3;
  if ( v3 == -1 )
    move_anim_8072740(v1);
  return v5;
}
