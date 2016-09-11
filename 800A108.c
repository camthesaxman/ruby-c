int PrintSaveFileInfo()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v0 = PrintPlayerName();
  v1 = PrintPokedexCount(v0);
  v2 = PrintPlayTime(v1);
  PrintBadgeCount(v2);
  return v4;
}
