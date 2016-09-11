int __fastcall sub_812D5E8(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  __int16 v3; // r0@2
  __int16 v4; // r0@3
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 29 )
  {
    if ( *(_WORD *)(v1 + 48) == 2 )
      *(_BYTE *)(v1 + 62) &= 0xFBu;
    if ( *(_WORD *)(v1 + 48) == 3 )
    {
      *(_BYTE *)(v1 + 62) |= 4u;
      *(_WORD *)(v1 + 48) = -1;
    }
    v4 = *(_WORD *)(v1 + 48) + 1;
  }
  else
  {
    v3 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 != 2 )
      goto _0812D65E;
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
    v4 = 0;
  }
  *(_WORD *)(v1 + 48) = v4;
_0812D65E:
  if ( (signed int)*(_WORD *)(v1 + 46) > 60 )
    DestroySprite(v1);
  return v6;
}
