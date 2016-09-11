signed int __fastcall FieldEffectCmd_loadtiles(_DWORD *a1)
{
  ++*a1;
  FieldEffectScript_LoadTiles();
  return 1;
}
