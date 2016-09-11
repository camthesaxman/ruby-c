int NamingScreen_ResetObjects()
{
  int v1; // [sp+0h] [bp-4h]@0

  ResetPaletteFade();
  ResetSpriteData();
  FreeAllSpritePalettes();
  ResetTasks();
  return v1;
}
