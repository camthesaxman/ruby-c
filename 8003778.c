int __fastcall sub_8003778(int a1)
{
  int result; // r0@1

  sWaitType = 2;
  sLineLength = 26;
  result = (unsigned __int8)UpdateWindowText(a1);
  sWaitType = 0;
  return result;
}
