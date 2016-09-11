int GetBlockRecievedStatus()
{
  return (8 * (unsigned __int8)byte_30029E3 | 4 * (unsigned __int8)byte_30029E2 | 2 * (unsigned __int8)byte_30029E1 | (unsigned __int8)gBlockReceived) & 0xFF;
}
