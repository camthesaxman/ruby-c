int __fastcall sub_806D7F8(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r6@1
  unsigned int v4; // r1@1
  unsigned int v5; // r2@1
  unsigned int v6; // r5@1
  unsigned int v7; // r4@1
  int v8; // r0@1
  signed int v9; // r2@1
  int v11; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2 << 16;
  v5 = a3 << 16;
  v6 = v4 >> 16;
  v7 = v5 >> 16;
  v8 = (unsigned __int8)sub_8046200(SHIWORD(v4), SHIWORD(v5));
  v9 = 0;
  if ( v6 != v7 )
  {
    v9 = 1;
    if ( v8 != 3 )
    {
      v9 = 2;
      if ( v8 != 2 )
      {
        v9 = 4;
        if ( v8 == 1 )
          v9 = 3;
      }
    }
  }
  sub_809D824(&gSprites[68 * v3], v9);
  return v11;
}
