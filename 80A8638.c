int __fastcall sub_80A8638(int a1)
{
  int v1; // r6@1
  signed int v2; // r0@2
  int v3; // r7@4
  char *v4; // r4@4
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = 33748937;
  else
    v2 = 33748936;
  v3 = *(_BYTE *)(*(_BYTE *)v2 + 0x2024BE0);
  *(_WORD *)(v1 + 46) = word_3004B04;
  v4 = &gSprites[68 * v3];
  *(_WORD *)(v1 + 48) = *((_WORD *)v4 + 18) + *((_WORD *)v4 + 16);
  *(_WORD *)(v1 + 50) = *((_WORD *)v4 + 16);
  *(_WORD *)(v1 + 52) = *((_WORD *)v4 + 19) + *((_WORD *)v4 + 17);
  *(_WORD *)(v1 + 54) = *((_WORD *)v4 + 17);
  sub_8078A5C(v1);
  *(_WORD *)(v1 + 52) = 0;
  *(_WORD *)(v1 + 54) = 0;
  *(_WORD *)(v1 + 56) = *((_WORD *)v4 + 18);
  *(_WORD *)(v1 + 58) = *((_WORD *)v4 + 19);
  *(_BYTE *)(v1 + 62) |= 4u;
  if ( word_3004B02 == 1 )
  {
    *(_WORD *)(v1 + 50) = 0;
  }
  else if ( word_3004B02 == 2 )
  {
    *(_WORD *)(v1 + 48) = 0;
  }
  *(_WORD *)(v1 + 60) = ((_WORD)v3 << 8) | word_3004B02;
  *(_DWORD *)(v1 + 28) = sub_80A86F4;
  return v6;
}
