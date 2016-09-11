signed int __fastcall sub_811A840(__int16 a1)
{
  __int16 v1; // r4@1
  signed int result; // r0@2
  unsigned int v3; // r0@3

  v1 = a1;
  if ( (unsigned int)(GetCoins() << 16) <= 0x270E0000 )
  {
    v3 = (unsigned __int16)(v1 + v2025BC8);
    if ( v2025BC8 <= v3 )
    {
      v2025BC8 += v1;
      if ( v3 > 0x270F )
        v2025BC8 = 9999;
    }
    else
    {
      v2025BC8 = 9999;
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
