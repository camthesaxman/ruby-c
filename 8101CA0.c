int sub_8101CA0()
{
  int v1; // [sp+0h] [bp-4h]@0

  ResetPaletteFade();
  ResetSpriteData();
  gOamLimit = -128;
  FreeAllSpritePalettes();
  ResetTasks();
  return v1;
}
