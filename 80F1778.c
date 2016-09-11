signed int sub_80F1778()
{
  signed int result; // r0@14

  if ( v200D160 > 9u )
  {
def_80F1794:
    result = 0;
  }
  else
  {
    switch ( v200D160 )
    {
      case 0u:
        sub_80EEDE8();
        v200D162 = 2;
        break;
      case 1u:
        sub_80F1614();
        break;
      case 2u:
        if ( sub_80F162C(0) << 24 )
          goto _080F1922;
        break;
      case 3u:
        LZ77UnCompVram(&gPokenavConditionView_Gfx, 100683776);
        break;
      case 4u:
        LZ77UnCompVram(&gUnknown_08E9AC4C, 100724736);
        LoadPalette((int)&gPokenavConditionMenu2_Pal, 32, 32);
        break;
      case 5u:
        sub_8095C8C(100724736, 0, 13, (int)&gUnknown_083E01F4, 0, 0, 12, 4u, 0xCu);
        break;
      case 6u:
        LZ77UnCompVram(&gUnknown_08E9FEB4, 100710400);
        break;
      case 7u:
        LoadPalette((int)&gUnknown_083E0254, 48, 32);
        LoadPalette((int)&gUnknownPalette_81E6692, 176, 32);
        LoadPalette((int)&unk_8E8A1C2, 177, 2);
        LoadPalette((int)&unk_8E8A1D0, 181, 2);
        LoadPalette((int)&unk_8E8A1DE, 191, 2);
        sub_80F01A4();
        break;
      case 8u:
        sub_80F01E0(v2008FE9);
        break;
      case 9u:
        v400000E = 7683;
        v400000C = 5890;
        v4000050 = 2116;
        v4000052 = 1035;
        break;
      default:
        goto def_80F1794;
    }
    ++v200D160;
_080F1922:
    result = 1;
  }
  return result;
}
