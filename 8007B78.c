unsigned int GetLinkPlayerCount()
{
  return (gLinkStatus & 0x1Cu) >> 2;
}
