int sub_81365C8()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(v2039304 + 80) )
  {
    if ( *(_BYTE *)(v2039304 + 80) == 1 && !(v202F38F & 0x80) )
    {
      sub_80F3C94();
      sub_80F3D00();
      launch_c3_walk_stairs_and_run_once((int)sub_8136638);
    }
  }
  else
  {
    BeginNormalPaletteFade(-1, 0, 0x10u, 0, *(_BYTE *)(v2039304 + 80));
    SetVBlankCallback((int)sub_8136264);
    ++*(_BYTE *)(v2039304 + 80);
  }
  return v1;
}
