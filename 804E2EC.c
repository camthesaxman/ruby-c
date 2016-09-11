signed int sub_804E2EC()
{
  unsigned int v0; // r0@1
  signed int v1; // r3@5
  signed int v2; // r4@5
  unsigned int v3; // r5@5
  int *v4; // r0@7
  unsigned int v5; // r2@12
  signed int result; // r0@18

  v0 = *(_BYTE *)(dword_3004854 + 1);
  if ( v0 > 9 )
  {
def_804E304:
    result = 0;
  }
  else
  {
    switch ( v0 )
    {
      case 0u:
        sub_800D238();
        goto _0804E49E;
      case 1u:
        v40000D4 = &gUnknown_08215C2C;
        v40000D8 = 100679680;
        v40000DC = -2147483136;
        LoadPalette(&gUnknown_08215C0C, 0, 256);
        goto _0804E49E;
      case 2u:
        v1 = 33619968;
        v2 = 100663296;
        v3 = 0x2000;
        do
        {
          v40000D4 = v1;
          v40000D8 = v2;
          v40000DC = -2147481600;
          v1 += 4096;
          v2 += 4096;
          v3 -= 4096;
        }
        while ( v3 > 0x1000 );
        v40000D4 = v1;
        v40000D8 = v2;
        v40000DC = (v3 >> 1) | 0x80000000;
        v4 = &dword_3004854;
        goto _0804E4A0;
      case 3u:
        sub_800D238();
        goto _0804E49E;
      case 4u:
        sub_800D238();
        goto _0804E49E;
      case 5u:
        v40000D4 = 33619968;
        v40000D8 = 100720640;
        v40000DC = -2147481600;
        v4 = &dword_3004854;
        goto _0804E4A0;
      case 6u:
        v40000D4 = 33624064;
        v40000D8 = 100724736;
        v40000DC = -2147481600;
        v4 = &dword_3004854;
        goto _0804E4A0;
      case 7u:
        v5 = 0;
        do
        {
          *(_WORD *)(2 * v5 + 0x2013000) |= 0x100u;
          v5 = (v5 + 1) & 0xFFFF;
        }
        while ( v5 <= 0x27F );
        v40000D4 = 33632256;
        v40000D8 = 100687872;
        v40000DC = -2147483008;
        LoadPalette(&gUnknown_0821602C, 128, 32);
        goto _0804E49E;
      case 8u:
        LoadSpriteSheet((int)&gUnknown_082163DC);
        LoadSpriteSheet((int)&gUnknown_082164F4);
        LoadSpriteSheet((int)&gUnknown_08216454);
_0804E49E:
        v4 = &dword_3004854;
_0804E4A0:
        ++*(_BYTE *)(*v4 + 1);
        goto def_804E304;
      case 9u:
        LoadSpriteSheet((int)&gUnknown_08216540);
        LoadSpriteSheet((int)&gUnknown_08216574);
        LoadSpritePalette((int)&gUnknown_082163EC);
        LoadSpritePalette((int)"ุ ้\bาต");
        *(_BYTE *)(dword_3004854 + 1) = 0;
        result = 1;
        break;
      default:
        goto def_804E304;
    }
  }
  return result;
}
