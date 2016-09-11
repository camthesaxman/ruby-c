int __fastcall sub_80D452C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r0@5
  int v4; // r1@5
  int v5; // r0@5
  signed int v6; // r2@5
  _WORD *v7; // r1@8
  int v9; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 != 1 )
      return v9;
  }
  else
  {
    *(_WORD *)(v1 + 54) += 3 * (*(_WORD *)(v1 + 48) % 6);
    *(_WORD *)(v1 + 56) += 3 * (*(_WORD *)(v1 + 48) % 3);
    ++*(_WORD *)(v1 + 46);
  }
  v3 = *(_WORD *)(v1 + 54) + *(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 50) = v3;
  v4 = *(_WORD *)(v1 + 56) + *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 52) = v4;
  v5 = v3 << 16 >> 20;
  *(_WORD *)(v1 + 32) = v5;
  v6 = v4 << 16 >> 20;
  *(_WORD *)(v1 + 34) = v6;
  if ( (unsigned int)((v5 + 8) << 16) > 0x1000000 || v6 < -8 || v6 > 120 )
  {
    v7 = &byte_3004B28[40 * *(_WORD *)(v1 + 58)] + 2 * *(_WORD *)(v1 + 60);
    --*v7;
    DestroySprite(v1);
  }
  return v9;
}
