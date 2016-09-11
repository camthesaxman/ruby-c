int sub_8143570()
{
  int v1; // [sp+4h] [bp-4h]@0

  remove_some_task();
  ResetTasks();
  ResetSpriteData();
  FreeAllSpritePalettes();
  gReservedSpritePaletteCount = 8;
  LoadCompressedObjectPic(&gUnknown_0840B514);
  LoadCompressedObjectPalette(&gUnknown_0840B524);
  SetUpWindowConfig((int)&gWindowConfig_81E71B4);
  InitMenuWindow();
  return v1;
}
