signed int __fastcall sub_81251D4(signed int a1, char a2)
{
  signed int v2; // r4@1

  a1 = (unsigned __int8)a1;
  v2 = 0;
  if ( (unsigned __int8)a1 == 1 )
  {
    dword_3005EA8 &= ~(1 << a2);
  }
  else if ( a1 > 1 )
  {
    if ( a1 == 2 && dword_3005EA8 & (1 << a2) )
      v2 = 1;
  }
  else if ( !a1 )
  {
    dword_3005EA8 |= 1 << a2;
  }
  return v2;
}
