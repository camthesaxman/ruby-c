signed int __fastcall sub_8115F58(unsigned __int16 a1, __int16 a2)
{
  signed int result; // r0@9

  if ( (signed int)v2019002 > 2 )
  {
    if ( v2019002 == 3 )
    {
      if ( (((unsigned __int8)byte_300403A - 4) & 0xFFu) <= 6 )
      {
        if ( a1 <= 5u || a2 & 1 )
          return (unsigned int)gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2] >> 1;
        return 1;
      }
      if ( a2 & 1 && a1 > 6u )
        result = (unsigned int)gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2] >> 2;
      else
        result = (unsigned int)gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2] >> 1;
      return result;
    }
    goto _08116048;
  }
  if ( (signed int)v2019002 < 1 )
  {
_08116048:
    if ( (((unsigned __int8)byte_300403A - 4) & 0xFFu) > 5 )
    {
      if ( a2 & 3 )
      {
        if ( a2 & 0x8000 )
        {
          if ( a1 <= 0xCu )
            result = gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 1];
          else
            result = gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2];
        }
        else
        {
          result = 2 * gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 1] & 0xFF;
        }
      }
      else if ( a1 <= 0xCu )
      {
        result = gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2];
      }
      else
      {
        result = (unsigned int)gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2] >> 1;
      }
    }
    else
    {
      if ( !(a2 & 3) )
        return 1;
      result = (unsigned int)gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2] >> 1;
    }
    return result;
  }
  if ( (((unsigned __int8)byte_300403A - 4) & 0xFFu) <= 5 )
  {
    if ( a1 <= 0xBu || a2 & 1 )
      return (unsigned int)gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2] >> 1;
    return 1;
  }
  if ( a2 & 3 )
    result = gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2];
  else
    result = (unsigned int)gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 2] >> 1;
  return result;
}
