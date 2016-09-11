int sub_80EB0B0()
{
  int v0; // r6@2
  unsigned int v1; // r7@2
  int v2; // r9@2
  unsigned int i; // r8@2
  _WORD *v4; // r5@3
  unsigned int v5; // r3@8
  int v6; // r6@8
  unsigned int v7; // r5@8
  _WORD *v8; // r1@9
  int v9; // r7@9
  int v11; // [sp+0h] [bp-28h]@2
  int v12; // [sp+24h] [bp-4h]@0

  if ( v2001026 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    if ( (unsigned int)*(_WORD *)(2 * v20011B8 + 0x2005142) > 0 )
    {
      v9 = 510 * v20011B8;
      v8 = (_WORD *)(2 * v20011B8 + 33575234);
      do
      {
        *(_WORD *)(2 * v5 + 4 * v6 + 0x200AA2A) = *(_WORD *)(2 * v7 + v9 + 33561464);
        v5 = (v5 + 1) & 0xFFFF;
        if ( v5 > 1 )
        {
          v5 = 0;
          v6 = (v6 + 1) & 0xFFFF;
        }
        v7 = (v7 + 1) & 0xFFFF;
      }
      while ( v7 < *v8 );
    }
  }
  else
  {
    v0 = v20011B8;
    *(_WORD *)(2 * v0 + 0x2005178) = v2001026;
    v1 = 0;
    v2 = 0;
    v11 = (int)*(&gEasyChatGroupOrders + v0);
    for ( i = 0; i < (unsigned __int8)gEasyChatGroupSizes[v20011B8]; i = (i + 1) & 0xFFFF )
    {
      v4 = (_WORD *)(2 * i + v11);
      if ( sub_80EADC0(v0, *v4) << 24 )
      {
        *(_WORD *)(2 * v1 + 4 * v2 + 0x200AA2A) = ((v0 & 0x7F) << 9) | *v4 & 0x1FF;
        ++*(_WORD *)(2 * v0 + 0x2005178);
        v1 = (v1 + 1) & 0xFFFF;
        if ( v1 > 1 )
        {
          v1 = 0;
          v2 = (v2 + 1) & 0xFFFF;
        }
      }
    }
  }
  return v12;
}
