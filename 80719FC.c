signed int __fastcall sub_80719FC(_BYTE *a1)
{
  _BYTE *v1; // r8@1
  unsigned int v2; // r0@1
  int v3; // r0@3
  signed int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@6
  int v7; // r0@6
  int v8; // r0@6
  __int16 v10; // [sp+0h] [bp-1Ch]@3

  v1 = a1;
  v2 = *a1;
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v4000000 = 0;
        v3 = SetVBlankCallback(0);
        remove_some_task(v3);
        v10 = 0;
        v40000D4 = &v10;
        v40000D8 = 83886080;
        v40000DC = -2130705920;
        v4 = 100663296;
        v5 = 98304;
        do
        {
          v10 = 0;
          v40000D4 = &v10;
          v40000D8 = v4;
          v40000DC = -2130704384;
          v4 += 4096;
          v5 -= 4096;
        }
        while ( v5 > 0x1000 );
        v10 = 0;
        v40000D4 = &v10;
        v40000D8 = v4;
        v40000DC = (v5 >> 1) | 0x81000000;
        break;
      case 1u:
        v6 = ResetSpriteData();
        v7 = ResetTasks(v6);
        v8 = ResetPaletteFade(v7);
        dp12_8087EA4(v8);
        break;
      case 2u:
        SetUpWindowConfig((int)&gWindowConfig_81E6CE4);
        InitMenuWindow(&gWindowConfig_81E6CE4);
        v4000000 = 256;
        break;
      case 3u:
        BlendPalettes(-1, 16, 0);
        SetVBlankCallback((int)sub_80719F0);
        v4000200 |= 1u;
        break;
      case 4u:
        return 1;
      default:
        break;
    }
  }
  ++*v1;
  return 0;
}
