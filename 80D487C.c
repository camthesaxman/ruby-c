int __fastcall sub_80D487C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r0@2
  _WORD *v4; // r1@3
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 1 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
    v3 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v3;
    if ( v3 == 12 )
    {
      v4 = &byte_3004B28[40 * *(_WORD *)(v1 + 58)] + 2 * *(_WORD *)(v1 + 60);
      --*v4;
      FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
      DestroySprite(v1);
    }
  }
  return v6;
}
