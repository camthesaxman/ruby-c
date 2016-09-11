int __fastcall sub_8069CB8(int a1, int a2)
{
  int v2; // r0@2
  int result; // r0@4

  a2 = (unsigned __int16)a2;
  result = 0;
  if ( (unsigned int)((a1 << 16) - 196608) >> 16 <= 0xA )
  {
    v2 = a2 << 16;
    a2 = (signed __int16)a2;
    if ( (unsigned int)(v2 - 393216) >> 16 <= 0xD )
    {
      if ( gUnknown_083763E4[a2] )
        result = 1;
    }
  }
  return result;
}
