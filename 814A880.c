int __fastcall sub_814A880(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r5@1
  __int16 v3; // r7@1
  int v4; // r0@1
  char *v5; // r2@2
  char *v6; // r0@2
  int v7; // r0@3
  char *v8; // r2@4
  char *v9; // r0@4
  int v11; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a1;
  v4 = v203A3D0;
  if ( v203A3D0 != 64 )
  {
    v5 = &gSprites[68 * v203A3D0];
    v5[62] &= 0xFBu;
    v6 = &gSprites[68 * v4 + 40];
    *v6 = 0;
    v6[1] = 0;
    *((_WORD *)v5 + 16) = v2;
    *((_WORD *)v5 + 17) = a2;
  }
  v7 = v203A3D1;
  if ( v203A3D1 != 64 )
  {
    v8 = &gSprites[68 * v203A3D1];
    v8[62] &= 0xFBu;
    v9 = &gSprites[68 * v7 + 40];
    *v9 = 0;
    v9[1] = 0;
    *((_WORD *)v8 + 16) = v3;
    *((_WORD *)v8 + 17) = a2;
  }
  return v11;
}
