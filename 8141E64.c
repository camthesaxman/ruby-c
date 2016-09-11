signed int sub_8141E64()
{
  int v0; // r0@3
  char *v1; // r1@5
  signed int result; // r0@10

  if ( (unsigned __int8)byte_3001BAC > 4u )
  {
def_8141E7C:
    v0 = SetVBlankCallback(0);
    sub_81433E0(v0);
    byte_3001BAC = 1;
_08141F84:
    result = 1;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_8141E7C;
      case 1:
        sub_8143570();
        goto _08141F38;
      case 2:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_8141E38);
        v4000200 |= 1u;
        v4000004 |= 8u;
        v1 = &byte_3001BAC;
        goto _08141F3E;
      case 3:
        v4000050 = 16194;
        v4000052 = 1808;
        v4000054 = 0;
        sub_81435B8();
_08141F38:
        v1 = &byte_3001BAC;
_08141F3E:
        ++*v1;
        goto _08141F84;
      case 4:
        UpdatePaletteFade();
        if ( v202F38F & 0x80 )
          goto _08141F84;
        SetMainCallback2((int)sub_8141E4C);
        sub_8075474(0x1B4u);
        result = 0;
        break;
    }
  }
  return result;
}
