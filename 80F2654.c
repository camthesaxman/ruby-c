int __fastcall sub_80F2654(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 6 )
  {
    *(_WORD *)(v1 + 46) = 0;
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((*(_BYTE *)(v1 + 62) >> 2) ^ 1) & 1);
  }
  return v4;
}
