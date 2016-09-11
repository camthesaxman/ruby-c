int __fastcall sub_80C6AAC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r1@1
  unsigned int v3; // r0@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 5) == 7 )
  {
    v3 = (signed __int16)(*((_WORD *)v2 + 4) - 632);
    if ( v3 <= 0x3B )
    {
      switch ( v3 )
      {
        case 0u:
          audio_play(0x3Eu);
          break;
        case 1u:
          audio_play(0x3Fu);
          break;
        case 2u:
          audio_play(0x40u);
          break;
        case 3u:
          audio_play(0x41u);
          break;
        case 4u:
          audio_play(0x42u);
          break;
        case 5u:
          audio_play(0x43u);
          break;
        case 6u:
          audio_play(0x44u);
          break;
        case 0x3Bu:
          audio_play(0x45u);
          break;
        default:
          break;
      }
    }
    DestroyTask(v1);
  }
  else
  {
    ++*((_WORD *)v2 + 5);
  }
  return v5;
}
