int __fastcall move_anim_start_t2_for_situation(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h]@0

  *(_BYTE *)(12 * v2024A60 + 0x2017810) |= 0x10u;
  if ( a1 << 24 )
  {
    if ( a2 & 0xF0000 )
    {
      move_anim_start_t2(v2024A60, 3);
      return v3;
    }
    if ( a2 & 7 )
    {
      move_anim_start_t2(v2024A60, 1);
      return v3;
    }
    if ( a2 & 0x10000000 )
    {
      move_anim_start_t2(v2024A60, 7);
      return v3;
    }
    if ( a2 & 0x8000000 )
    {
      move_anim_start_t2(v2024A60, 8);
      return v3;
    }
    if ( a2 & 0xE000 )
    {
      move_anim_start_t2(v2024A60, 9);
      return v3;
    }
    goto _080314AE;
  }
  if ( a2 != 32 )
  {
    if ( a2 == 8 || a2 & 0x80 )
    {
      move_anim_start_t2(v2024A60, 0);
      return v3;
    }
    if ( a2 == 16 )
    {
      move_anim_start_t2(v2024A60, 2);
      return v3;
    }
    if ( a2 & 7 )
    {
      move_anim_start_t2(v2024A60, 4);
      return v3;
    }
    if ( a2 == 64 )
    {
      move_anim_start_t2(v2024A60, 5);
      return v3;
    }
_080314AE:
    *(_BYTE *)(12 * v2024A60 + 0x2017810) &= 0xEFu;
    return v3;
  }
  move_anim_start_t2(v2024A60, 6);
  return v3;
}
