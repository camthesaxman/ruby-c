signed int __fastcall BerryTreeGrow(int a1)
{
  int v1; // r4@1
  char v2; // r1@1
  signed int result; // r0@2
  int v4; // r1@7
  int v5; // r1@7

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 1);
  if ( *(_BYTE *)(a1 + 1) & 0x80 )
  {
_080B4ACA:
    result = 0;
  }
  else
  {
    if ( (v2 & 0x7Fu) <= 5 )
    {
      switch ( v2 & 0x7F )
      {
        case 0:
          goto _080B4ACA;
        case 4:
          *(_BYTE *)(a1 + 4) = CalcBerryYield(a1);
          goto _080B4B04;
        case 1:
        case 2:
        case 3:
_080B4B04:
          *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0x80 | ((*(_BYTE *)(v1 + 1) & 0x7F) + 1) & 0x7F;
          break;
        case 5:
          v4 = *(_BYTE *)(a1 + 5) & 0xF;
          *(_BYTE *)(a1 + 4) = 0;
          *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0x80 | 2;
          v5 = (v4 + 1) & 0xF;
          *(_BYTE *)(a1 + 5) = v5;
          if ( v5 == 10 )
          {
            *(_DWORD *)a1 = 0;
            *(_DWORD *)(a1 + 4) = 0;
          }
          break;
        default:
          break;
      }
    }
    result = 1;
  }
  return result;
}
