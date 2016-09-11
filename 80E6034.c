signed int sub_80E6034()
{
  signed int result; // r0@2
  int v1; // [sp+0h] [bp-Ch]@1

  memcpy(&v1, (const char *)&gUnknown_083DB600, 6);
  if ( v202E858 & 2 )
  {
    result = *((_WORD *)&v1 + v202E862);
  }
  else if ( v202E858 & 4 )
  {
    result = 3;
  }
  else if ( v202E858 & 0x88 )
  {
    result = 2;
  }
  else
  {
    result = 1;
  }
  return result;
}
