int sub_8106AAC()
{
  int v1; // [sp+0h] [bp-4h]@0

  sub_8106A58();
  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  return v1;
}
