int sub_80969A0()
{
  int v0; // r0@10
  int v1; // r0@14
  int v3; // [sp+8h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 0xAu )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        SetVBlankCallback(0);
        v4000000 = 0;
        v2000005 = v203847D;
        sub_8096804();
        if ( v203847F == 1 )
          sub_809BBC0();
        if ( !v203847F )
          sub_809BD14();
        goto _08096AD8;
      case 1:
        SetUpWindowConfig((int)&gWindowConfig_81E6D00);
        goto _08096AD8;
      case 2:
        InitMenuWindow();
        MenuZeroFillScreen();
        goto _08096AD8;
      case 3:
        sub_80967DC();
        goto _08096AD8;
      case 4:
        v0 = sub_8098B48();
        sub_809AA98(v0);
        goto _08096AD8;
      case 5:
        sub_8097DE0();
        goto _08096AD8;
      case 6:
        sub_8097E70();
        goto _08096AD8;
      case 7:
        sub_8098400();
        goto _08096AD8;
      case 8:
        sub_8099BF8(v20300A0);
        v20012BC = 10;
        v20012BE = -9525;
        v1 = sub_80F727C();
        sub_80F7404(v1);
        goto _08096AD8;
      case 9:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        SetVBlankCallback((int)sub_8096AFC);
        goto _08096AD8;
      case 0xA:
        sub_8096874();
        sub_8096BE0(sub_8096C68);
        SetMainCallback2((int)sub_8096B38);
_08096AD8:
        ++byte_3001BAC;
        break;
      default:
        return v3;
    }
  }
  return v3;
}
