int __fastcall sub_80E9368(int a1)
{
  const char *v1; // r4@3
  int v3; // [sp+8h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 > 0xDu )
  {
def_80E937A:
    v1 = 0;
  }
  else
  {
    switch ( a1 )
    {
      case 0:
        v1 = (const char *)&gUnknown_08411257;
        break;
      case 1:
        v1 = (const char *)&gUnknown_0841125F;
        break;
      case 2:
        v1 = "œ‰„‚";
        break;
      case 3:
        v1 = "œ‰„‚";
        break;
      case 6:
        v1 = (const char *)&gUnknown_084112A3;
        break;
      case 9:
        v1 = "—‹’Ë¥Á";
        break;
      case 5:
      case 7:
      case 8:
      case 10:
      case 11:
      case 12:
        v1 = (const char *)&gUnknown_084112CD;
        break;
      case 13:
        v1 = "¡„„ÿ";
        break;
      default:
        goto def_80E937A;
    }
  }
  BasicInitMenuWindow((int)&gWindowConfig_81E6D8C);
  v200AF8E = -4;
  v200AF8F = 5;
  v200AF90 = 1;
  if ( v1 )
  {
    sub_8072C74(33599377, (int)v1, 0xF0u, 2u);
    MenuPrint(33599374, 0, 0);
  }
  else
  {
    v200AF91 = -4;
    v200AF92 = 17;
    v200AF93 = 16;
    v200AF94 = -1;
    MenuPrint(33599374, 0, 0);
    MenuPrint(33599374, 28, 0);
  }
  BasicInitMenuWindow((int)&gWindowConfig_81E6DA8);
  return v3;
}
