signed int sub_8071570()
{
  signed int result; // r0@2

  if ( v202F38F & 0x80 )
  {
    result = 0;
  }
  else
  {
    play_some_sound(0);
    sub_8093130((unsigned __int8)byte_3004860, sub_805469C);
    result = 1;
  }
  return result;
}
