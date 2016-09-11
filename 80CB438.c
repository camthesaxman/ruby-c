int __fastcall sub_80CB438(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  int v2; // r2@2
  int *v3; // r6@2
  int *v4; // r4@2
  unsigned __int8 v5; // r0@3
  int v6; // r4@3
  char *v7; // r0@3
  int v8; // r1@5
  __int16 v9; // r0@5
  int v11; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int16)word_3004B0E == 0xFFFF )
  {
    v2 = 4 * a1;
    v3 = &dword_3004B20[10 * a1];
    v4 = dword_3004B20;
    if ( !*((_WORD *)v3 + 4) )
    {
      v5 = obj_id_for_side_relative_to_move(1);
      v6 = v5;
      sub_8078F40(v5);
      v7 = &gSprites[68 * v6];
      *((_WORD *)v7 + 18) = 0;
      *((_WORD *)v7 + 19) = 0;
      ++*((_WORD *)v3 + 4);
      return v11;
    }
  }
  else
  {
    v2 = 4 * a1;
    v4 = dword_3004B20;
    if ( !LOWORD(dword_3004B20[10 * a1 + 2]) )
      return v11;
  }
  v8 = (int)&v4[2 * (v2 + a1)];
  v9 = *(_WORD *)(v8 + 8) + 1;
  *(_WORD *)(v8 + 8) = v9;
  if ( v9 == 3 )
    move_anim_task_del(v1);
  return v11;
}
