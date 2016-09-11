int __fastcall task_new_game_prof_birch_speech_part2_10(unsigned __int8 a1)
{
  int *v1; // r3@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( gSprites[68 * *((_BYTE *)v1 + 12) + 63] & 0x20 )
    *v1 = (int)sub_800AFC0;
  return v3;
}
