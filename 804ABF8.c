signed int sub_804ABF8()
{
  __int16 v0; // r0@3
  int v1; // r1@3

  if ( (unsigned int)*(_BYTE *)(dword_3004824 + 180) - 8 <= 8 )
  {
    switch ( *(_BYTE *)(dword_3004824 + 180) )
    {
      case 8:
        v0 = LoadSpriteSheet((int)&gUnknown_0820C07C + 8 * *(_BYTE *)(dword_3004824 + 180));
        v1 = dword_3004824;
        *(_WORD *)(dword_3004824 + 126) = v0;
        goto _0804ACC2;
      case 0xD:
        LoadSpritePalette((int)&gUnknown_0820C0E4);
        v1 = dword_3004824;
        goto _0804ACC2;
      case 0xE:
        LoadSpritePalette((int)&gUnknown_0820C12C);
        v1 = dword_3004824;
        goto _0804ACC2;
      case 0xF:
        LoadSpriteSheet((int)&gUnknown_0820C124);
        ++*(_BYTE *)(dword_3004824 + 180);
        goto _0804AC9A;
      case 0x10:
_0804AC9A:
        *(_BYTE *)(dword_3004824 + 180) = 0;
        return 1;
      default:
        break;
    }
  }
  LoadSpriteSheet((int)&gUnknown_0820C07C + 8 * *(_BYTE *)(dword_3004824 + 180));
  v1 = dword_3004824;
_0804ACC2:
  ++*(_BYTE *)(v1 + 180);
  return 0;
}
