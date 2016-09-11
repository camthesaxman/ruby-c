int __fastcall sub_800374C(int a1)
{
  int result; // r0@1

  sWaitType = 1;
  sLineLength = 26;
  result = (unsigned __int8)UpdateWindowText(a1);
  sLineLength = 26;
  sWaitType = 0;
  return result;
}
