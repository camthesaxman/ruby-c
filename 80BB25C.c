int __fastcall sub_80BB25C(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r0@5
  unsigned int v4; // [sp+4h] [bp-20h]@1
  unsigned int v5; // [sp+8h] [bp-1Ch]@1
  unsigned int v6; // [sp+Ch] [bp-18h]@3
  unsigned int v7; // [sp+10h] [bp-14h]@3
  int v8; // [sp+20h] [bp-4h]@5

  v1 = a1;
  SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
  InitMenuWindow();
  word_3005D34 = 1;
  ResetSpriteData();
  FreeAllSpritePalettes();
  v4 = ((v4 & 0xFFFF0000 | 0x2000) & 0xFF00FFFF | 0x1D0000) & 0xFFFFFF | 0xC000000;
  v5 = (v5 & 0xFFFF00FF | 0x1E00) & 0xFFFFFF00 | 4;
  byte_3005E98 = 0;
  while ( !(sub_8119E3C(&v4, 3) << 24) )
    ;
  v6 = (v6 & 0xFF000000 | 0xF0000) & 0xFFFFFF | 0xD000000;
  v7 = (v7 & 0xFFFFFF00 | 0xC) & 0xFFFF00FF | 0xC00;
  byte_3005E98 = 0;
  while ( !(sub_811A3CC(&v6, 2) << 24) )
    ;
  v2 = MenuDrawTextWindow(0, 0x10u);
  sub_80BB494(v2);
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  v4000018 = 0;
  v400001A = 0;
  v400000C = 3841;
  v400000E = 7427;
  v4000000 = 7488;
  sub_81DE0D0(&unk_3007380, 2);
  dword_3004B20[10 * v1] = (int)sub_80BB3B4;
  return v8;
}
