int sub_811FCE8()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(12 * v2024A60 + 0x2017814) )
  {
    if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) )
    {
      *(_BYTE *)(12 * v2024A60 + 0x2017814) = 0;
      sub_80324F8((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], v2024A60);
      audio_play_and_stuff(0x10u, -64);
      *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 48] = 0;
      *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 50] = 5;
      dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_80105EC;
      dword_3004330[v2024A60] = (int)sub_811DE98;
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
