signed int __fastcall sub_80FE0AC(_WORD *a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r3@1
  unsigned int v3; // r2@1
  unsigned int v4; // r0@1
  signed int result; // r0@4

  v1 = *a1;
  v2 = v1 & 0x1F;
  v1 <<= 16;
  v3 = (v1 >> 21) & 0x1F;
  v4 = (v1 >> 26) & 0x1F;
  if ( v2 <= 0xB && v3 <= 0xA && v4 <= 0xA )
    return 1;
  if ( v2 > 0x13 )
  {
    if ( v3 > 0x13 && v4 > 0x13 )
      return 2;
    if ( v2 > 0x13 )
    {
      if ( v3 > 0x13 )
      {
        if ( v4 <= 0xE )
          return 7;
        return 2;
      }
      if ( v4 > 0x13 )
      {
        if ( v3 > 0xE )
          return 2;
        return 8;
      }
    }
  }
  if ( v3 > 0x13 && v4 > 0x13 )
  {
    if ( v2 > 0xE )
      return 2;
    return 9;
  }
  if ( v2 <= 0x13 )
  {
    if ( v3 <= 0x13 )
    {
      if ( v4 <= 0x13 )
      {
        result = 3;
      }
      else
      {
        if ( v2 <= 0xB )
        {
          if ( v3 > 0xB )
            return 12;
        }
        else if ( v3 > 0xB )
        {
          if ( v2 >= v3 )
            return 8;
          return 9;
        }
        if ( v4 <= 0xB )
          result = 6;
        else
          result = 15;
      }
    }
    else
    {
      if ( v2 > 0xB )
      {
        if ( v4 <= 0xB )
          return 11;
        if ( v2 >= v4 )
          return 7;
        return 9;
      }
      if ( v4 <= 0xB )
        result = 5;
      else
        result = 14;
    }
  }
  else
  {
    if ( v3 > 0xB )
    {
      if ( v4 <= 0xB )
        return 10;
      if ( v3 >= v4 )
        return 7;
      return 8;
    }
    if ( v4 <= 0xB )
      result = 4;
    else
      result = 13;
  }
  return result;
}
