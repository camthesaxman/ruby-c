int __fastcall sub_80890D8(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  char *v3; // r1@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = cosine(*(_WORD *)(a1 + 50), 140);
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 50), 72);
  *(_WORD *)(v1 + 50) = (*(_WORD *)(v1 + 50) + 4) & 0xFF;
  v2 = *(_WORD *)(v1 + 58);
  if ( v2 != 64 )
  {
    v3 = &gSprites[68 * v2];
    v3[62] &= 0xFDu;
    *((_WORD *)v3 + 16) = *(_WORD *)(v1 + 36) + *(_WORD *)(v1 + 32);
    *((_WORD *)v3 + 17) = *(_WORD *)(v1 + 38) + *(_WORD *)(v1 + 34) - 8;
    *((_WORD *)v3 + 18) = 0;
    *((_WORD *)v3 + 19) = 0;
  }
  if ( (signed int)*(_WORD *)(v1 + 50) > 127 )
    *(_WORD *)(v1 + 60) = 1;
  return v5;
}
