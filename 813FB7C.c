int __fastcall sub_813FB7C(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_WORD *)&gSprites[68 * LOBYTE(dword_3004B20[10 * a1 + 2]) + 46] == 0xFFFF )
    move_anim_task_del(a1);
  return v2;
}
