int sub_802FB2C()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(12 * v2024A60 + 0x2017814) )
  {
    if ( *(_BYTE *)(12 * v2024A60 + 0x2017814) == 1 && !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) )
    {
      *(_BYTE *)(12 * v2024A60 + 0x2017814) = 0;
      move_anim_start_t4(v2024A60, v2024A60);
      dword_3004330[v2024A60] = (int)sub_802DEAC;
    }
  }
  else
  {
    if ( *(_BYTE *)(4 * v2024A60 + 0x2017800) & 4 )
      move_anim_start_t4(v2024A60, v2024A60);
    *(_BYTE *)(12 * v2024A60 + 0x2017814) = 1;
  }
  return v1;
}
