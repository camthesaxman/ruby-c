int __fastcall task_intro_10(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  intro_reset_and_hide_bgs();
  LZ77UnCompVram(&gUnknown_08409C04, 100663296);
  LZ77UnCompVram(&gUnknown_08409AD4, 100679680);
  LoadPalette((int)&gUnknown_084098D4, 0, 512);
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 4) = 0;
  *((_WORD *)v2 + 5) = 0;
  *((_WORD *)v2 + 6) = 0;
  *((_WORD *)v2 + 7) = 0;
  sub_813CE30(120, 80, 0, 0);
  ResetSpriteData();
  FreeAllSpritePalettes();
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, -1);
  v400000C = 18563;
  v4000000 = 5185;
  *v2 = (int)task_intro_11;
  dword_3005ED0 = 0;
  m4aSongNumStart(442);
  return v4;
}
