signed int __fastcall sub_8082E6C(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int result; // r0@4

  v1 = a1;
  if ( IsLinkConnectionEstablished() << 24 )
    SetSuppressLinkErrorMessage(1);
  if ( word_300179E & 2 )
  {
    dword_3004B20[10 * v1] = (int)sub_80833EC;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
