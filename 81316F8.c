int __fastcall sub_81316F8(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r10@1
  int v4; // r7@2
  int v5; // r0@3
  char *v6; // r4@6
  char *v7; // r2@6
  int *v8; // r3@6
  int v10; // [sp+1Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( !(unsigned __int8)sub_8076BE0() )
  {
    v4 = (signed __int16)duplicate_obj_of_side_rel2move_in_transparent_mode(1u);
    if ( v4 >= 0 )
    {
      v5 = (signed __int16)duplicate_obj_of_side_rel2move_in_transparent_mode(1u);
      if ( (signed __int16)v5 >= 0 )
      {
        v6 = &gSprites[68 * v5];
        *((_WORD *)v6 + 18) += 24;
        v7 = &gSprites[68 * v4];
        *((_WORD *)v7 + 18) -= 24;
        *((_WORD *)v6 + 23) = 0;
        *((_WORD *)v7 + 23) = 0;
        *((_WORD *)v6 + 24) = 0;
        *((_WORD *)v7 + 24) = 0;
        *((_WORD *)v6 + 25) = 0;
        *((_WORD *)v7 + 25) = 0;
        *((_WORD *)v6 + 26) = 16;
        *((_WORD *)v7 + 26) = -16;
        *((_WORD *)v6 + 27) = 0;
        *((_WORD *)v7 + 27) = 128;
        *((_WORD *)v6 + 28) = 24;
        *((_WORD *)v7 + 28) = 24;
        *((_WORD *)v6 + 29) = v3;
        *((_WORD *)v7 + 29) = v3;
        *((_WORD *)v6 + 30) = 0;
        *((_WORD *)v7 + 30) = 0;
        v8 = &dword_3004B20[10 * v3];
        *((_WORD *)v8 + 4) = 2;
        v6[62] &= 0xFBu;
        v7[62] |= 4u;
        v6[1] &= 0xF3u;
        v7[1] &= 0xF3u;
        dword_2020020[17 * v5] = (int)sub_8131838;
        dword_2020020[17 * v4] = (int)sub_8131838;
        *v8 = (int)sub_8131810;
        return v10;
      }
      obj_delete_but_dont_free_vram((int)&gSprites[68 * v4]);
    }
  }
  move_anim_task_del(v2);
  return v10;
}
