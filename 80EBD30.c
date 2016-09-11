int sub_80EBD30()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  v0 = TransferPlttBuffer();
  v1 = sub_80FB260(v0);
  sub_80EFE7C(v1);
  return v3;
}
