signed int __fastcall sub_8082E28(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int result; // r0@3

  v1 = a1;
  if ( !(word_300179E & 2) || IsLinkConnectionEstablished() << 24 )
  {
    result = 0;
  }
  else
  {
    dword_3004B20[10 * v1] = (int)sub_80833EC;
    result = 1;
  }
  return result;
}
