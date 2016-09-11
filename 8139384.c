int sub_8139384()
{
  int v0; // r0@5
  int v2; // [sp+8h] [bp-4h]@0

  if ( v20160A9 )
  {
    if ( v20160A9 != 1 )
      return v2;
  }
  else
  {
    sub_80304A8();
    ++v20160A9;
    v20160AB = 80;
  }
  v0 = v20160AB - 1;
  --v20160AB;
  if ( !(v0 << 24) )
  {
    sub_814A7FC(0);
    audio_play(5u);
    dp01_build_cmdbuf_x21_a_bb(1u, 10, 256);
    dp01_tbl5_exec_completed();
  }
  return v2;
}
