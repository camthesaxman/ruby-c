int sub_804E2D8()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  LoadOam();
  v0 = ProcessSpriteCopyRequests();
  TransferPlttBuffer(v0);
  return v2;
}
