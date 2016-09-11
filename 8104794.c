int __fastcall sub_8104794(int a1)
{
  __int16 v1; // r2@1
  unsigned int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  gSpriteCoordOffsetX -= 8;
  v1 = *(_WORD *)(a1 + 10) + 8;
  *(_WORD *)(a1 + 10) = v1;
  *(_WORD *)(a1 + 14) += 8;
  v2 = ((*(_WORD *)(a1 + 10) - 8) & 0xFFu) >> 3;
  v4000014 = v1 & 0x1FF;
  if ( *(_WORD *)(a1 + 14) << 16 >> 19 > 25 )
    ++*(_WORD *)(a1 + 8);
  else
    sub_8104A88(v2);
  return v4;
}
