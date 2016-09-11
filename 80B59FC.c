int C2_NamingScreen()
{
  int v0; // r0@3
  int v1; // r0@11
  int v2; // r0@11
  int v4; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 7u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        v0 = NamingScreen_TurnOffScreen();
        NamingScreen_Init(v0);
        goto _080B5A6C;
      case 1:
        NamingScreen_ClearVram();
        goto _080B5A6C;
      case 2:
        NamingScreen_ClearOam();
        goto _080B5A6C;
      case 3:
        NamingScreen_SetUpVideoRegs();
        goto _080B5A6C;
      case 4:
        sub_80B5DC8();
        goto _080B5A6C;
      case 5:
        NamingScreen_ResetObjects();
        goto _080B5A6C;
      case 6:
        sub_80B5DFC();
_080B5A6C:
        ++byte_3001BAC;
        break;
      case 7:
        v1 = sub_80B5E20();
        v2 = sub_80B5E3C(v1);
        sub_80B5C04(v2);
        SetMainCallback2((int)sub_80B5AA0);
        break;
      default:
        return v4;
    }
  }
  return v4;
}
