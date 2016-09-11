int sub_806ABC8()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  ProcessSpriteCopyRequests();
  v0 = LoadOam();
  TransferPlttBuffer(v0);
  return v2;
}
