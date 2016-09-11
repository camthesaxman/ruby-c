int __fastcall sub_8144080(unsigned __int8 a1)
{
  int *v1; // r4@2
  int v3; // [sp+8h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    v1 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v1 + 4) && !word_300179E )
    {
      if ( *((_WORD *)v1 + 4) == 7144 )
        play_sound_effect(8u);
      if ( *((_WORD *)v1 + 4) == 6840 )
        m4aSongNumStart(456);
      --*((_WORD *)v1 + 4);
    }
    else
    {
      play_sound_effect(4u);
      BeginNormalPaletteFade(-1, 8, 0, 0x10u, -1);
      *v1 = (int)sub_8144114;
    }
  }
  return v3;
}
