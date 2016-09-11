int sub_804B210()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  sub_804B1BC();
  LoadOam();
  v0 = ProcessSpriteCopyRequests();
  TransferPlttBuffer(v0);
  return v2;
}
