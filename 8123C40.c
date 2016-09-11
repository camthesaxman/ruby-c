int sub_8123C40()
{
  int v1; // [sp+4h] [bp-4h]@0

  v40000D4 = v2039274 + 2300;
  v40000D8 = 100726784;
  v40000DC = -2147482624;
  v400001C = *(_BYTE *)(v2039274 + 20);
  v400001E = *(_BYTE *)(v2039274 + 21);
  v4000014 = *(_BYTE *)(v2039274 + 12);
  v4000016 = *(_BYTE *)(v2039274 + 13);
  v4000010 = *(_BYTE *)(v2039274 + 8);
  v4000012 = *(_BYTE *)(v2039274 + 9);
  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  return v1;
}
