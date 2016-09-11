int __fastcall task_intro_1(unsigned __int8 a1)
{
  int v1; // r8@1
  unsigned __int8 v2; // r0@1
  int *v3; // r1@1
  __int16 v5; // [sp+8h] [bp-18h]@1
  int v6; // [sp+1Ch] [bp-4h]@1

  v1 = a1;
  SetVBlankCallback(0);
  v2039318 = Random() & 1;
  v2039318 = v2039318;
  intro_reset_and_hide_bgs();
  v400001E = 0;
  v400001A = 80;
  v4000016 = 24;
  v4000012 = 40;
  LZ77UnCompVram(&gUnknown_08407764, 100663296);
  LZ77UnCompVram(&gUnknown_08406B74, 100696064);
  v5 = 0;
  v40000D4 = &v5;
  v40000D8 = 100698112;
  v40000DC = -2130705408;
  LZ77UnCompVram(&gUnknown_08406F28, 100700160);
  v5 = 0;
  v40000D4 = &v5;
  v40000D8 = 100702208;
  v40000DC = -2130705408;
  LZ77UnCompVram(&gUnknown_0840725C, 100704256);
  v5 = 0;
  v40000D4 = &v5;
  v40000D8 = 100706304;
  v40000DC = -2130705408;
  LZ77UnCompVram(&gUnknown_0840754C, 100708352);
  v5 = 0;
  v40000D4 = &v5;
  v40000D8 = 100710400;
  v40000DC = -2130705408;
  LoadPalette((int)&gUnknown_08406974, 0, 512);
  v400000E = -27133;
  v400000C = -27646;
  v400000A = -28159;
  v4000008 = -28672;
  LoadCompressedObjectPic((_DWORD *)"Äc@\b");
  LoadCompressedObjectPic(&gUnknown_0840B018);
  LoadSpritePalettes((int)"@c@\b–\a");
  CpuSet(33746120, 33746600, 16);
  CpuSet(33746120, 33746570, 15);
  CpuSet(33746120, 33746540, 14);
  CpuSet(33746120, 33746510, 13);
  CpuSet(33746120, 33746480, 12);
  CpuSet(33746120, 33746450, 11);
  CpuSet(33746120, 33746420, 10);
  v2 = sub_813D584(236, -14, 512, 1);
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 4) = v2;
  *v3 = (int)task_intro_2;
  return v6;
}
