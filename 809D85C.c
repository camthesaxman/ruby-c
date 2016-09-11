int sub_809D85C()
{
  int v1; // [sp+0h] [bp-4h]@0

  v4000014 = word_30042C0;
  v4000016 = word_30041B4;
  v4000018 = word_3004288;
  v400001A = word_3004280;
  v400001C = word_30041B0;
  v400001E = word_30041B8;
  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  return v1;
}
