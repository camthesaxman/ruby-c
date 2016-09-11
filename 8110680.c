int sub_8110680()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 7u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        SetVBlankCallback(0);
        v4000000 = 25088;
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        FreeSpriteTileRanges();
        FreeAllSpritePalettes();
        v4000010 = 0;
        v4000012 = -8;
        v400001A = 0;
        v4000018 = 0;
        v400001C = 0;
        v400001E = 0;
        break;
      case 1:
        sub_80FA8EC(33556200, 0);
        StringFill((_BYTE *)0x2000F68, 0, 0x10u);
        break;
      case 2:
        sub_8110824();
        break;
      case 3:
        if ( !(sub_8110838() << 24) )
          break;
        return v1;
      case 4:
        sub_80FBCF0(1, 1);
        sub_80FB2A4(0, -8);
        SetVBlankCallback((int)sub_81107DC);
        break;
      case 5:
        BeginNormalPaletteFade(-21, 0, 0x10u, 0, 0);
        break;
      case 6:
        v4000050 = 16193;
        sub_8111084();
        v4000000 = 30529;
        break;
      case 7:
        sub_8110814(sub_8111288);
        SetMainCallback2((int)sub_81107F0);
        return v1;
      default:
        break;
    }
  }
  ++byte_3001BAC;
  return v1;
}
