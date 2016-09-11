int ContestEffect_43()
{
  int v0; // r6@2
  signed int v1; // r1@3
  unsigned int v2; // r6@4
  int v3; // r4@5
  unsigned int v4; // r1@5
  char *v5; // r3@6
  unsigned int v6; // r5@6
  int v7; // r0@11
  int v8; // r6@12
  int v9; // r1@13
  signed int v10; // r2@13
  int v12; // [sp+0h] [bp-1Ch]@3
  char v13; // [sp+4h] [bp-18h]@3
  int v14; // [sp+18h] [bp-4h]@15

  if ( v2019205 != 4 )
  {
    LOBYTE(v0) = 0;
    do
    {
      *((_BYTE *)&v12 + (char)v0) = *(_BYTE *)(28 * (char)v0 + 0x2019279);
      *(&v13 + (char)v0) = v0;
      v1 = ((char)v0 + 1) << 24;
      v0 = ((char)v0 + 1) & 0xFF;
    }
    while ( v1 >> 24 <= 3 );
    v2 = 0;
    while ( 1 )
    {
      v3 = (unsigned __int16)Random() % (4 - (char)v2) & 0xFF;
      v4 = 0;
      while ( 1 )
      {
        v5 = &v13 + (char)v4;
        v6 = v4 << 24;
        if ( (unsigned __int8)*v5 != 255 )
          break;
_080B8E3A:
        v4 = (v6 + 0x1000000) >> 24;
        if ( (signed int)(v6 + 0x1000000) >> 24 > 3 )
          goto _080B8E48;
      }
      if ( v3 )
        break;
      *((_BYTE *)&v12 + (char)v4) = v2;
      *v5 = -1;
_080B8E48:
      v7 = (v2 << 24) + 0x1000000;
      v2 = (unsigned int)v7 >> 24;
      if ( v7 >> 24 > 3 )
      {
        LOBYTE(v8) = 0;
        do
        {
          v9 = 28 * (char)v8 + 33657440;
          *(_BYTE *)(v9 + 25) = *((_BYTE *)&v12 + (char)v8);
          *(_BYTE *)(v9 + 16) = *(_BYTE *)(28 * (char)v8 + 0x2019270) & 0x3F | 0x80;
          v10 = ((char)v8 + 1) << 24;
          v8 = ((char)v8 + 1) & 0xFF;
        }
        while ( v10 >> 24 <= 3 );
        *(_BYTE *)(28 * v20192E1 + 0x2019271) |= 3u;
        sub_80B13EC(v20192E1, 39);
        return v14;
      }
    }
    v3 = (v3 - 1) & 0xFF;
    goto _080B8E3A;
  }
  return v14;
}
