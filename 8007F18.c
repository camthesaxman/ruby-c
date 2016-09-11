int ResetBlockReceivedFlags()
{
  char *v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = &byte_30029E3;
  do
    *v0-- = 0;
  while ( (signed int)v0 >= (signed int)gBlockReceived );
  return v2;
}
