int __fastcall GetMonNickname(int a1, int a2)
{
  int v2; // r4@1

  v2 = a2;
  GetMonData(a1, 2, a2);
  return StringGetEnd10(v2);
}
