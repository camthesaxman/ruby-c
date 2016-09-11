int sub_80EBA5C()
{
  int v0; // r0@13
  int v1; // r0@21
  int v3; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 0xEu )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        goto _080EBAC0;
      case 1:
        SetVBlankCallback(0);
        goto _080EBBC0;
      case 2:
        ResetPaletteFade();
        goto _080EBBC0;
      case 3:
        ResetSpriteData();
        goto _080EBBC0;
      case 4:
        FreeAllSpritePalettes();
        goto _080EBBC0;
      case 5:
        ResetTasks();
        goto _080EBBC0;
      case 6:
        remove_some_task();
        goto _080EBBC0;
      case 7:
        sub_80F1A90();
        ++byte_3001BAC;
        goto _080EBB3E;
      case 8:
_080EBB3E:
        v0 = sub_80F1AC4();
        goto _080EBB80;
      case 9:
        sub_80F2688();
        ++byte_3001BAC;
        goto _080EBB5C;
      case 0xA:
_080EBB5C:
        v0 = sub_80F26BC();
        goto _080EBB80;
      case 0xB:
        sub_80F36F0();
        ++byte_3001BAC;
        goto _080EBB7C;
      case 0xC:
_080EBB7C:
        v0 = sub_80F3724();
_080EBB80:
        if ( !(v0 << 24) )
          goto _080EBBC0;
        return v3;
      case 0xD:
        sub_80EBC10();
        sub_80EBDBC(sub_80EBDD8);
        goto _080EBBC0;
      case 0xE:
        v2006DAB = 1;
        audio_play(0x6Eu);
        SetMainCallback2((int)sub_80EBD90);
        v1 = SetVBlankCallback((int)sub_80EBD18);
        sub_80F1A74(v1);
        goto _080EBBC0;
      default:
        break;
    }
  }
  byte_3001BAC = 0;
_080EBAC0:
  v2006DAC = is_c1_link_related_active();
  if ( !v2006DAC )
  {
    v2006DAB = 0;
    ++byte_3001BAC;
    SetMainCallback2((int)sub_80EBBE8);
  }
_080EBBC0:
  ++byte_3001BAC;
  return v3;
}
