int __fastcall FreeSpritePalette(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  FreeSpritePaletteByTag(*(_WORD *)(*(_DWORD *)(a1 + 20) + 2));
  return v2;
}
