signed int __fastcall sub_80C7FEC(int a1, __int16 a2, int a3)
{
  _BYTE *v3; // r3@2

  a1 = (unsigned __int8)a1;
  a3 = (unsigned __int16)a3;
  if ( (unsigned __int8)a1 == 2 )
  {
    v3 = &gUnknown_083D60BC;
  }
  else if ( a1 == 1 )
  {
    v3 = &gUnknown_083D60CC;
  }
  else if ( a1 == 3 )
  {
    v3 = &gUnknown_083D60DC;
  }
  else
  {
    if ( a1 != 4 )
      return 255;
    v3 = &gUnknown_083D60EC;
  }
  return *(&v3[a3 << 16 >> 14] + a2);
}
