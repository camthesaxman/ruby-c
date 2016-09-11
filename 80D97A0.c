int __fastcall sub_80D97A0(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += *(_WORD *)(a1 + 58);
  *(_WORD *)(a1 + 34) += *(_WORD *)(a1 + 60);
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 40 )
    move_anim_8072740(v1);
  return v4;
}
