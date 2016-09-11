signed int sub_809B734()
{
  signed int result; // r0@2

  if ( sub_80998D8() << 24 )
  {
    result = 1;
  }
  else
  {
    StartSpriteAnim(v20011C0, 0);
    result = 0;
  }
  return result;
}
