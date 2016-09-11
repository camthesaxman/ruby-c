char *map_music_set_to_zero()
{
  char *result; // r0@1

  word_30006D4 = 0;
  word_30006D6 = 0;
  byte_30006D8 = 0;
  result = &byte_30006D9;
  byte_30006D9 = 0;
  return result;
}
