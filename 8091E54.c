int __fastcall sub_8091E54(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@5
  unsigned int v3; // r4@8
  char *v4; // r1@10
  int v6; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)byte_3001BAC > 4u )
  {
def_8091E76:
    if ( !(v202F38F & 0x80) )
    {
      *(_BYTE *)(v202FFB4 + 1610) = 2;
      sub_8091060(0);
      LZ77UnCompVram(&gPokedexMenuSearch_Gfx, 100663296);
      LZ77UnCompVram(&gUnknown_08E96D2C, 100694016);
      LoadPalette((int)&unk_8E882DA, 1, 126);
      if ( !sub_806912C() )
      {
        v2 = 0;
        do
        {
          *(_WORD *)(2 * v2 + 0x6007A80) = *(_WORD *)(2 * v2 + 0x6007B00);
          *(_WORD *)(2 * v2 + 0x6007AC0) = *(_WORD *)(2 * v2 + 0x6007B40);
          *(_WORD *)(2 * v2 + 0x6007B00) = 1;
          *(_WORD *)(2 * v2 + 0x6007B40) = 1;
          v2 = (v2 + 1) & 0xFFFF;
        }
        while ( v2 <= 0x10 );
      }
      byte_3001BAC = 1;
    }
  }
  else
  {
    switch ( byte_3001BAC )
    {
      default:
        goto def_8091E76;
      case 1:
        SetUpWindowConfig((int)&gWindowConfig_81E7064);
        InitMenuWindow();
        LoadCompressedObjectPic((_DWORD *)"Ètè\b");
        LoadSpritePalettes((int)&gUnknown_083A05DC);
        sub_809308C(v1);
        v3 = 0;
        do
        {
          *((_WORD *)&byte_3004B28[40 * v1] + v3) = 0;
          v3 = (v3 + 1) & 0xFFFF;
        }
        while ( v3 <= 0xF );
        sub_8092EB0(v1);
        sub_8092AB0(0);
        sub_8092B68(v1);
        v4 = &byte_3001BAC;
        goto _08091FF6;
      case 2:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        v4 = &byte_3001BAC;
        goto _08091FF6;
      case 3:
        v400000E = 3843;
        v4000000 = 7232;
        v4 = &byte_3001BAC;
_08091FF6:
        ++*v4;
        break;
      case 4:
        if ( !(v202F38F & 0x80) )
        {
          dword_3004B20[10 * a1] = (int)sub_809204C;
          byte_3001BAC = 0;
        }
        break;
    }
  }
  return v6;
}
