signed int warp1_target_get_music()
{
  signed int v0; // r1@1
  signed int result; // r0@2

  v0 = (unsigned __int16)sub_8053D9C(33724408);
  if ( v0 == 0x7FFF )
  {
    if ( v2025738 == 512 )
      result = 360;
    else
      result = 402;
  }
  else
  {
    result = v0;
  }
  return result;
}
