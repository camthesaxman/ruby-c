int __fastcall sub_8088BC4(int a1)
{
  int v1; // r4@1
  char *v2; // r1@2
  _BYTE *v3; // r3@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = cosine(*(_WORD *)(a1 + 50), 140);
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 50), 72);
  *(_WORD *)(v1 + 50) = (*(_WORD *)(v1 + 50) + 4) & 0xFF;
  if ( *(_WORD *)(v1 + 46) )
  {
    v2 = &gSprites[68 * *(_WORD *)(v1 + 48)];
    v3 = v2 + 62;
    *v3 &= 0xFDu;
    *((_WORD *)v2 + 16) = *(_WORD *)(v1 + 36) + *(_WORD *)(v1 + 32);
    *((_WORD *)v2 + 17) = *(_WORD *)(v1 + 38) + *(_WORD *)(v1 + 34) - 8;
    *((_WORD *)v2 + 18) = 0;
    *((_WORD *)v2 + 19) = 0;
  }
  if ( (signed int)*(_WORD *)(v1 + 50) > 127 )
    FieldEffectStop(v1, 0x1Eu);
  return v5;
}
