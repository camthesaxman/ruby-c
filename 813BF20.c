int __fastcall task_intro_6(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  intro_reset_and_hide_bgs();
  SetVBlankCallback(0);
  ResetSpriteData();
  FreeAllSpritePalettes();
  v2039358 = 0;
  v203935A = 0;
  load_intro_part2_graphics(1);
  dword_3004B20[10 * v1] = (int)sub_813BF70;
  return v3;
}
