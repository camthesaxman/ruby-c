int sub_80E6A6C()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  LoadOam();
  v0 = ProcessSpriteCopyRequests();
  sub_80EAC5C(v0);
  TransferPlttBuffer();
  sub_8089668();
  return v2;
}
