int CB2_NewGame()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = do_load_map_stuff_loop(&byte_3001BAC);
  SetFieldVBlankCallback(v0);
  set_callback1((int)c1_overworld);
  SetMainCallback2((int)c2_overworld);
  return v2;
}
