unsigned int PlayerCanInterruptWait()
{
  unsigned int v0; // r1@1

  v0 = 1;
  if ( sWaitType == 2 )
  {
    v0 = 0;
  }
  else if ( (signed int)(unsigned __int8)sWaitType > 2 )
  {
    if ( sWaitType == 3 )
    {
      v0 = 0;
      if ( !v203869A )
        v0 = 1;
    }
  }
  else if ( sWaitType == 1 )
  {
    v0 = ~((unsigned int)v20239F8 >> 1) & 1;
  }
  return v0;
}
