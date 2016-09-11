int __fastcall sub_80D5324(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80D5348();
  v2 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == 31 )
    move_anim_8072740(v1);
  return v4;
}
