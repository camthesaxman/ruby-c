int __fastcall sub_8092508(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@3
  unsigned __int8 v3; // r0@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 1 )
  {
    if ( *(_WORD *)(v202FFB4 + 1548) )
    {
      *(_BYTE *)(v202FFB4 + 1615) = 1;
      v2 = sub_8092E10(a1, 5);
      *(_WORD *)(v202FFB4 + 1554) = v2;
      v3 = sub_8092E10(v1, 4);
      *(_WORD *)(v202FFB4 + 1558) = v3;
      dword_3004B20[10 * v1] = (int)sub_80927B8;
      audio_play(3u);
    }
    else
    {
      dword_3004B20[10 * a1] = (int)sub_809217C;
      audio_play(0x17u);
    }
  }
  return v5;
}
