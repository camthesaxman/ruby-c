signed int sub_8071478()
{
  signed int result; // r0@2

  if ( v202F38F & 0x80 )
  {
    result = 0;
  }
  else
  {
    play_some_sound(0);
    SetMainCallback2((int)sub_80A53F8);
    result = 1;
  }
  return result;
}
