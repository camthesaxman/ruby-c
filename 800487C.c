int __fastcall GetBlankTileNum(int a1)
{
  int v1; // r2@1
  signed int v2; // r1@1
  unsigned __int16 v3; // r0@4
  unsigned int v4; // r0@5

  v1 = *(_WORD *)(a1 + 26);
  v2 = *(_BYTE *)a1;
  if ( v2 == 1 )
  {
    v4 = *(_BYTE *)(a1 + 1);
    if ( v4 <= 6 )
    {
      switch ( v4 )
      {
        case 1u:
        case 2u:
        case 4u:
        case 5u:
          v3 = v1 + 212;
          goto LABEL_8;
        case 0u:
        case 3u:
        case 6u:
          return v1;
        default:
          break;
      }
    }
    v1 = 0;
  }
  else if ( v2 > 1 && v2 == 2 )
  {
    v3 = v1 + 1;
LABEL_8:
    v1 = v3;
  }
  return v1;
}
