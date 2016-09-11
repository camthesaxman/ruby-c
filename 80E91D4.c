int __fastcall sub_80E91D4(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  void *v2; // r0@7
  const char *v3; // r0@12
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  BasicInitMenuWindow((int)&gWindowConfig_81E6DA8);
  if ( v1 == 10 )
  {
    MenuZeroFillWindowRect(3u, 0xEu, 0x1Au, 0x13u);
    sub_80E9198(10);
  }
  else
  {
    if ( (unsigned __int8)sub_80E91A4() == 10 )
      MenuDrawTextWindow(3u, 0xEu);
    sub_80E9198(v1);
    if ( v1 <= 9 )
    {
      switch ( v1 )
      {
        case 0u:
          sub_80E91B0(33598592, 4, 15, 2);
          v2 = (void *)33598665;
          goto _080E9326;
        case 1u:
          sub_80E91B0(33598738, 4, 15, 2);
          v2 = (void *)33598811;
          goto _080E9326;
        case 2u:
          sub_80E91B0((int)&gUnknown_084110EE, 4, 15, 2);
          v2 = &gUnknown_0841110D;
          goto _080E9326;
        case 3u:
          if ( v2001008 == 4 )
          {
            v3 = "Íèãä";
          }
          else if ( v2001008 == 9 )
          {
            v3 = "ËéÝè";
          }
          else
          {
            v3 = "ËéÝè";
          }
          goto _080E933E;
        case 4u:
          sub_80E91B0((int)&gUnknown_08411135, 4, 15, 2);
          v2 = &gUnknown_08411158;
          goto _080E9326;
        case 5u:
          v3 = "ÊàÙÕçÙ";
          goto _080E933E;
        case 6u:
          v3 = (const char *)&gUnknown_08411185;
          goto _080E933E;
        case 7u:
          sub_80E91B0((int)"Éâàí", 4, 15, 2);
          v2 = &gUnknown_084111C7;
_080E9326:
          sub_80E91B0((int)v2, 4, 17, 2);
          break;
        case 8u:
          v3 = "ÎÜÕè´ç";
_080E933E:
          sub_80E91B0((int)v3, 4, 15, 4);
          break;
        case 9u:
          sub_80E91B0((int)"½ãáÖÝâÙ", 4, 15, 4);
          break;
        default:
          return v5;
      }
    }
  }
  return v5;
}
