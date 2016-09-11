int __fastcall sub_80CE910(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  __int16 v2; // r1@3
  signed __int16 v3; // r3@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !HIWORD(dword_3004B20[10 * a1 + 3]) )
  {
    if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8) == 1 )
    {
      v2 = v4000000;
      v3 = 512;
    }
    else
    {
      v2 = v4000000;
      v3 = 1024;
    }
    v4000000 = v2 | v3;
    FreeSpritePaletteByTag(0x2771u);
    move_anim_task_del(v1);
  }
  return v5;
}
