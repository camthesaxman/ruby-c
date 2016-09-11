signed int __fastcall sub_8082EB8(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( (unsigned __int8)GetSioMultiSI() == 1 )
  {
    dword_3004B20[10 * v1] = (int)sub_8083418;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
