int __fastcall sub_80037C8(int a1, char a2)
{
  int result; // r0@1

  sWaitType = 0;
  sLineLength = a2;
  result = (unsigned __int8)UpdateWindowText(a1);
  sLineLength = 26;
  return result;
}
