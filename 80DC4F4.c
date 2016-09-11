int __fastcall sub_80DC4F4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  unsigned __int8 v2; // r8@1
  int *v3; // r7@1
  unsigned int v4; // r0@1
  unsigned int v5; // r5@1
  unsigned int v6; // r10@1
  unsigned int v7; // r6@1
  signed int v8; // r0@3
  unsigned int v9; // r9@3
  signed int v10; // r0@3
  char *v11; // r4@5
  int v13; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  v3 = &dword_3004B20[10 * a1];
  v4 = AllocOamMatrix() << 24;
  v5 = v4 >> 24;
  v6 = v4 >> 24;
  v7 = v4 >> 24;
  if ( v4 >> 24 == 255 )
  {
    move_anim_task_del(v1);
  }
  else
  {
    v8 = duplicate_obj_of_side_rel2move_in_transparent_mode(word_3004B00[0]) << 16;
    v9 = (unsigned int)v8 >> 16;
    v10 = v8 >> 16;
    if ( v10 >= 0 )
    {
      dword_2020020[17 * v10] = (int)SpriteCallbackDummy;
      v11 = &gSprites[68 * v10];
      v11[1] |= 3u;
      v11[3] = v11[3] & 0xC1 | 2 * (v7 & 0x1F);
      v11[44] |= 0x80u;
      ++v11[67];
      obj_id_set_rotscale(v9, 0x100u, 256, 0);
      CalcCenterToCornerVec(
        (int)v11,
        (unsigned int)(unsigned __int8)v11[1] >> 6,
        (unsigned int)(unsigned __int8)v11[3] >> 6,
        v11[1] & 3);
      *((_WORD *)v3 + 17) = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
      *((_WORD *)v3 + 18) = v6;
      *((_WORD *)v3 + 19) = v9;
      *v3 = (int)sub_80DC5F4;
    }
    else
    {
      FreeOamMatrix(v5);
      move_anim_task_del(v2);
    }
  }
  return v13;
}
