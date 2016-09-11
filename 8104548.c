int __fastcall sub_8104548(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8102D28(*(_WORD *)(a1 + 16) << 16 >> 24);
  v2 = *(_WORD *)(v1 + 18) + 1;
  *(_WORD *)(v1 + 18) = v2;
  if ( v2 > 79 )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 18) = 0;
    sub_81057E8(2);
    StartSpriteAnimIfDifferent((int)&gSprites[68 * v200003F], 3);
  }
  return v4;
}
