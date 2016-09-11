signed int sub_80714D0()
{
  signed int result; // r0@2

  if ( v202F38F & 0x80 )
  {
    result = 0;
  }
  else
  {
    play_some_sound(0);
    sub_8093110(sub_805469C);
    result = 1;
  }
  return result;
}
