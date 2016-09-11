int sub_804E2BC()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = sub_80514A4();
  sub_80514F0(v0);
  LoadOam();
  v1 = ProcessSpriteCopyRequests();
  TransferPlttBuffer(v1);
  return v3;
}
