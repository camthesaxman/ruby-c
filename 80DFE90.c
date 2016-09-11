int __fastcall sub_80DFE90(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r1@1
  int v6; // r1@2
  int v7; // r0@3
  int v8; // r0@5
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  v3 = v2 + *(_WORD *)(a1 + 52);
  *(_WORD *)(a1 + 52) = v3;
  v4 = *(_WORD *)(a1 + 50);
  v5 = v4 + *(_WORD *)(a1 + 54);
  *(_WORD *)(a1 + 54) = v5;
  *(_WORD *)(a1 + 36) = v3 << 16 >> 24;
  *(_WORD *)(a1 + 38) = v5 << 16 >> 24;
  if ( !*(_WORD *)(a1 + 60) )
  {
    *(_WORD *)(a1 + 52) = v3 + v2;
    v6 = v5 + v4;
    *(_WORD *)(a1 + 54) = v6;
    *(_WORD *)(a1 + 36) = (v3 + v2) << 16 >> 24;
    *(_WORD *)(a1 + 38) = v6 << 16 >> 24;
    --*(_WORD *)(a1 + 46);
  }
  *(_WORD *)(a1 + 38) += sine(*(_WORD *)(a1 + 56), *(_WORD *)(a1 + 58));
  v7 = (*(_WORD *)(v1 + 56) + 3) & 0xFF;
  *(_WORD *)(v1 + 56) = v7;
  if ( v7 > 127 )
  {
    *(_WORD *)(v1 + 56) = 0;
    *(_WORD *)(v1 + 58) += 20;
    ++*(_WORD *)(v1 + 60);
  }
  v8 = *(_WORD *)(v1 + 46) - 1;
  *(_WORD *)(v1 + 46) = v8;
  if ( !(v8 << 16) )
    move_anim_8072740(v1);
  return v10;
}
