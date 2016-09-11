int __fastcall sub_80FE2EC(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r7@1
  int v3; // r0@3
  int v4; // r0@5
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( word_300179E & 0x40 )
    {
      audio_play(5u);
      v3 = MoveMenuCursor(-1);
      v20388D4 = v3;
      sub_80FE394(v3);
    }
    if ( word_300179E & 0x80 )
    {
      audio_play(5u);
      v4 = MoveMenuCursor(1);
      v20388D4 = v4;
      sub_80FE394(v4);
    }
    if ( word_300179E & 1 )
    {
      audio_play(5u);
      call_via_r1(v1, *(&off_83EC608 + 2 * v20388D4));
    }
    else if ( word_300179E & 2 )
    {
      audio_play(5u);
      gpu_pal_decompress_alloc_tag_and_upload(v2);
    }
  }
  return v6;
}
