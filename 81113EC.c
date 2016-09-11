int __fastcall sub_81113EC(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@1
  int *v3; // r0@15
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 <= 0xB )
  {
    switch ( v2 )
    {
      case 0u:
        v4000000 = 25088;
        v4000010 = 0;
        v4000012 = -8;
        v400001A = 0;
        v4000018 = 0;
        v400001C = 0;
        v400001E = 0;
        break;
      case 1u:
        ResetPaletteFade();
        ResetSpriteData();
        FreeAllSpritePalettes();
        break;
      case 2u:
        sub_80FA8EC(33556200, 0);
        StringFill((_BYTE *)0x2000F68, 0, 0x10u);
        break;
      case 3u:
        sub_8110824();
        break;
      case 4u:
        if ( !(sub_8110838() << 24) )
          break;
        return v5;
      case 5u:
        sub_80FBCF0(1, 1);
        sub_80FB2A4(0, -8);
        break;
      case 6u:
        sub_8111658();
        break;
      case 7u:
        sub_81117AC();
        break;
      case 8u:
        sub_81117E4();
        break;
      case 9u:
        BeginNormalPaletteFade(-21, 0, 0x10u, 0, 0);
        break;
      case 0xAu:
        v4000050 = 16193;
        sub_8111084();
        v4000000 = 30529;
        break;
      case 0xBu:
        v3 = &dword_3004B20[10 * v1];
        *v3 = (int)sub_811155C;
        *((_WORD *)v3 + 4) = 0;
        return v5;
      default:
        break;
    }
  }
  ++LOWORD(dword_3004B20[10 * v1 + 2]);
  return v5;
}
