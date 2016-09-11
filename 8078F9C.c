int __fastcall sub_8078F9C(unsigned __int8 a1)
{
  char *v1; // r2@1
  __int16 *v2; // r0@1
  int v3; // r1@1
  int v4; // r0@1
  int v6; // [sp+0h] [bp-4h]@0

  v1 = &gSprites[68 * a1];
  v2 = &gOamMatrices[4 * ((unsigned int)(unsigned __int8)v1[3] << 26 >> 27)];
  v3 = (unsigned __int16)v2[2];
  v4 = v2[2];
  if ( v4 < 0 )
    v3 = 0xFFFF * v4 & 0xFFFF;
  *((_WORD *)v1 + 19) = v3 << 16 >> 19;
  return v6;
}
