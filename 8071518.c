signed int sub_8071518()
{
  signed int result; // r0@2

  if ( v202F38F & 0x80 )
  {
    result = 0;
  }
  else
  {
    play_some_sound(0);
    SetMainCallback2((int)CB2_InitOptionMenu);
    dword_3001778 = (int)sub_805469C;
    result = 1;
  }
  return result;
}
