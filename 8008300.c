unsigned int GetLinkPlayerCount_2()
{
  return (gLinkStatus & 0x1Cu) >> 2;
}
