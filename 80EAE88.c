int __fastcall sub_80EAE88(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int result; // r0@4

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( v1 >> 24 )
  {
    if ( v2 == 20 )
    {
      result = (unsigned __int8)sub_80EB8C0();
    }
    else if ( sub_80EAD7C(v1 >> 24) << 24 )
    {
      result = (unsigned __int8)gEasyChatGroupSizes[v2];
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = (unsigned __int16)sub_8090F68(0);
  }
  return result;
}
