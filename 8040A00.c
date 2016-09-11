signed int __fastcall sub_8040A00(unsigned __int16 a1)
{
  int v1; // r3@1
  __int16 *v2; // r2@1
  __int16 *v3; // r1@2
  int v4; // r0@3
  signed int result; // r0@4

  v1 = a1;
  v2 = &gUnknown_0820831A;
  if ( (unsigned __int16)gUnknown_0820831A == 0xFFFF )
  {
_08040A32:
    result = 0;
  }
  else
  {
    v3 = &gUnknown_0820831A;
    while ( 1 )
    {
      v4 = (unsigned __int16)*v2;
      ++v3;
      ++v2;
      if ( v4 == v1 )
        break;
      if ( (unsigned __int16)*v3 == 0xFFFF )
        goto _08040A32;
    }
    result = 1;
  }
  return result;
}
