int __fastcall sub_804DB2C(int a1, int a2, int a3)
{
  int v3; // r2@1
  int result; // r0@2

  if ( GetMonData((int)&dword_3004360[25 * v202E8CE], 45, a3) )
    result = 0;
  else
    result = (unsigned __int16)GetMonData((int)&dword_3004360[25 * v202E8CE], 11, v3);
  return result;
}
