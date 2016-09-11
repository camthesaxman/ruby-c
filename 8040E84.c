unsigned int Random()
{
  dword_3004818 = 1103515245 * dword_3004818 + 24691;
  return (unsigned int)dword_3004818 >> 16;
}
