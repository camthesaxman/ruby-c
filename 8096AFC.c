int sub_8096AFC()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v4000018 = v20008B4;
  v400001C = v200000A;
  v400001E = v2000008;
  LoadOam();
  v0 = ProcessSpriteCopyRequests();
  sub_809CFF0(v0);
  TransferPlttBuffer();
  return v2;
}
