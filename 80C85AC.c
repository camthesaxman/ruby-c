signed int __fastcall sub_80C85AC(char a1)
{
  unsigned int v1; // r4@1
  signed int result; // r0@2

  v1 = (unsigned int)(0x1000000 << a1) >> 24;
  if ( v1 & GetBlockRecievedStatus() )
  {
    ResetBlockReceivedFlag(v1);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
