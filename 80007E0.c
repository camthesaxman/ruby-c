int BuildOamBuffer()
{
  int v0; // r0@1
  int v1; // r0@1
  char v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v0 = UpdateOamCoords();
  v1 = BuildSpritePriorities(v0);
  SortSprites(v1);
  v2 = byte_3001BAD & 1;
  byte_3001BAD |= 1u;
  v3 = AddSpritesToOamBuffer();
  CopyMatricesToOamBuffer(v3);
  byte_3001BAD = v2 | byte_3001BAD & 0xFE;
  gShouldProcessSpriteCopyRequests = 1;
  return v5;
}
