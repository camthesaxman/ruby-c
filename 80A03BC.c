int __fastcall sub_80A03BC(int a1, signed int a2)
{
  int v2; // r1@2

  a2 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 == 4 )
  {
    v2 = 0xFFFF;
    if ( v201807C )
      v2 = v201807C;
  }
  else
  {
    v2 = sub_809F760(a1, a2) & 0xFFFF;
  }
  return v2;
}
