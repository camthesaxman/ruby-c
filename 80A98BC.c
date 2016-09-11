int __fastcall itemid_sanitize(int result)
{
  if ( (unsigned __int16)result > 0x15Cu )
    result = 0;
  else
    result = (unsigned __int16)result;
  return result;
}
