int sub_80B5AB8()
{
  int v1; // [sp+4h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  v4000016 = v2000004;
  v400001A = v2000006;
  v400000A &= 0xFFFCu;
  v400000A |= v2000008;
  v400000C = v400000C & 0xFFFC | v200000A;
  return v1;
}
