int __fastcall sub_80CE798(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int v3; // r1@1
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52) + *(_WORD *)(a1 + 50);
  *(_WORD *)(v1 + 50) = v2;
  v3 = *(_WORD *)(v1 + 56) + *(_WORD *)(v1 + 54);
  *(_WORD *)(v1 + 54) = v3;
  *(_WORD *)(v1 + 32) = v2 << 16 >> 23;
  *(_WORD *)(v1 + 34) = v3 << 16 >> 23;
  LOWORD(v2) = *(_WORD *)(v1 + 48) - 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( (signed __int16)v2 == 1 )
  {
    *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 58);
    *(_WORD *)(v1 + 34) = *(_WORD *)(v1 + 60);
  }
  if ( !*(_WORD *)(v1 + 48) )
    move_anim_8072740(v1);
  return v5;
}
