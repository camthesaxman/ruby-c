_BOOL4 __fastcall is_light_level_8_or_9(int a1)
{
  return (unsigned int)((a1 << 24) - 0x8000000) >> 24 <= 1;
}
