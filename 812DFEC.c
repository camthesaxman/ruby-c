int __fastcall sub_812DFEC(int a1)
{
  int v1; // r3@1
  int v2; // r2@1
  int v3; // r1@1
  char *v4; // r0@3
  char *v5; // r0@6
  __int16 v6; // r0@7
  int v8; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50) + *(_WORD *)(a1 + 52);
  v3 = *(_WORD *)(a1 + 38) - (v2 << 16 >> 24);
  *(_WORD *)(a1 + 38) = v3;
  *(_WORD *)(a1 + 52) = (unsigned __int8)v2;
  if ( !*(_WORD *)(a1 + 54) && (signed __int16)v3 < -8 )
  {
    v4 = &gSprites[68 * *(_WORD *)(a1 + 58) + 62];
    *v4 &= 0xFBu;
    ++*(_WORD *)(v1 + 54);
  }
  if ( *(_WORD *)(v1 + 54) == 1 && (signed int)*(_WORD *)(v1 + 38) < -16 )
  {
    v5 = &gSprites[68 * *(_WORD *)(v1 + 60) + 62];
    *v5 &= 0xFBu;
    ++*(_WORD *)(v1 + 54);
  }
  v6 = *(_WORD *)(v1 + 48) - 1;
  *(_WORD *)(v1 + 48) = v6;
  if ( v6 == -1 )
  {
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_DWORD *)(v1 + 28) = sub_812E09C;
  }
  return v8;
}
