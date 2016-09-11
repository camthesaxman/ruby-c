int sub_80B30AC()
{
  int v1; // [sp+4h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  v40000D4 = gBG3TilemapBuffer;
  v40000D8 = 100724736;
  v40000DC = -2147482624;
  return v1;
}
