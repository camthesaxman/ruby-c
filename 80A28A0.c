signed int __fastcall sub_80A28A0(__int16 a1, __int16 a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r1@1
  signed int result; // r0@2

  v2 = MapGridGetMetatileIdAt(a1, a2) << 16;
  v3 = v2 >> 16;
  if ( v2 >> 16 == 1 )
  {
    result = 1;
  }
  else if ( v3 == 633 )
  {
    result = 2;
  }
  else if ( v3 == 634 )
  {
    result = 3;
  }
  else if ( v2 >> 16 == 635 )
  {
    result = 4;
  }
  else
  {
    result = 0;
  }
  return result;
}
