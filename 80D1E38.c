int __fastcall sub_80D1E38(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r4@1
  int *v3; // r5@1
  __int16 v4; // r0@1
  unsigned __int8 v5; // r0@2
  char *v6; // r4@3
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)obj_id_for_side_relative_to_move(1);
  v3 = &dword_3004B20[10 * v1];
  v4 = *((_WORD *)v3 + 4) + 1;
  *((_WORD *)v3 + 4) = v4;
  if ( v4 == 1 )
  {
    v5 = obj_id_for_side_relative_to_move(1);
    sub_80798F4((int)&dword_3004B20[10 * v1], v5);
    *(_WORD *)&gSprites[68 * v2 + 36] = 4;
  }
  else
  {
    v6 = &gSprites[68 * v2];
    *((_WORD *)v6 + 18) = -*((_WORD *)v6 + 18);
    if ( !(unsigned __int8)sub_807992C((int)&dword_3004B20[10 * v1]) )
    {
      *((_WORD *)v6 + 18) = 0;
      *((_WORD *)v6 + 19) = 0;
      move_anim_task_del(v1);
    }
  }
  return v8;
}
