signed int sub_80C85D8()
{
  signed int v0; // r4@1

  v0 = 0;
  do
  {
    if ( !(((signed int)(unsigned __int8)GetBlockRecievedStatus() >> v0) & 1) )
      return 0;
    ++v0;
  }
  while ( v0 <= 3 );
  ResetBlockReceivedFlags();
  return 1;
}
