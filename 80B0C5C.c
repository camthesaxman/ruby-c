int __fastcall sub_80B0C5C(int a1)
{
  char *v1; // r1@2
  int v3; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 63) & 0x20 )
  {
    v1 = &gSprites[68 * (*(_WORD *)(a1 + 46) & 0xFF)];
    if ( v1[63] & 0x20 )
    {
      *(_BYTE *)(a1 + 62) |= 4u;
      v1[62] |= 4u;
      *(_DWORD *)(a1 + 28) = sub_80B0CB0;
    }
  }
  return v3;
}
