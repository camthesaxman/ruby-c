signed int __fastcall sub_809F3CC(char a1)
{
  int v1; // r2@1
  unsigned int v2; // r1@1
  signed int result; // r0@9

  v1 = 0;
  v2 = 0;
  if ( (unsigned __int8)gUnknown_083C15A8[0] != v2018009 )
  {
    while ( 1 )
    {
      v2 = (v2 + 1) & 0xFF;
      if ( v2 > 5 )
        break;
      if ( (unsigned __int8)gUnknown_083C15A8[v2] == v2018009 )
      {
        v1 = v2;
        break;
      }
    }
  }
  if ( a1 == -1 && !v1 )
    return -1;
  if ( a1 == 1 )
  {
    if ( v1 == 5 )
      return -1;
    LOBYTE(result) = sub_809F344(v1, 1, v1);
  }
  else
  {
    LOBYTE(result) = sub_809F388(v1, a1, v1);
  }
  return (char)result;
}
