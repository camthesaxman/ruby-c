signed int __fastcall npc_something3(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // r0@1
  signed int result; // r0@3

  v2 = a1 - 1;
  if ( v2 > 9 )
  {
def_8055D88:
    result = a2;
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
      case 6u:
        result = 2;
        break;
      case 1u:
      case 7u:
        result = 1;
        break;
      case 2u:
      case 8u:
        result = 3;
        break;
      case 3u:
      case 9u:
        result = 4;
        break;
      default:
        goto def_8055D88;
    }
  }
  return result;
}
