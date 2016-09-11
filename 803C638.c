int __fastcall GetSubstruct(int a1, unsigned int a2, unsigned __int8 a3)
{
  int v3; // r5@1

  v3 = 0;
  if ( a2 % 0x18 <= 0x17 )
  {
    switch ( a2 % 0x18 )
    {
      case 0u:
        if ( a3 == 1 )
        {
          v3 = a1 + 44;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 56;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 68;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 32;
        }
        break;
      case 1u:
        if ( a3 == 1 )
        {
          v3 = a1 + 44;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 68;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 56;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 32;
        }
        break;
      case 2u:
        if ( a3 == 1 )
        {
          v3 = a1 + 56;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 44;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 68;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 32;
        }
        break;
      case 3u:
        if ( a3 == 1 )
        {
          v3 = a1 + 68;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 44;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 56;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 32;
        }
        break;
      case 4u:
        if ( a3 == 1 )
        {
          v3 = a1 + 56;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 68;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 44;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 32;
        }
        break;
      case 5u:
        if ( a3 == 1 )
        {
          v3 = a1 + 68;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 56;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 44;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 32;
        }
        break;
      case 6u:
        if ( a3 == 1 )
        {
          v3 = a1 + 32;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 56;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 68;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 44;
        }
        break;
      case 7u:
        if ( a3 == 1 )
        {
          v3 = a1 + 32;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 68;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 56;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 44;
        }
        break;
      case 8u:
        if ( a3 == 1 )
        {
          v3 = a1 + 32;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 44;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 68;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 56;
        }
        break;
      case 9u:
        if ( a3 == 1 )
        {
          v3 = a1 + 32;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 44;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 56;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 68;
        }
        break;
      case 0xAu:
        if ( a3 == 1 )
        {
          v3 = a1 + 32;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 68;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 44;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 56;
        }
        break;
      case 0xBu:
        if ( a3 == 1 )
        {
          v3 = a1 + 32;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 56;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 44;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 68;
        }
        break;
      case 0xCu:
        if ( a3 == 1 )
        {
          v3 = a1 + 56;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 32;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 68;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 44;
        }
        break;
      case 0xDu:
        if ( a3 == 1 )
        {
          v3 = a1 + 68;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 32;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 56;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 44;
        }
        break;
      case 0xEu:
        if ( a3 == 1 )
        {
          v3 = a1 + 44;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 32;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 68;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 56;
        }
        break;
      case 0xFu:
        if ( a3 == 1 )
        {
          v3 = a1 + 44;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 32;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 56;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 68;
        }
        break;
      case 0x10u:
        if ( a3 == 1 )
        {
          v3 = a1 + 68;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 32;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 44;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 56;
        }
        break;
      case 0x11u:
        if ( a3 == 1 )
        {
          v3 = a1 + 56;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 32;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 44;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 68;
        }
        break;
      case 0x12u:
        if ( a3 == 1 )
        {
          v3 = a1 + 56;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 68;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 32;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 44;
        }
        break;
      case 0x13u:
        if ( a3 == 1 )
        {
          v3 = a1 + 68;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 56;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 32;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 44;
        }
        break;
      case 0x14u:
        if ( a3 == 1 )
        {
          v3 = a1 + 44;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 68;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 32;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 56;
        }
        break;
      case 0x15u:
        if ( a3 == 1 )
        {
          v3 = a1 + 44;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 56;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 32;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 68;
        }
        break;
      case 0x16u:
        if ( a3 == 1 )
        {
          v3 = a1 + 68;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 44;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 32;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 56;
        }
        break;
      case 0x17u:
        if ( a3 == 1 )
        {
          v3 = a1 + 56;
        }
        else if ( (signed int)a3 > 1 )
        {
          if ( a3 == 2 )
          {
            v3 = a1 + 44;
          }
          else if ( a3 == 3 )
          {
            v3 = a1 + 32;
          }
        }
        else if ( !a3 )
        {
          v3 = a1 + 68;
        }
        break;
      default:
        return v3;
    }
  }
  return v3;
}
