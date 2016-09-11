int __fastcall sub_80037A0(int a1)
{
  int result; // r0@1

  sWaitType = 3;
  sLineLength = 17;
  result = (unsigned __int8)UpdateWindowText(a1);
  sLineLength = 26;
  return result;
}
