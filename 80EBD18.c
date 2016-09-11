int sub_80EBD18()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  v0 = TransferPlttBuffer();
  sub_80F1FF0(v0);
  return v2;
}
