signed int sub_8122854()
{
  signed int result; // r0@8

  if ( (unsigned int)v201B264 > 4 )
  {
def_8122870:
    result = 0;
  }
  else
  {
    switch ( v201B264 )
    {
      case 0:
        sub_81228E8(v201B260);
        goto _081228CA;
      case 1:
        sub_806DA98();
        goto _081228CA;
      case 2:
        sub_8122950(v201B260);
        goto _081228CA;
      case 3:
        sub_81229B8();
_081228CA:
        ++v201B264;
        goto def_8122870;
      case 4:
        sub_806B908();
        result = 1;
        break;
      default:
        goto def_8122870;
    }
  }
  return result;
}
