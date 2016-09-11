int sub_803995C()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(12 * v2024A60 + 0x2017814) )
  {
    if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) )
    {
      *(_BYTE *)(12 * v2024A60 + 0x2017814) = 0;
      audio_play_and_stuff(16, 63);
      dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_8010384;
      dword_3004330[v2024A60] = (int)sub_8037B78;
    }
  }
  else
  {
    if ( *(_BYTE *)(4 * v2024A60 + 0x2017800) & 4 )
      move_anim_start_t4(v2024A60, v2024A60, v2024A60, 5u);
    ++*(_BYTE *)(12 * v2024A60 + 0x2017814);
  }
  return v1;
}
