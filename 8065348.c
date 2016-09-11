int __fastcall LoadMessageBoxTiles(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  CpuFastSet(
    &gMessageBox_Gfx,
    *(_DWORD *)(*(_DWORD *)(a1 + 44) + 16) + 32 * (unsigned __int16)sMessageBoxBaseTileNum,
    112);
  return v2;
}
