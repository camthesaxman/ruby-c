int sub_80489F4()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  sub_804A940(dword_3004824 + 200);
  LoadOam();
  v0 = ProcessSpriteCopyRequests();
  TransferPlttBuffer(v0);
  return v2;
}
