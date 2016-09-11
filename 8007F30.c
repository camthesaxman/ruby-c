int __fastcall ResetBlockReceivedFlag(unsigned __int8 a1)
{
  char *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &gBlockReceived[a1];
  if ( *v1 )
    *v1 = 0;
  return v3;
}
