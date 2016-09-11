int __fastcall sub_80DD928(int a1)
{
  int v1; // r2@1
  int v2; // r1@1
  int v3; // r0@2
  int v4; // r1@2
  int v5; // r0@4
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) &= 0xFBu;
  v2 = *(_WORD *)(a1 + 52);
  if ( *(_WORD *)(a1 + 52) )
  {
    *(_WORD *)(a1 + 38) = v2 + *(_WORD *)(a1 + 50);
    v3 = *(_WORD *)(a1 + 46);
    v4 = v2 + v3;
    *(_WORD *)(v1 + 52) = v4;
    *(_WORD *)(v1 + 46) = v3 + 1;
    if ( v4 << 16 > 0 )
      *(_WORD *)(v1 + 52) = 0;
  }
  else
  {
    v5 = *(_WORD *)(a1 + 48) - 1;
    *(_WORD *)(v1 + 48) = v5;
    if ( !(v5 << 16) )
      move_anim_8072740(v1);
  }
  return v7;
}
