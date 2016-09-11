int __fastcall sub_8079790(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r3@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  if ( v2 == 255 )
  {
    move_anim_task_del(v1);
  }
  else
  {
    LOWORD(dword_3004B20[10 * v1 + 2]) = 16 * ((unsigned int)(unsigned __int8)gSprites[68 * v2 + 5] >> 4) + 257;
    sub_80797EC();
  }
  return v4;
}
