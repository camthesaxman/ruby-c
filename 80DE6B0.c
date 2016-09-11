int __fastcall sub_80DE6B0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v3; // r6@1
  signed int v4; // r0@1
  __int16 v5; // r1@8
  signed __int16 v6; // r0@8
  char *v7; // r0@12
  __int16 v8; // r1@13
  signed __int16 v9; // r3@13
  int v11; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = (unsigned __int8)battle_get_per_side_status_permutated(v202F7C9);
  v4 = *((_WORD *)v2 + 19);
  if ( v4 == 1 )
  {
    BlendPalette(*((_WORD *)v2 + 8), 0x10u, 0, 15373);
  }
  else if ( v4 > 1 )
  {
    if ( v4 == 2 )
    {
      v7 = &gSprites[68 * *((_WORD *)v2 + 18) + 62];
      *v7 |= 4u;
      obj_delete_but_dont_free_vram((int)&gSprites[68 * *((_WORD *)v2 + 4)]);
      FreeSpritePaletteByTag(0x2771u);
      v4000050 = 0;
      v4000052 = 0;
      if ( v3 == 1 )
      {
        v8 = v4000000;
        v9 = 512;
      }
      else
      {
        v8 = v4000000;
        v9 = 1024;
      }
      v4000000 = v8 | v9;
      move_anim_task_del(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 19) )
  {
    byte_3004DD5 = 3;
    *((_WORD *)v2 + 18) = (unsigned __int8)obj_id_for_side_relative_to_move(1);
    if ( v3 == 1 )
    {
      v5 = v4000000;
      v6 = -513;
    }
    else
    {
      v5 = v4000000;
      v6 = -1025;
    }
    v4000000 = v6 & v5;
  }
  ++*((_WORD *)v2 + 19);
  return v11;
}
