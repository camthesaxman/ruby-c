int sub_8106674()
{
  int v0; // r0@3
  signed int v1; // r2@4
  unsigned int v2; // r3@4
  char *v3; // r1@6
  int v5; // [sp+0h] [bp-18h]@5
  int v6; // [sp+14h] [bp-4h]@12

  if ( (unsigned __int8)byte_3001BAC <= 4u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        remove_some_task();
        SetVBlankCallback(0);
        dword_3005E8C = 33644000;
        v0 = sub_8106A10(1);
        sub_81069CC(v0);
        goto _0810676E;
      case 1:
        ResetPaletteFade();
        v1 = 100663296;
        v2 = 98304;
        do
        {
          v5 = 0;
          v40000D4 = &v5;
          v40000D8 = v1;
          v40000DC = -2063596544;
          v1 += 4096;
          v2 -= 4096;
        }
        while ( v2 > 0x1000 );
        v5 = 0;
        v40000D4 = &v5;
        v40000D8 = v1;
        v40000DC = (v2 >> 2) | 0x85000000;
        ResetSpriteData();
        v3 = &byte_3001BAC;
        goto _08106774;
      case 2:
        SeedRng((unsigned __int16)dword_3001790);
        InitKeys();
        sub_81068FC(v2015DDF);
        v3 = &byte_3001BAC;
        goto _08106774;
      case 3:
        sub_8107090(v2015DDE, v2015DDF);
_0810676E:
        v3 = &byte_3001BAC;
_08106774:
        ++*v3;
        break;
      case 4:
        sub_8106918(v2015DDE, v2015DDF);
        LoadPalette((int)&gUnknown_083F6140, 0, 2);
        v5 = 0;
        v40000D4 = &v5;
        v40000D8 = 83886080;
        v40000DC = -2063597312;
        BeginFastPaletteFade(2u);
        SetVBlankCallback((int)sub_8106AAC);
        byte_3000750 = 0;
        v4000000 = 4928;
        SetMainCallback2((int)sub_8106808);
        break;
      default:
        return v6;
    }
  }
  return v6;
}
