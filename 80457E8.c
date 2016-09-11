signed int __fastcall sub_80457E8(unsigned __int8 a1, char a2)
{
  signed int v2; // r2@1
  unsigned int v3; // r0@1

  v2 = a1;
  v3 = a1 - 21;
  if ( v3 <= 0xC )
  {
    switch ( v3 )
    {
      case 0u:
        v2 = 21;
        if ( a2 )
        {
          v2 = 71;
          if ( a2 != 1 )
          {
            v2 = 101;
            if ( a2 == 2 )
              v2 = 86;
          }
        }
        break;
      case 3u:
        v2 = 24;
        if ( a2 )
        {
          v2 = 74;
          if ( a2 != 1 )
          {
            v2 = 104;
            if ( a2 == 2 )
              v2 = 89;
          }
        }
        break;
      case 6u:
        v2 = 27;
        if ( a2 )
        {
          v2 = 77;
          if ( a2 != 1 )
          {
            v2 = 107;
            if ( a2 == 2 )
              v2 = 92;
          }
        }
        break;
      case 9u:
        v2 = 30;
        if ( a2 )
        {
          v2 = 80;
          if ( a2 != 1 )
          {
            v2 = 110;
            if ( a2 == 2 )
              v2 = 95;
          }
        }
        break;
      case 0xCu:
        v2 = 33;
        if ( a2 )
        {
          v2 = 83;
          if ( a2 != 1 )
          {
            v2 = 113;
            if ( a2 == 2 )
              v2 = 98;
          }
        }
        break;
      default:
        return v2;
    }
  }
  return v2;
}
