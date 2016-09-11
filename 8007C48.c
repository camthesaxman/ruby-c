signed int IsLinkPlayerDataExchangeComplete()
{
  int v0; // r6@1
  unsigned int i; // r4@1
  signed int v2; // r2@7

  v0 = 0;
  for ( i = 0; i < (unsigned __int8)GetLinkPlayerCount(); i = (i + 1) & 0xFF )
  {
    if ( dword_3002984[7 * i] == dword_3002984[0] )
      v0 = (v0 + 1) & 0xFF;
  }
  if ( v0 == (unsigned __int8)GetLinkPlayerCount() )
  {
    v2 = 1;
    sPlayerDataExchangeStatus = 1;
  }
  else
  {
    v2 = 0;
    sPlayerDataExchangeStatus = 3;
  }
  return v2;
}
