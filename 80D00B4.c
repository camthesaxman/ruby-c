int __fastcall sub_80D00B4(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v3; // r0@1
  int v4; // r2@1
  __int16 v5; // r0@3
  __int16 v6; // r0@4
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 60);
  v3 = v2 + *(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 46) = v3;
  v4 = v3 << 16 >> 24;
  *(_WORD *)(v1 + 36) = v4;
  if ( v2 & 1 )
    *(_WORD *)(v1 + 36) = -(signed __int16)v4;
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 58));
  v5 = *(_WORD *)(v1 + 48) + 8;
  *(_WORD *)(v1 + 48) = v5;
  if ( v5 > 126 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_WORD *)(v1 + 50) /= 2;
    v6 = *(_WORD *)(v1 + 52) + 1;
    *(_WORD *)(v1 + 52) = v6;
    if ( v6 == 1 )
      move_anim_8072740(v1);
  }
  return v8;
}
