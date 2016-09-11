int __fastcall sub_812EE00(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@1
  int v3; // r0@10
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  if ( v2 == 1 )
  {
    v3 = *(_WORD *)(v1 + 46) - 1;
    *(_WORD *)(v1 + 46) = v3;
    if ( v3 << 16 )
      return v5;
    ChangeSpriteAffineAnim(v1, 1);
    goto _0812EE6E;
  }
  if ( v2 > 1 )
  {
    if ( v2 != 2 )
    {
      if ( v2 == 3 )
      {
        v400004A = 16191;
        v4000000 ^= 0x8000u;
        move_anim_8072740(v1);
      }
      return v5;
    }
    if ( !(*(_BYTE *)(v1 + 63) & 0x20) )
      return v5;
    *(_BYTE *)(v1 + 62) |= 4u;
_0812EE6E:
    ++*(_WORD *)(v1 + 48);
    return v5;
  }
  if ( !v2 )
  {
    *(_BYTE *)(v1 + 62) &= 0xFBu;
    if ( *(_BYTE *)(v1 + 63) & 0x20 )
      goto _0812EE6E;
  }
  return v5;
}
