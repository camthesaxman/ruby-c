int __fastcall sub_80D59B0(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v3; // r0@3
  int v4; // r0@3
  int v5; // r1@3
  signed int v6; // r3@3
  int v8; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 2 )
  {
    *(_WORD *)(v1 + 46) = 0;
    ++*(_WORD *)(v1 + 48);
    *(_WORD *)(v1 + 52) += *(_WORD *)(v1 + 48) * *(_WORD *)(v1 + 48);
  }
  v3 = *(_WORD *)(v1 + 54) + *(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 50) = v3;
  v4 = v3 << 16 >> 19;
  *(_WORD *)(v1 + 32) = v4;
  v5 = *(_WORD *)(v1 + 56) + *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 52) = v5;
  v6 = v5 << 16 >> 19;
  *(_WORD *)(v1 + 34) = v6;
  if ( (unsigned int)((v4 + 8) << 16) > 0x1000000 || v6 < -8 || v6 > 120 )
    *(_BYTE *)(v1 + 62) |= 4u;
  return v8;
}
