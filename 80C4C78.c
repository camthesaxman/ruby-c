int sub_80C4C78()
{
  signed int v0; // r0@3
  int v2; // [sp+0h] [bp-4h]@0

  if ( v203869C > 4u )
  {
def_80C4C8A:
    v0 = 12;
  }
  else
  {
    switch ( v203869C )
    {
      case 0u:
        v0 = 8;
        break;
      case 1u:
        v0 = 9;
        break;
      case 2u:
        v0 = 10;
        break;
      case 3u:
        v0 = 11;
        break;
      default:
        goto def_80C4C8A;
    }
  }
  v202E8CC = *(_WORD *)(32 * v0 + 0x2028538) != 0;
  return v2;
}
