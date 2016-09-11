signed int __fastcall sub_80B5054(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r7@1
  int v4; // r6@1
  int v5; // r4@1
  signed int result; // r0@2

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( (unsigned __int8)FuncIsActiveTask((int)sub_80B52B4) == 1 )
  {
    result = 0;
  }
  else
  {
    v202E8DC = 255;
    sub_80B5138(v3, v4, LOBYTE((&gMultichoiceLists)[2 * v5 + 1]), (&gMultichoiceLists)[2 * v5]);
    result = 1;
  }
  return result;
}
