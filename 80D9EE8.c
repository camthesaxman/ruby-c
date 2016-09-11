int __fastcall sub_80D9EE8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078394(a1);
  *(_WORD *)(v1 + 48) -= *(_WORD *)(v1 + 56);
  *(_WORD *)(v1 + 50) -= *(_WORD *)(v1 + 58);
  if ( !*(_WORD *)(v1 + 46) )
    move_anim_8072740(v1);
  return v3;
}
