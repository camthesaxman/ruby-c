int __fastcall sub_812C4FC(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v4000052 = ((16 - *(_WORD *)(a1 + 46)) << 8) | *(_WORD *)(a1 + 46);
  v2 = *(_WORD *)(a1 + 48);
  *(_WORD *)(v1 + 48) = v2 + 1;
  if ( v2 > 1 )
  {
    --*(_WORD *)(v1 + 46);
    *(_WORD *)(v1 + 48) = 0;
  }
  if ( !*(_WORD *)(v1 + 46) )
    *(_BYTE *)(v1 + 62) |= 4u;
  if ( (signed int)*(_WORD *)(v1 + 46) < 0 )
  {
    v4000050 = 0;
    v4000052 = 0;
    move_anim_8072740(v1);
  }
  return v4;
}
