int __fastcall sub_812C184(int a1)
{
  int v1; // r1@2
  int v3; // [sp+0h] [bp-4h]@0

  if ( (signed int)*(_WORD *)(a1 + 48) <= 0 )
  {
    move_anim_8072740(a1);
  }
  else
  {
    v1 = *(_WORD *)(a1 + 50);
    *(_WORD *)(a1 + 36) = v1 << 16 >> 24;
    *(_WORD *)(a1 + 50) = v1 + *(_WORD *)(a1 + 46);
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(a1 + 62) << 29 >> 31) ^ 1);
    --*(_WORD *)(a1 + 48);
  }
  return v3;
}
