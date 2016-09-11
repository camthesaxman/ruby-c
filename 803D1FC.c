int __fastcall SetMonData(int a1, int a2, int a3)
{
  int v4; // [sp+0h] [bp-4h]@0

  if ( (unsigned int)(a2 - 55) > 0xA )
  {
def_803D210:
    SetBoxMonData(a1, a2, a3);
  }
  else
  {
    switch ( a2 )
    {
      case 55:
        *(_DWORD *)(a1 + 80) = *(_BYTE *)a3
                             + (*(_BYTE *)(a3 + 1) << 8)
                             + (*(_BYTE *)(a3 + 2) << 16)
                             + (*(_BYTE *)(a3 + 3) << 24);
        break;
      case 56:
        *(_BYTE *)(a1 + 84) = *(_BYTE *)a3;
        break;
      case 57:
        *(_WORD *)(a1 + 86) = *(_BYTE *)a3 + (*(_BYTE *)(a3 + 1) << 8);
        break;
      case 58:
        *(_WORD *)(a1 + 88) = *(_BYTE *)a3 + (*(_BYTE *)(a3 + 1) << 8);
        break;
      case 59:
        *(_WORD *)(a1 + 90) = *(_BYTE *)a3 + (*(_BYTE *)(a3 + 1) << 8);
        break;
      case 60:
        *(_WORD *)(a1 + 92) = *(_BYTE *)a3 + (*(_BYTE *)(a3 + 1) << 8);
        break;
      case 61:
        *(_WORD *)(a1 + 94) = *(_BYTE *)a3 + (*(_BYTE *)(a3 + 1) << 8);
        break;
      case 62:
        *(_WORD *)(a1 + 96) = *(_BYTE *)a3 + (*(_BYTE *)(a3 + 1) << 8);
        break;
      case 63:
        *(_WORD *)(a1 + 98) = *(_BYTE *)a3 + (*(_BYTE *)(a3 + 1) << 8);
        break;
      case 64:
        *(_BYTE *)(a1 + 85) = *(_BYTE *)a3;
        break;
      case 65:
        return v4;
      default:
        goto def_803D210;
    }
  }
  return v4;
}
