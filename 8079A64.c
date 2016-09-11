int __fastcall sub_8079A64(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  char *v3; // r4@1
  int v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 64 - (2 * sub_8079B10(a1) & 0x1FFFF);
  v3 = &gSprites[68 * v1];
  v4 = (v2 << 8) / gOamMatrices[4 * ((unsigned int)(unsigned __int8)v3[3] << 26 >> 27) + 3];
  if ( v4 > 128 )
    v4 = 128;
  *((_WORD *)v3 + 19) = (v2 - v4) / 2;
  return v6;
}
