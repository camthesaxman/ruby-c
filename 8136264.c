int sub_8136264()
{
  int v1; // [sp+0h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  sub_80F5CDC(6u);
  sub_8089668();
  return v1;
}
