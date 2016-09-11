int sub_80A3134()
{
  int v1; // [sp+0h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  v40000D4 = gBG2TilemapBuffer;
  v40000D8 = 100687872;
  v40000DC = -2147482624;
  return v1;
}
