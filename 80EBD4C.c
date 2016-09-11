int sub_80EBD4C()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  v0 = TransferPlttBuffer();
  sub_80F5BF0(v0);
  sub_8089668();
  return v2;
}
