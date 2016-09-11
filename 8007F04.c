char *__fastcall SetBlockReceivedFlag(unsigned __int8 a1)
{
  char *result; // r0@1

  result = &gBlockReceived[a1];
  *result = 1;
  return result;
}
