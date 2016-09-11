int __fastcall sub_80F979C(unsigned __int8 a1, char a2)
{
  int v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  if ( a1 <= 3u )
  {
    v2 = *(_BYTE *)(a1 + 0x20388C0);
    if ( v2 != 255 )
      gSprites[68 * v2 + 62] = gSprites[68 * v2 + 62] & 0xFB | 4 * (a2 & 1);
  }
  return v4;
}
