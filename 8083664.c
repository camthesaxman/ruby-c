signed int sub_8083664()
{
  signed int result; // r0@2
  __int16 *v1; // r1@5
  signed __int16 v2; // r2@5

  if ( FuncIsActiveTask((int)sub_8083710) << 24 )
  {
    result = 255;
  }
  else
  {
    if ( (unsigned int)v202E8CC - 1 <= 4 )
    {
      switch ( v202E8CC )
      {
        case 1u:
          v1 = &gLinkType;
          v2 = 8755;
          goto _080836F0;
        case 2u:
          v1 = &gLinkType;
          v2 = 8772;
          goto _080836F0;
        case 5u:
          v1 = &gLinkType;
          v2 = 8789;
          goto _080836F0;
        case 3u:
          v1 = &gLinkType;
          v2 = 4369;
          goto _080836F0;
        case 4u:
          v1 = &gLinkType;
          v2 = 13090;
_080836F0:
          *v1 = v2;
          break;
        default:
          break;
      }
    }
    result = (unsigned __int8)CreateTask((int)sub_8083710, 80);
  }
  return result;
}
