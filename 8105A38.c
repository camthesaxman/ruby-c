int __fastcall sub_8105A38(int a1)
{
  int v1; // r3@1
  __int16 v2; // r2@1
  int v3; // r0@1
  __int16 v4; // r0@5
  __int16 v5; // r0@7
  unsigned int v6; // r1@9
  int v8; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  v3 = *(_WORD *)(a1 + 46);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
      v4 = *(_WORD *)(v1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v4;
      if ( v4 > 23 )
      {
        ++*(_WORD *)(v1 + 46);
        *(_WORD *)(v1 + 50) = 0;
      }
    }
    else
    {
      *(_BYTE *)(v1 + 62) |= 4u;
      v5 = *(_WORD *)(v1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v5;
      if ( v5 > 15 )
        *(_WORD *)(v1 + 60) = 1;
    }
  }
  else if ( *(_BYTE *)(v1 + 63) & 0x20 )
  {
    *(_WORD *)(v1 + 46) = v2 + 1;
  }
  v6 = (*(_WORD *)(v1 + 48) & 0xFF) + 16;
  *(_WORD *)(v1 + 48) = v6;
  *(_WORD *)(v1 + 38) -= v6 >> 8;
  return v8;
}
