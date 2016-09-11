int __fastcall GetMonData(int a1, int a2, int a3)
{
  int result; // r0@3

  if ( (unsigned int)(a2 - 55) > 9 )
  {
def_803CB74:
    result = GetBoxMonData(a1, a2, a3);
  }
  else
  {
    switch ( a2 )
    {
      case 55:
        result = *(_DWORD *)(a1 + 80);
        break;
      case 56:
        result = *(_BYTE *)(a1 + 84);
        break;
      case 57:
        result = *(_WORD *)(a1 + 86);
        break;
      case 58:
        result = *(_WORD *)(a1 + 88);
        break;
      case 59:
        result = *(_WORD *)(a1 + 90);
        break;
      case 60:
        result = *(_WORD *)(a1 + 92);
        break;
      case 61:
        result = *(_WORD *)(a1 + 94);
        break;
      case 62:
        result = *(_WORD *)(a1 + 96);
        break;
      case 63:
        result = *(_WORD *)(a1 + 98);
        break;
      case 64:
        result = *(_BYTE *)(a1 + 85);
        break;
      default:
        goto def_803CB74;
    }
  }
  return result;
}
