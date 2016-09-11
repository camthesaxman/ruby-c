int __fastcall GetFlagPointer(int a1)
{
  int v1; // r3@1
  int result; // r0@2
  signed int v3; // r0@4
  signed int v4; // r1@4
  signed int v5; // r0@5

  v1 = (unsigned __int16)a1;
  if ( (_WORD)a1 )
  {
    if ( (unsigned __int16)a1 > 0x3FFFu )
    {
      v5 = (unsigned __int16)a1 - 0x4000;
      if ( v1 - 0x4000 < 0 )
        v5 = v1 - 16377;
      v3 = v5 >> 3;
      v4 = 33745122;
    }
    else
    {
      v3 = (unsigned int)(a1 << 16) >> 19;
      v4 = 33712468;
    }
    result = v3 + v4;
  }
  else
  {
    result = 0;
  }
  return result;
}
