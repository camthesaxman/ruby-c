char *sub_80BCCE8()
{
  unsigned __int8 v0; // r0@1
  int v1; // r0@1
  char *result; // r0@2

  v0 = VarGet(16468);
  v1 = (unsigned __int8)sub_80BCCA4(v0);
  if ( v1 )
  {
    switch ( v1 )
    {
      case 1:
        result = (char *)&UnknownString_81A1F67;
        break;
      case 2:
        result = UnknownString_81A2254;
        break;
      case 3:
        result = (char *)&UnknownString_81A25C3;
        break;
      case 4:
        result = (char *)&UnknownString_81A2925;
        break;
      case 5:
        result = UnknownString_81A1D74;
        break;
      case 6:
        result = UnknownString_81A20C9;
        break;
      case 7:
        result = (char *)&UnknownString_81A2439;
        break;
      case 8:
        result = (char *)&UnknownString_81A2754;
        break;
      default:
        result = UnknownString_81A2B2A;
        break;
    }
  }
  else
  {
    result = UnknownString_81A1BB2;
  }
  return result;
}
