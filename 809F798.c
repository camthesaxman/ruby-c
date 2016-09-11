int __fastcall sub_809F798(int a1, signed int a2)
{
  int v2; // r2@1
  int v3; // r1@7

  a2 = (unsigned __int8)a2;
  v2 = a2;
  if ( (unsigned __int8)a2 == 1 )
  {
    v3 = 18;
  }
  else if ( a2 > 1 )
  {
    if ( a2 != 2 )
      goto _0809F7C0;
    v3 = 19;
  }
  else
  {
    if ( a2 )
    {
_0809F7C0:
      v3 = 20;
      return (unsigned __int16)GetMonData(a1, v3, v2);
    }
    v3 = 17;
  }
  return (unsigned __int16)GetMonData(a1, v3, v2);
}
