signed int __fastcall sub_8125B88(unsigned __int8 a1, int a2, unsigned __int16 a3)
{
  int v3; // r6@1
  unsigned int v4; // r4@1
  unsigned int i; // r2@3
  signed int result; // r0@5

  v3 = a2;
  v4 = a3;
  sub_8125BF8(a1, 0x2000000);
  if ( (int *)v2000FF8 == (int *)((char *)&08012024 + 1) )
  {
    if ( v2000FF4 == (unsigned __int16)sub_8125C10(0x2000000, v4) )
    {
      for ( i = 0; i < v4; i = (i + 1) & 0xFFFF )
        *(_BYTE *)(v3 + i) = *(_BYTE *)(i + 0x2000000);
      result = 1;
    }
    else
    {
      result = 2;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
