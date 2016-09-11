int __fastcall sub_80924A4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(mplay_has_finished_maybe() << 24) )
  {
    if ( *(_WORD *)(v202FFB4 + 1548) )
    {
      audio_play(0x1Fu);
      sub_8091E20((int)"ÍÙÕæ×Ü");
    }
    else
    {
      audio_play(0x20u);
      sub_8091E20((int)&gUnknown_0840E093);
    }
    dword_3004B20[10 * v1] = (int)sub_8092508;
  }
  return v3;
}
