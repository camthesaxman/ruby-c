int __fastcall sub_80D9B24(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) == *(_WORD *)(a1 + 54) )
    move_anim_8072740(a1);
  ++*(_WORD *)(v1 + 46);
  return v3;
}
