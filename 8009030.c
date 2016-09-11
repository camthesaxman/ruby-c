int ResetSendBuffer()
{
  int v0; // r0@1
  unsigned int v1; // r2@2
  unsigned __int8 v2; // r1@2
  int v4; // [sp+Ch] [bp-4h]@0

  byte_30033A9 = 0;
  byte_30033A8 = 0;
  v0 = 0;
  do
  {
    v1 = 0;
    v2 = v0 + 1;
    do
    {
      *(&word_3003088[50 * v0] + v1) = -4097;
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 0x31 );
    v0 = (unsigned __int8)(v0 + 1);
  }
  while ( v2 <= 7u );
  return v4;
}
