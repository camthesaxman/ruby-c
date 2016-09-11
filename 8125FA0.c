signed int unref_sub_8125FA0()
{
  int v0; // r5@1
  unsigned int v1; // r4@1
  signed int result; // r0@4

  v0 = sub_8125D44(0) & 0xFF;
  v1 = 0;
  do
  {
    call_via_r1((unsigned __int8)gUnknown_08401E24[v1], EraseFlashSector);
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 1 );
  if ( v0 == 255 )
  {
    result = 3;
  }
  else if ( v0 == 3 )
  {
    result = 2;
  }
  else
  {
    sub_8125EC8(0);
    result = 1;
  }
  return result;
}
