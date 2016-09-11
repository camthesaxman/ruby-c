int sub_802AEB0()
{
  char v0; // r0@3
  int v2; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int8)byte_300428C > 7u )
  {
def_802AEC2:
    v0 = 5;
  }
  else
  {
    switch ( byte_300428C )
    {
      case 0:
        v0 = 2;
        break;
      case 1:
        v0 = 1;
        break;
      case 2:
        v0 = 27;
        break;
      case 3:
        v0 = 23;
        break;
      case 4:
        v0 = 22;
        break;
      case 5:
        v0 = 24;
        break;
      case 6:
        v0 = 7;
        break;
      case 7:
        v0 = 8;
        break;
      default:
        goto def_802AEC2;
    }
  }
  v2024D21 = v0;
  ++v2024C10;
  return v2;
}
