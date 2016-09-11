signed int __fastcall sub_8110494(unsigned __int8 a1)
{
  unsigned int v1; // r0@1
  signed int result; // r0@3

  v1 = *(_BYTE *)(a1 + 0x20253FA);
  if ( v1 > 6 )
  {
def_81104B0:
    result = 0;
  }
  else
  {
    switch ( v1 )
    {
      case 2u:
      case 3u:
      case 6u:
        result = 1;
        break;
      default:
        goto def_81104B0;
    }
  }
  return result;
}
