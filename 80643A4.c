signed int __fastcall sub_80643A4(int a1)
{
  int v1; // r5@1
  char *v2; // r0@2
  char *v3; // r0@2
  signed int result; // r0@2

  v1 = a1;
  if ( *(_WORD *)a1 & 0x140 )
  {
    result = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 1) |= 1u;
    *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0x7F | ((unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(a1 + 4)
                                                                                            + 44] << 25 >> 31 << 7);
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(a1 + 3) & 0xFE | ((unsigned __int8)gSprites[68 * *(_BYTE *)(a1 + 4) + 44] >> 7) & 1;
    v2 = &gSprites[68 * *(_BYTE *)(a1 + 4) + 44];
    *v2 |= 0x40u;
    v3 = &gSprites[68 * *(_BYTE *)(v1 + 4)];
    v3[44] |= 0x80u;
    result = 0;
  }
  return result;
}
