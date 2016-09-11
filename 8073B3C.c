signed int UpdatePaletteFade()
{
  signed int result; // r0@2

  if ( v202F398 )
  {
    result = 255;
  }
  else
  {
    if ( v202F391 & 3 )
    {
      if ( (v202F391 & 3) == 1 )
        LOBYTE(result) = UpdateFastPaletteFade();
      else
        LOBYTE(result) = UpdateHardwarePaletteFade();
    }
    else
    {
      LOBYTE(result) = UpdateNormalPaletteFade();
    }
    v202F398 = v202F388;
    result = (unsigned __int8)result;
  }
  return result;
}
