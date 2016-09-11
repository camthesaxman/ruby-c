int __fastcall sub_807C0C8(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  sub_8089668(a1);
  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  v4000016 = word_30041B4;
  return v2;
}
