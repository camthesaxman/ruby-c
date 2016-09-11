signed int dp15_jump_random_unknown()
{
  signed int v0; // r4@1
  int v1; // r4@9
  signed int result; // r0@10

  v0 = 0;
  if ( v2000010 <= 299 )
  {
    if ( v2000010 <= 249 )
    {
      if ( v2000010 <= 199 )
      {
        if ( v2000010 > 149 )
          v0 = 1;
      }
      else
      {
        v0 = 2;
      }
    }
    else
    {
      v0 = 3;
    }
  }
  else
  {
    v0 = 4;
  }
  v1 = 4 * v0;
  if ( ((unsigned __int16)Random() % 0x64u & 0xFF) >= gUnknown_083ECE1C[v1] )
  {
    if ( (unsigned __int16)Random() % 0x64u << 24 < (gUnknown_083ECE30[2 * v200000B]
                                                   + (unsigned int)gUnknown_083ECE1C[v1 + 2]) << 24 )
      result = 2;
    else
      result = 8;
  }
  else
  {
    result = 4;
  }
  return result;
}
