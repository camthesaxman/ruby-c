int __fastcall sub_807B8A4(int a1)
{
  int v1; // r4@1
  char *v2; // r1@2
  char v3; // r0@2
  int v4; // r0@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = cosine(*(_WORD *)(a1 + 46), 32);
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 46), 8);
  if ( (signed int)*(_WORD *)(v1 + 46) > 127 )
  {
    v2 = (char *)(v1 + 67);
    v3 = 31;
  }
  else
  {
    v2 = (char *)(v1 + 67);
    v3 = 29;
  }
  *v2 = v3;
  *(_WORD *)(v1 + 46) = (*(_WORD *)(v1 + 46) + 8) & 0xFF;
  v4 = *(_WORD *)(v1 + 48) + *(_WORD *)(v1 + 56);
  *(_WORD *)(v1 + 56) = v4;
  *(_WORD *)(v1 + 38) += v4 << 16 >> 24;
  LOWORD(v4) = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v4;
  if ( (signed __int16)v4 == 52 )
  {
    if ( *(_WORD *)(v1 + 60) )
      DestroySpriteAndFreeResources(v1);
    else
      DestroySprite(v1);
  }
  return v6;
}
