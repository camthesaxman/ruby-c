int sub_810B68C()
{
  int v1; // [sp+0h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  v40000D4 = gBG2TilemapBuffer;
  v40000D8 = 100694016;
  v40000DC = -2147482624;
  return v1;
}
