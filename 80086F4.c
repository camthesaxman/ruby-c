unsigned int IsLinkConnectionEstablished()
{
  return ((unsigned int)gLinkStatus >> 6) & 1;
}
