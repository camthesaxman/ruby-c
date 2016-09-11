signed int __fastcall sub_8070E48(int a1)
{
  signed int v1; // r4@2
  unsigned int v2; // r1@4
  signed int result; // r0@8
  int v4; // r2@13

  a1 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 == 175 )
    v1 = 33721770;
  else
    v1 = (signed int)*(&gItemEffectTable + a1 - 13);
  v2 = *(_BYTE *)v1;
  if ( v2 & 0x3F || *(_BYTE *)(v1 + 1) || *(_BYTE *)(v1 + 2) || *(_BYTE *)(v1 + 3) & 0x80 )
  {
    result = 0;
  }
  else if ( v2 & 0x40 )
  {
    result = 10;
  }
  else if ( *(_BYTE *)(v1 + 3) & 0x40 )
  {
    result = 1;
  }
  else
  {
    v4 = *(_BYTE *)(v1 + 3) & 0x3F;
    if ( *(_BYTE *)(v1 + 3) & 0x3F || v2 >> 7 )
    {
      switch ( v4 )
      {
        case 32:
          result = 4;
          break;
        case 16:
          result = 3;
          break;
        case 8:
          result = 5;
          break;
        case 4:
          result = 6;
          break;
        case 2:
          result = 7;
          break;
        case 1:
          result = 8;
          break;
        default:
          if ( !(v2 >> 7) || *(_BYTE *)(v1 + 3) & 0x3F )
            result = 11;
          else
            result = 9;
          break;
      }
    }
    else if ( *(_BYTE *)(v1 + 4) & 0x44 )
    {
      result = 2;
    }
    else if ( *(_BYTE *)(v1 + 4) & 2 )
    {
      result = 12;
    }
    else if ( *(_BYTE *)(v1 + 4) & 1 )
    {
      result = 13;
    }
    else if ( *(_BYTE *)(v1 + 5) & 8 )
    {
      result = 14;
    }
    else if ( *(_BYTE *)(v1 + 5) & 4 )
    {
      result = 15;
    }
    else if ( *(_BYTE *)(v1 + 5) & 2 )
    {
      result = 16;
    }
    else if ( *(_BYTE *)(v1 + 5) & 1 )
    {
      result = 17;
    }
    else if ( *(_BYTE *)(v1 + 4) & 0x80 )
    {
      result = 18;
    }
    else if ( *(_BYTE *)(v1 + 4) & 0x20 )
    {
      result = 19;
    }
    else if ( *(_BYTE *)(v1 + 5) & 0x10 )
    {
      result = 20;
    }
    else if ( *(_BYTE *)(v1 + 4) & 0x18 )
    {
      result = 21;
    }
    else
    {
      result = 22;
    }
  }
  return result;
}
