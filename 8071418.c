signed int StartMenu_Pokedex()
{
  signed int result; // r0@2
  int v1; // r0@3

  if ( v202F38F & 0x80 )
  {
    result = 0;
  }
  else
  {
    v1 = sav12_xor_increment(0x29u);
    play_some_sound(v1);
    SetMainCallback2((int)sub_808C27C);
    result = 1;
  }
  return result;
}
