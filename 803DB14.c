int __fastcall sub_803DB14(int result, int a2)
{
  if ( a2 << 24 )
    LOBYTE(result) = *((_BYTE *)&gBaseStats + 28 * (unsigned __int16)result + 23);
  else
    LOBYTE(result) = *((_BYTE *)&gBaseStats + 28 * (unsigned __int16)result + 22);
  v2024C06 = result;
  return (unsigned __int8)result;
}
