int sub_804E144()
{
  int v0; // r0@1
  int v1; // r0@3
  int v3; // [sp+0h] [bp-4h]@0

  v0 = v202F38F & 0x80;
  if ( !(v202F38F & 0x80) )
    v0 = SetMainCallback2((int)sub_8047CD8);
  RunTasks(v0);
  AnimateSprites();
  v1 = BuildOamBuffer();
  UpdatePaletteFade(v1);
  return v3;
}
