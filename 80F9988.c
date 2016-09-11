int __fastcall sub_80F9988(unsigned __int8 a1, char a2)
{
  unsigned int v2; // r2@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v2 = a1;
  v3 = *(_BYTE *)(a1 + 0x20388C0);
  if ( v3 != 255 && v2 <= 3 )
    gSprites[68 * v3 + 5] = gSprites[68 * v3 + 5] & 0xF3 | 4 * (a2 & 3);
  return v5;
}
