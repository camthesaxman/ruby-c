int __fastcall sub_80D8FC0(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  word_3004B00[LOBYTE(word_3004B00[0])] = ((unsigned __int64)*(_BYTE *)(v202F7B4 + 17) >> 4)
                                        - (*(_BYTE *)(v202F7B4 + 17) & 0xF)
                                        - 1;
  move_anim_task_del(a1);
  return v2;
}
