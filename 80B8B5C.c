int ContestEffect_40()
{
  int v0; // r6@2
  signed int v1; // r1@3
  unsigned int v2; // r6@4
  unsigned int v3; // r5@5
  int v4; // r0@10
  int v5; // r0@12
  int v6; // r6@13
  signed int v7; // r1@14
  int v9; // [sp+0h] [bp-1Ch]@3
  int v10; // [sp+18h] [bp-4h]@16

  if ( v2019205 != 4 )
  {
    LOBYTE(v0) = 0;
    do
    {
      *((_BYTE *)&v9 + (char)v0) = *(_BYTE *)(28 * (char)v0 + 0x2019279);
      v1 = ((char)v0 + 1) << 24;
      v0 = ((char)v0 + 1) & 0xFF;
    }
    while ( v1 >> 24 <= 3 );
    *((_BYTE *)&v9 + v20192E1) = -1;
    v2 = 0;
    do
    {
      v3 = 0;
      while ( (char)v3 == v20192E1
           || (char)v2 != *((_BYTE *)&v9 + (char)v3)
           || (unsigned __int8)v2 != *(_BYTE *)(28 * (char)v3 + 0x2019279) )
      {
        v4 = (v3 << 24) + 0x1000000;
        v3 = (unsigned int)v4 >> 24;
        if ( v4 >> 24 > 3 )
          goto _080B8BF8;
      }
      *((_BYTE *)&v9 + (char)v3) = v2 + 1;
_080B8BF8:
      if ( v3 == 4 )
        break;
      v5 = (v2 << 24) + 0x1000000;
      v2 = (unsigned int)v5 >> 24;
    }
    while ( v5 >> 24 <= 3 );
    *((_BYTE *)&v9 + v20192E1) = 0;
    *(_BYTE *)(28 * v20192E1 + 0x2019270) = *(_BYTE *)(28 * v20192E1 + 0x2019270) & 0x3F | 0x40;
    LOBYTE(v6) = 0;
    do
    {
      *(_BYTE *)(28 * (char)v6 + 0x2019279) = *((_BYTE *)&v9 + (char)v6);
      v7 = ((char)v6 + 1) << 24;
      v6 = ((char)v6 + 1) & 0xFF;
    }
    while ( v7 >> 24 <= 3 );
    *(_BYTE *)(28 * v20192E1 + 0x2019271) = *(_BYTE *)(28 * v20192E1 + 0x2019271) & 0xFC | 1;
    sub_80B13EC(v20192E1, 37);
  }
  return v10;
}
