signed int __fastcall sub_8055390(int a1)
{
  signed int result; // r0@2

  if ( (unsigned __int8)script_env_2_is_enabled(a1) == 1 )
  {
    result = 17;
  }
  else if ( (unsigned __int8)byte_300402D <= 4u )
  {
    if ( (unsigned __int8)byte_30033A9 <= 4u )
      result = (unsigned __int16)sub_80552B0();
    else
      result = 28;
  }
  else
  {
    result = 27;
  }
  return result;
}
