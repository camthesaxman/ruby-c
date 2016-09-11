int __fastcall unref_sub_80AB084(int a1)
{
  int v1; // r8@1
  signed int v2; // r2@1
  unsigned int v3; // r3@1
  int v5; // [sp+4h] [bp-1Ch]@2
  int v6; // [sp+1Ch] [bp-4h]@3

  v1 = a1;
  v4000010 = 0;
  v4000012 = 0;
  v4000014 = 0;
  v4000016 = 0;
  v4000018 = 0;
  v400001A = 0;
  v400001C = 0;
  v400001E = 0;
  v4000040 = 0;
  v4000044 = 0;
  v4000042 = 0;
  v4000046 = 0;
  v4000000 = 8000;
  v4000200 |= 1u;
  v4000004 = 8;
  ResetTasks();
  ResetSpriteData();
  SetMainCallback2((int)sub_80AB184);
  v2 = 100663296;
  v3 = 98304;
  do
  {
    v5 = 0;
    v40000D4 = &v5;
    v40000D8 = v2;
    v40000DC = -2063596544;
    v2 += 4096;
    v3 -= 4096;
  }
  while ( v3 > 0x1000 );
  v5 = 0;
  v40000D4 = &v5;
  v40000D8 = v2;
  v40000DC = (v3 >> 2) | 0x85000000;
  SetUpWindowConfig((int)&gWindowConfig_81E6FD8);
  InitWindowFromConfig((int)&unk_3004210, (int)&gWindowConfig_81E6FD8);
  LoadFontDefaultPalette((int)&gWindowConfig_81E6FD8);
  sub_8003460((int)&unk_3004210, v1, 1, 9, 7u);
  return v6;
}
