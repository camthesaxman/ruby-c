signed int __fastcall sub_812587C(unsigned __int16 a1, int a2)
{
  int v2; // r6@1
  signed int v3; // r5@2

  v2 = a2;
  dword_3005EB0 = 0x2000000;
  if ( a1 == 0xFFFF )
  {
    v3 = (unsigned __int8)sub_8125974(a2);
    sub_81258BC(0xFFFF, v2);
  }
  else
  {
    v3 = 255;
  }
  return v3;
}
