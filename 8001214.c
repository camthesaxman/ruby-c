int ProcessSpriteCopyRequests()
{
  int v0; // r4@2
  int v1; // r1@3
  int v3; // [sp+10h] [bp-4h]@0

  if ( gShouldProcessSpriteCopyRequests )
  {
    v0 = 0;
    if ( gSpriteCopyRequestCount )
    {
      do
      {
        CpuSet(
          gSpriteCopyRequests[3 * v0],
          dword_30024E4[3 * v0],
          (unsigned int)LOWORD(gSpriteCopyRequests[3 * v0 + 2]) >> 1);
        v1 = (unsigned __int8)gSpriteCopyRequestCount-- - 1;
        v0 = (v0 + 1) & 0xFF;
      }
      while ( v1 << 24 );
    }
    gShouldProcessSpriteCopyRequests = 0;
  }
  return v3;
}
