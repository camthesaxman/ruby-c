int __fastcall c3_80DFBE4(unsigned __int8 a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  word_3004B0E = (unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0) + 62] << 29 >> 31;
  move_anim_task_del(a1);
  return v2;
}
