int sub_8096884()
{
  int v0; // r0@7
  int v1; // r0@11
  int v3; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 9u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        SetVBlankCallback(0);
        v4000000 = 0;
        sub_8096804();
        goto _0809697A;
      case 1:
        SetUpWindowConfig((int)&gWindowConfig_81E6D00);
        goto _0809697A;
      case 2:
        InitMenuWindow();
        MenuZeroFillScreen();
        goto _0809697A;
      case 3:
        sub_80967DC();
        sub_8096848();
        goto _0809697A;
      case 4:
        v0 = sub_8098B48();
        sub_809AA24(v0);
        goto _0809697A;
      case 5:
        sub_8097DE0();
        goto _0809697A;
      case 6:
        sub_8097E70();
        goto _0809697A;
      case 7:
        sub_8098400();
        goto _0809697A;
      case 8:
        sub_8099BF8(v20300A0);
        v20012BC = 10;
        v20012BE = -9525;
        v1 = sub_80F727C();
        sub_80F7404(v1);
        goto _0809697A;
      case 9:
        sub_8096874();
        sub_8096BE0(sub_8096BF0);
        SetMainCallback2((int)sub_8096B38);
        SetVBlankCallback((int)sub_8096AFC);
_0809697A:
        ++byte_3001BAC;
        break;
      default:
        return v3;
    }
  }
  return v3;
}
