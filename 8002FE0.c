signed int __fastcall InterpretText(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  _BYTE *v3; // r1@1
  signed int result; // r0@3
  signed __int16 v5; // r0@4

  v1 = a1;
  v2 = *(_WORD *)(a1 + 30);
  *(_WORD *)(v1 + 30) = v2 + 1;
  v3 = (_BYTE *)(*(_DWORD *)(v1 + 32) + v2);
  if ( (unsigned int)*v3 - 250 > 5 )
  {
def_8003004:
    call_via_r2(v1, *v3, *(&sPrintGlyphFuncs + *(_BYTE *)v1));
    result = 1;
  }
  else
  {
    switch ( *v3 )
    {
      case 0xFF:
        ClipRight(v1);
        result = 0;
        *(_WORD *)(v1 + 22) = 0;
        return result;
      case 0xFD:
        v5 = 7;
        goto LABEL_8;
      case 0xFE:
        ClipRight(v1);
        v5 = 6;
        goto LABEL_8;
      case 0xFB:
        DrawInitialDownArrow(v1);
        v5 = 8;
        goto LABEL_8;
      case 0xFA:
        DrawInitialDownArrow(v1);
        v5 = 9;
LABEL_8:
        *(_WORD *)(v1 + 22) = v5;
        result = 2;
        break;
      case 0xFC:
        result = (unsigned __int8)HandleExtCtrlCode(v1);
        break;
      default:
        goto def_8003004;
    }
  }
  return result;
}
