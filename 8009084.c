int ResetRecvBuffer()
{
  int v0; // r2@1
  int v1; // r3@2
  unsigned __int8 v2; // r5@2
  int v3; // r4@2
  unsigned int v4; // r2@3
  unsigned __int8 v5; // r1@3
  int v6; // r3@3
  int v8; // [sp+10h] [bp-4h]@0

  v0 = 0;
  byte_300402D = 0;
  byte_300402C = 0;
  do
  {
    v1 = 0;
    v2 = v0 + 1;
    v3 = 800 * v0;
    do
    {
      v4 = 0;
      v5 = v1 + 1;
      v6 = 100 * v1;
      do
      {
        *(_WORD *)((char *)&word_30033AC[v4] + v6 + v3) = -4097;
        v4 = (v4 + 1) & 0xFF;
      }
      while ( v4 <= 0x31 );
      v1 = v5;
    }
    while ( v5 <= 7u );
    v0 = v2;
  }
  while ( v2 <= 3u );
  return v8;
}
