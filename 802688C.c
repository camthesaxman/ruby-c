int sub_802688C()
{
  unsigned int v0; // r6@1
  int v1; // r0@1
  unsigned int i; // r3@4
  signed int v3; // r2@5
  signed int v4; // r2@16
  int v6; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v1 = *(_WORD *)(88 * v2024C07 + 0x2024A8C);
  if ( *(_WORD *)(88 * v2024C07 + 0x2024A8C) )
  {
    do
    {
      v1 = (v0 + 1) << 24;
      v0 = (v0 + 1) & 0xFF;
      if ( v0 > 3 )
        break;
      v1 = *(_WORD *)(2 * v0 + 88 * v2024C07 + 0x2024A8C);
    }
    while ( *(_WORD *)(2 * v0 + 88 * v2024C07 + 0x2024A8C) );
  }
  for ( i = 0; i < v0; i = (i + 1) & 0xFF )
  {
    v3 = gBattleMoves[12 * *(_WORD *)(2 * i + 88 * v2024C07 + 0x2024A8C) + 2];
    if ( v3 == 9 )
    {
      if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA1) != 7 && *(_BYTE *)(88 * v2024C07 + 0x2024AA2) != 7 )
        v3 = 0;
      else
        v3 = 7;
    }
    if ( v3 != *(_BYTE *)(88 * v2024C07 + 0x2024AA1) )
    {
      v1 = *(_BYTE *)(88 * v2024C07 + 0x2024AA2);
      if ( v3 != v1 )
        break;
    }
    v1 = (i + 1) << 24;
  }
  if ( i == v0 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    while ( 1 )
    {
      do
        v1 = Random(v1);
      while ( (v1 & 3u) >= v0 );
      v4 = gBattleMoves[12 * *(_WORD *)(2 * (v1 & 3) + 88 * v2024C07 + 0x2024A8C) + 2];
      if ( v4 == 9 )
      {
        if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA1) != 7 && *(_BYTE *)(88 * v2024C07 + 0x2024AA2) != 7 )
          v4 = 0;
        else
          v4 = 7;
      }
      v1 = 88 * v2024C07 + 33704576;
      if ( v4 != *(_BYTE *)(88 * v2024C07 + 0x2024AA1) )
      {
        v1 = *(_BYTE *)(88 * v2024C07 + 0x2024AA2);
        if ( v4 != v1 )
          break;
      }
    }
    *(_BYTE *)(88 * v2024C07 + 0x2024AA1) = v4;
    *(_BYTE *)(88 * v2024C07 + 0x2024AA2) = v4;
    byte_30041C0[0] = -3;
    byte_30041C1 = 3;
    LOBYTE(word_30041C2) = v4;
    HIBYTE(word_30041C2) = -1;
    v2024C10 += 5;
  }
  return v6;
}
