int __fastcall sub_81043EC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@1
  unsigned int v3; // r3@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  gSpriteCoordOffsetX -= 8;
  v2 = *(_WORD *)(a1 + 10) + 8;
  *(_WORD *)(a1 + 10) = v2;
  v3 = ((*(_WORD *)(a1 + 10) + 240) & 0xFFu) >> 3;
  v4000014 = v2 & 0x1FF;
  if ( v3 != *(_WORD *)(a1 + 12) && (signed int)*(_WORD *)(a1 + 14) <= 18 )
  {
    *(_WORD *)(a1 + 12) = v3;
    *(_WORD *)(a1 + 14) = *(_WORD *)(a1 + 10) << 16 >> 19;
    sub_8104A40(v3, *(_WORD *)(a1 + 14));
  }
  if ( (signed int)*(_WORD *)(v1 + 10) > 199 )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 14) = 0;
  }
  sub_8102D28(*(_WORD *)(v1 + 16) << 16 >> 24);
  return v5;
}
