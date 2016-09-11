int sub_814602C()
{
  int v1; // [sp+0h] [bp-4h]@0

  v4000012 = word_30041B4;
  v4000016 = word_30041B4;
  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  return v1;
}
