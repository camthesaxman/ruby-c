int __fastcall sub_80D0614(int a1, unsigned __int8 a2)
{
  int v2; // r7@1
  __int16 v3; // r9@1
  __int16 v4; // r0@1
  unsigned __int8 v5; // r8@1
  int v6; // r4@1
  unsigned __int8 v7; // r0@2
  int v8; // r3@4
  char *v9; // r4@4
  unsigned int v10; // r3@4
  int v12; // [sp+18h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = duplicate_obj_of_side_rel2move_in_transparent_mode(0);
  v5 = v4;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = AllocOamMatrix();
    if ( v7 == 255 )
    {
      obj_delete_but_dont_free_vram((int)&gSprites[68 * v6]);
    }
    else
    {
      v8 = 17 * v6;
      v9 = &gSprites[68 * v6];
      v9[1] = v9[1] & 0xF3 | 7;
      v9[44] |= 0x80u;
      v9[3] = v9[3] & 0xC1 | 2 * (v7 & 0x1F);
      v9[67] = *(_BYTE *)(v2 + 22) - *(_BYTE *)(v2 + 14);
      ++*(_WORD *)(v2 + 14);
      ++*(_WORD *)(v2 + 20);
      *((_WORD *)v9 + 23) = 16;
      *((_WORD *)v9 + 24) = v3;
      *((_WORD *)v9 + 25) = 6;
      dword_2020020[v8] = (int)sub_80D0704;
      obj_id_set_rotscale(v5, *(_WORD *)(v2 + 16), *(_WORD *)(v2 + 16), 0);
      v10 = (unsigned __int8)(v9[1] & 0xFC) | 1;
      v9[1] = v10;
      CalcCenterToCornerVec((int)v9, v10 >> 6, (unsigned int)(unsigned __int8)v9[3] >> 6, v10 & 3);
    }
  }
  return v12;
}
