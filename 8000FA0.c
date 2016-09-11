int ClearSpriteCopyRequests()
{
  unsigned int v0; // r2@1
  int *v1; // r1@2
  int v3; // [sp+8h] [bp-4h]@0

  gShouldProcessSpriteCopyRequests = 0;
  gSpriteCopyRequestCount = 0;
  v0 = 0;
  do
  {
    v1 = &gSpriteCopyRequests[3 * v0];
    *v1 = 0;
    dword_30024E4[3 * v0] = 0;
    *((_WORD *)v1 + 4) = 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x3F );
  return v3;
}
