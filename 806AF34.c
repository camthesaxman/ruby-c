int sub_806AF34()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  LoadOam();
  v0 = ProcessSpriteCopyRequests();
  v1 = TransferPlttBuffer(v0);
  sub_806B548(v1);
  return v3;
}
