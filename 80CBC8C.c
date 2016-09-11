int __fastcall sub_80CBC8C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r0@6
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52);
  if ( v2 )
  {
    if ( v2 == 1 && *(_WORD *)(v1 + 52) && *(_BYTE *)(v1 + 63) & 0x20 )
    {
      *(_WORD *)(v1 + 46) = 0;
      *(_WORD *)(v1 + 50) = 0;
      *(_DWORD *)(v1 + 28) = sub_80CBCF8;
    }
  }
  else if ( (signed int)*(_WORD *)(v1 + 50) <= 78 )
  {
    v3 = *(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 54) / 10;
    *(_WORD *)(v1 + 50) = v3;
    *(_WORD *)(v1 + 54) += 3;
    *(_WORD *)(v1 + 34) = v3;
  }
  else
  {
    *(_WORD *)(v1 + 52) = 1;
    StartSpriteAffineAnim(v1, 1);
  }
  return v5;
}
