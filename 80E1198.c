int __fastcall sub_80E1198(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  __int16 v3; // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 1 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 46);
  }
  v3 = *(_WORD *)(v1 + 34) - 4;
  *(_WORD *)(v1 + 34) = v3;
  if ( v3 < -4 )
    move_anim_8072740(v1);
  return v5;
}
