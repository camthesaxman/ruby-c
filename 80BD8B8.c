signed int sub_80BD8B8()
{
  signed int v0; // r1@1
  signed int result; // r0@2

  v0 = (unsigned __int8)special_0x44();
  if ( v0 == 255 )
  {
    result = 255;
  }
  else if ( v2028230 && *(_BYTE *)(36 * v0 + 0x2027E6C) == 41 )
  {
    result = (unsigned __int8)sub_80BDA30();
  }
  else
  {
    result = v0;
  }
  return result;
}
