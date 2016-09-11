int OpenLinkTimed()
{
  int v1; // [sp+0h] [bp-4h]@0

  sPlayerDataExchangeStatus = 0;
  gLinkTimeOutCounter = 0;
  OpenLink();
  return v1;
}
