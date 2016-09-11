signed int sub_80998D8()
{
  int v0; // r1@1
  signed int result; // r0@3

  v0 = *v20010CC;
  if ( *v20010CC && !(*(_BYTE *)(v0 + 62) & 4) )
  {
    if ( *(_BYTE *)(v0 + 63) & 0x20 )
      *(_BYTE *)(v0 + 62) |= 4u;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
