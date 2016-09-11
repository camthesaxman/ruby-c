int __fastcall sub_814AD7C(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r5@1
  int v3; // r0@1
  char *v4; // r2@2
  char *v5; // r0@2
  int v7; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = v203A3D2;
  if ( v203A3D2 != 64 )
  {
    v4 = &gSprites[68 * v203A3D2];
    v4[62] &= 0xFBu;
    v5 = &gSprites[68 * v3 + 40];
    *v5 = 0;
    v5[1] = 0;
    *((_WORD *)v4 + 16) = v2;
    *((_WORD *)v4 + 17) = a2;
  }
  return v7;
}
