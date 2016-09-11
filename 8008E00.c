int DoRecv()
{
  unsigned int j; // r4@2
  unsigned int v1; // r0@8
  unsigned int i; // r4@11
  __int16 v3; // r3@12
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+1Ch] [bp-4h]@18

  v5 = v4000120;
  v6 = v4000124;
  if ( byte_3003086 )
  {
    v1 = ((unsigned __int8)byte_300402D + (unsigned __int8)byte_300402C) & 0xFF;
    if ( v1 > 0x31 )
      v1 = (v1 - 50) & 0xFF;
    if ( (unsigned __int8)byte_300402D > 0x31u )
    {
      byte_3003082 = 2;
    }
    else
    {
      for ( i = 0; i < (unsigned __int8)byte_3003073; i = (i + 1) & 0xFF )
      {
        v3 = *((_WORD *)&v5 + i);
        word_3003084 += v3;
        sRecvNonzeroCheck |= v3;
        *(&word_30033AC[400 * i] + 50 * (unsigned __int8)byte_3003087 + v1) = v3;
      }
    }
    if ( ++byte_3003087 == 8 && sRecvNonzeroCheck )
    {
      ++byte_300402D;
      sRecvNonzeroCheck = 0;
    }
  }
  else
  {
    for ( j = 0; j < (unsigned __int8)byte_3003073; j = (j + 1) & 0xFF )
    {
      if ( (unsigned __int16)word_3003084 != *((_WORD *)&v5 + j) && sChecksumAvailable )
        byte_3003081 = 1;
    }
    word_3003084 = 0;
    sChecksumAvailable = 1;
  }
  return v7;
}
