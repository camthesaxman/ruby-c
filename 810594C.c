int __fastcall sub_810594C(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@3
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = (*(_WORD *)(a1 + 46) - 2) & 0xFF;
  *(_WORD *)(a1 + 36) = cosine(*(_WORD *)(a1 + 46), 20);
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 46), 6);
  *(_BYTE *)(v1 + 67) = 0;
  if ( (signed int)*(_WORD *)(v1 + 46) > 127 )
    *(_BYTE *)(v1 + 67) = 2;
  v2 = *(_WORD *)(v1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 15 )
  {
    *(_BYTE *)(v1 + 63) = *(_BYTE *)(v1 + 63) & 0xFE | *(_BYTE *)(v1 + 63) & 1 ^ 1;
    *(_WORD *)(v1 + 48) = 0;
  }
  return v4;
}
