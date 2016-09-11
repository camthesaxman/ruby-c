signed int sub_80E7B40()
{
  signed int v0; // r5@1
  char v1; // r2@2

  v0 = 0;
  v20011C0 = 0;
  if ( !(word_30017A0 & 0x40) )
  {
    if ( word_30017A0 & 0x80 )
    {
      if ( v200A9A4 >= v200AA28 - 1 )
        return 0;
      ++v200A9A4;
      if ( v200A9A4 >= v200AA29 + 4 )
      {
        v20011C0 = 1;
        return 0;
      }
      v0 = 1;
    }
    if ( !v0 )
    {
      if ( word_30017A0 & 0x20 )
      {
        if ( --v200A9A5 & 0x80 )
          v200A9A5 = *(_BYTE *)(v200A9A4 + 0x200A9A6) - 1;
      }
      else
      {
        if ( !(word_30017A0 & 0x10) )
        {
          if ( word_300179E & 8 )
          {
            if ( v200AA29 )
            {
              v20011C0 = -v200AA29;
              if ( -v200AA29 < -4 )
                v20011C0 = -4;
            }
            v200A9A4 += v20011C0;
          }
          else
          {
            if ( !(word_300179E & 4) )
              return 0;
            if ( v200AA29 < v200AA28 - 4 )
            {
              v20011C0 = v200AA28 - (v200AA29 + 4);
              if ( v20011C0 > 4 )
                v20011C0 = 4;
            }
            v200A9A4 += v20011C0;
          }
          v20011BE = 4;
          return 0;
        }
        ++v200A9A5;
        if ( v200A9A5 >= (signed int)*(_BYTE *)(v200A9A4 + 0x200A9A6) )
          v200A9A5 = 0;
      }
      return 1;
    }
_080E7BF2:
    sub_80E7D30();
    return 1;
  }
  v1 = v200A9A4;
  if ( v200A9A4 )
  {
    --v200A9A4;
    if ( (char)(v1 - 1) < v200AA29 )
    {
      v20011C0 = -1;
      return 0;
    }
    goto _080E7BF2;
  }
  return 0;
}
