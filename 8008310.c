unsigned int IsLinkMaster()
{
  return ((unsigned int)gLinkStatus >> 5) & 1;
}
