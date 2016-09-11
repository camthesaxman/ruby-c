int __fastcall DrawMovingDownArrow(int a1)
{
  int v1; // r6@1
  __int16 v2; // r1@1
  unsigned int v3; // r4@1
  int v4; // r5@1
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 24);
  v3 = (v2 & 0xF00u) >> 8;
  v4 = (v2 & 0xF) + 1;
  if ( v4 == 6 )
  {
    LOWORD(v4) = 0;
    if ( ++v3 > 3 )
      LOWORD(v3) = 0;
    *(_WORD *)(a1 + 24) = (_WORD)v3 << 8;
    DrawDownArrow(a1);
  }
  *(_WORD *)(v1 + 24) = ((_WORD)v3 << 8) | v4;
  return v6;
}
