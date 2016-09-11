signed int sub_80A317C()
{
  int v0; // r0@3
  char *v1; // r1@4
  int v2; // r0@15
  int v3; // r0@18
  int v4; // r0@18
  int v5; // r0@19
  int v6; // r0@20
  int v7; // r0@25
  int v8; // r0@25
  int v9; // r0@25
  int v10; // r0@25
  int v11; // r0@25
  signed int result; // r0@25

  if ( (unsigned __int8)byte_3001BAC > 0x10u )
  {
def_80A3196:
    result = 0;
  }
  else
  {
    switch ( byte_3001BAC )
    {
      case 0:
        v0 = sub_80F9438();
        sub_80A34E8(v0);
        goto _080A3464;
      case 1:
        remove_some_task();
        v1 = &byte_3001BAC;
        goto _080A346A;
      case 2:
        gpu_pal_allocator_reset__manage_upper_four();
        goto _080A3464;
      case 3:
        sub_80F9020();
        v201FFFF = 0;
        goto _080A3464;
      case 4:
        ResetPaletteFade();
        v202F390 |= 0x80u;
        v1 = &byte_3001BAC;
        goto _080A346A;
      case 5:
        ResetSpriteData();
        goto _080A3464;
      case 6:
        if ( !(sub_80A3520() << 24) )
          goto def_80A3196;
        v1 = &byte_3001BAC;
        goto _080A346A;
      case 7:
        SetUpWindowConfig((int)&gWindowConfig_81E6DFC);
        goto _080A3464;
      case 8:
        MultistepInitMenuWindowBegin();
        v1 = &byte_3001BAC;
        goto _080A346A;
      case 9:
        if ( !MultistepInitMenuWindowContinue() )
          goto def_80A3196;
        goto _080A3464;
      case 0xA:
        v2 = sub_80F944C();
        InitMenuInUpperLeftCornerPlaySoundWhenAPressed(v2);
        sub_80F953C(0, 172, 12);
        sub_80F953C(1, 172, 148);
        sub_80F953C(2, 28, 88);
        sub_80F953C(3, 100, 88);
        sub_80F9988(0, 2);
        sub_80F9988(1, 2);
        sub_80F9988(2, 2);
        sub_80F9988(3, 2);
        if ( (((unsigned __int8)byte_3000701 - 4) & 0xFFu) <= 1 )
        {
          sub_80F979C(2, 1);
          sub_80F979C(3, 1);
        }
        v1 = &byte_3001BAC;
        goto _080A346A;
      case 0xB:
        v203855A = 16;
        sub_80A39B8(gBG2TilemapBuffer, (v2038559 + 1) & 0xFF);
        v3 = sub_80A3AC0(gBG2TilemapBuffer, v2038559);
        sub_80A3D08(v3);
        sub_80A3C34(33709428, 64);
        v4 = sub_80A3C34(33709684, 46);
        sub_80A3D40(v4);
        dword_3005D24 = gUnknown_083C1618[2 * v2038559];
        sub_80A362C();
        goto _080A3464;
      case 0xC:
        sub_80A48E8(0xFFFF, 0, 7);
        v5 = sub_80A490C(*(_WORD *)(4
                                  * ((unsigned __int8)byte_3005D10[4 * v2038559 + 1]
                                   + (unsigned __int8)byte_3005D10[4 * v2038559])
                                  + dword_3005D24));
        sub_80A736C(v5);
        v203855B = v2038559 + 1;
        v203855C = 0;
        v1 = &byte_3001BAC;
        goto _080A346A;
      case 0xD:
        sub_80A7B10();
        v6 = sub_80A7C20(0);
        sub_80A3740(v6);
        goto _080A3464;
      case 0xE:
        v4000200 |= 1u;
        v4000004 |= 8u;
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        v202F390 &= 0x7Fu;
        v1 = &byte_3001BAC;
        goto _080A346A;
      case 0xF:
        if ( sub_8055870() == 1 )
          goto def_80A3196;
_080A3464:
        v1 = &byte_3001BAC;
_080A346A:
        ++*v1;
        goto def_80A3196;
      case 0x10:
        SetVBlankCallback((int)sub_80A3134);
        v7 = SetMainCallback2((int)sub_80A3118);
        v8 = sub_80A751C(v7);
        v9 = sub_80A7630(v8);
        v10 = sub_80A770C(v9);
        v11 = sub_80A7828(v10);
        sub_80A78B8(v11);
        result = 1;
        break;
      default:
        goto def_80A3196;
    }
  }
  return result;
}
