int sub_80ABAC4()
{
  int v1; // [sp+0h] [bp-4h]@0

  v4000010 = word_30042A4;
  v4000012 = word_30042A0;
  v4000014 = word_30042C0;
  v4000016 = word_30041B4;
  v4000018 = word_3004288;
  v400001A = word_3004280;
  v400001C = word_30041B0;
  v400001E = word_30041B8;
  v4000040 = word_30042C4;
  v4000044 = word_3004240;
  v4000042 = word_3004200;
  v4000046 = word_3004244;
  TransferPlttBuffer();
  LoadOam();
  ProcessSpriteCopyRequests();
  sub_8089668();
  return v1;
}
