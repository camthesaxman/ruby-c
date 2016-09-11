signed int __fastcall pokemon_ailments_get_primary(char a1)
{
  signed int result; // r0@2

  if ( a1 & 0x88 )
  {
    result = 1;
  }
  else if ( a1 & 0x40 )
  {
    result = 2;
  }
  else if ( a1 & 7 )
  {
    result = 3;
  }
  else if ( a1 & 0x20 )
  {
    result = 4;
  }
  else if ( a1 & 0x10 )
  {
    result = 5;
  }
  else
  {
    result = 0;
  }
  return result;
}
