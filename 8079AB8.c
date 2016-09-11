int __fastcall sub_8079AB8(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  char *v4; // r4@1
  int v5; // r0@1
  int v7; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = 64 - (2 * sub_8079B10(a2) & 0x1FFFF);
  v4 = &gSprites[68 * v2];
  v5 = (v3 << 8) / gOamMatrices[4 * ((unsigned int)(unsigned __int8)v4[3] << 26 >> 27) + 3];
  if ( v5 > 128 )
    v5 = 128;
  *((_WORD *)v4 + 19) = (v3 - v5) / 2;
  return v7;
}
