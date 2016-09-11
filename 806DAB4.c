int __fastcall sub_806DAB4(int a1)
{
  char *v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &gSprites[68 * (*(_WORD *)(a1 + 60) & 0xFF)];
  if ( v1[62] & 4 )
  {
    *(_BYTE *)(a1 + 62) |= 4u;
  }
  else
  {
    *(_BYTE *)(a1 + 62) &= 0xFBu;
    *(_WORD *)(a1 + 32) = *((_WORD *)v1 + 18) + *((_WORD *)v1 + 16);
    *(_WORD *)(a1 + 34) = *((_WORD *)v1 + 19) + *((_WORD *)v1 + 17);
  }
  return v3;
}
