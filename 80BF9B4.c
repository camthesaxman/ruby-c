signed int sub_80BF9B4()
{
  signed int result; // r0@2

  GetMonData((int)&dword_3004360[25 * v202E8CC], 2, (int)&gStringVar1);
  if ( StringCompareWithoutExtCtrlCodes((int)&gStringVar3, (int)&gStringVar1) )
  {
    sub_80BE478();
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
