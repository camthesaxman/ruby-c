int sub_810196C()
{
  int v1; // [sp+0h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  v4000040 = v2000058;
  v4000044 = v200005A;
  v4000048 = v200005C;
  v400004A = v200005E;
  return v1;
}
