int __fastcall sub_8116BC0(unsigned __int8 a1)
{
  int v2; // [sp+10h] [bp-4h]@0

  if ( !v20190A8 || v20190AA & (unsigned __int16)word_300179E )
  {
    dword_3004B20[10 * a1] = v20190AC;
    if ( v20190AA )
      audio_play(5u);
    v20190AC = 0;
    v20190AA = 0;
    v20190A8 = 0;
  }
  if ( v20190A8 != 0xFFFF )
    --v20190A8;
  return v2;
}
