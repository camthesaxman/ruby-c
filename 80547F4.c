int VBlankCB_Field()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  LoadOam();
  v0 = ProcessSpriteCopyRequests();
  v1 = sub_8089668(v0);
  v2 = sub_8057A58(v1);
  v3 = TransferPlttBuffer(v2);
  sub_8072E74(v3);
  return v5;
}
