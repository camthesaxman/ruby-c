signed int sub_8121E78()
{
  unsigned int v0; // r5@12
  unsigned int v1; // r4@13
  int v2; // r6@13

  if ( (unsigned int)v201B264 <= 7 )
  {
    switch ( v201B264 )
    {
      case 0:
        if ( v201B266 >= (signed int)(unsigned __int8)byte_3004350 )
        {
          v201B266 = 0;
          goto _08121FE8;
        }
        sub_806D90C(v201B260, v201B266, (int)&dword_3004360[25 * v201B266]);
_08122020:
        ++v201B266;
        return 0;
      case 1:
        sub_806DA98();
        goto _08121FE8;
      case 2:
        sub_806DC34(v201B260, 608, 0);
        goto _08121FE8;
      case 3:
        if ( (unsigned __int8)sub_806BD58(v201B260) != 1 )
          goto _08122020;
        v201B266 = 0;
        goto _08121FE8;
      case 4:
        sub_806E334(v201B264, 33665024, 0);
        goto _08121FE8;
      case 5:
        sub_806E0C4(v201B264, 33665024, 0);
        goto _08121FE8;
      case 6:
        v0 = 0;
        break;
      case 7:
        if ( (unsigned __int8)sub_806B58C(v201B266) != 1 )
          goto _08122020;
        v201B266 = 0;
        v201B264 = 0;
        return 1;
      default:
        return 0;
    }
    while ( v0 < (unsigned __int8)byte_3004350 )
    {
      v1 = 0;
      v2 = v0 + 1;
      while ( v1 <= 2 )
      {
        if ( *(_BYTE *)(v1 + 33788528) == v2 )
        {
          sub_806BC3C(v0, (234881024 * v1 + 469762048) >> 24);
          break;
        }
        v1 = (v1 + 1) & 0xFF;
      }
      if ( v1 == 3 )
      {
        if ( (sub_8122030(&dword_3004360[25 * v0]) & 0xFF) == 1 )
          sub_806BC3C(v0, 0x70u);
        else
          sub_806BC3C(v0, 0x7Eu);
      }
      v0 = (unsigned __int8)v2;
    }
_08121FE8:
    ++v201B264;
  }
  return 0;
}
