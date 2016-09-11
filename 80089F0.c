int __fastcall EnqueueSendCmd(__int16 *a1)
{
  __int16 *v1; // r3@1
  unsigned int v2; // r0@2
  unsigned int v3; // r2@4
  __int16 *v4; // r9@4
  char *v5; // r10@4
  __int16 v6; // r1@5
  int v8; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  gLinkSavedIme = v4000208;
  v4000208 = 0;
  if ( (unsigned __int8)byte_30033A9 > 0x31u )
  {
    byte_3003082 = 1;
    v4 = &sSendNonzeroCheck;
    v5 = &gLastSendQueueCount;
  }
  else
  {
    v2 = ((unsigned __int8)byte_30033A9 + (unsigned __int8)byte_30033A8) & 0xFF;
    if ( v2 > 0x31 )
      v2 = (v2 - 50) & 0xFF;
    v3 = 0;
    v4 = &sSendNonzeroCheck;
    v5 = &gLastSendQueueCount;
    do
    {
      v6 = *v1;
      sSendNonzeroCheck |= *v1;
      *(&word_3003088[50 * v3] + v2) = v6;
      *v1 = 0;
      ++v1;
      v3 = (v3 + 1) & 0xFF;
    }
    while ( v3 <= 7 );
  }
  if ( *v4 )
  {
    ++byte_30033A9;
    *v4 = 0;
  }
  v4000208 = gLinkSavedIme;
  *v5 = byte_30033A9;
  return v8;
}
