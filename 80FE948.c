int __fastcall sub_80FE948(unsigned __int8 a1)
{
  int v1; // r4@1
  void **v2; // r0@14
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( (word_30017A0 & 0xF0) == 64 )
    {
      if ( v20388F2 )
      {
        sub_80FE894(a1, -1, 0);
      }
      else if ( v20388F4 )
      {
        sub_80FE894(a1, 0, 0xFFu);
      }
    }
    if ( (word_30017A0 & 0xF0) == 128 )
    {
      if ( v20388F2 == v20388F3 )
      {
        if ( v20388F4 + v20388F2 != v20388D5 )
          sub_80FE894(v1, 0, 1u);
      }
      else
      {
        sub_80FE894(v1, 1, 0);
      }
    }
    if ( word_300179E & 1 )
    {
      sub_8072DEC(word_300179E & 1);
      audio_play(5u);
      v20388F5 = v20388F4 + v20388F2;
      if ( (unsigned __int8)(v20388F4 + v20388F2) == v20388D5 )
        v2 = &off_83EC638 + 2 * HIWORD(dword_3004B20[10 * v1 + 7]);
      else
        v2 = &gUnknown_083EC634 + 2 * HIWORD(dword_3004B20[10 * v1 + 7]);
      call_via_r1(v1, *v2);
    }
    else if ( word_300179E & 2 )
    {
      sub_8072DEC(word_300179E & 2);
      audio_play(5u);
      call_via_r1(v1, *(&off_83EC638 + 2 * HIWORD(dword_3004B20[10 * v1 + 7])));
    }
  }
  return v4;
}
