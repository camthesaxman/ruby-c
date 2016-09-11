int __fastcall sub_80DE3D4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  int v3; // r6@1
  unsigned int v4; // r0@1
  int v5; // r0@3
  __int16 v6; // r0@4
  char *v7; // r1@7
  char *v8; // r1@7
  char *v9; // r0@7
  __int16 v10; // r1@8
  signed __int16 v11; // r0@8
  char *v12; // r0@12
  int v13; // r2@12
  unsigned __int8 v14; // r0@15
  signed __int16 v15; // r0@19
  __int16 v16; // r1@23
  signed __int16 v17; // r3@23
  int v19; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = (unsigned __int8)battle_get_per_side_status_permutated(v202F7C9);
  v4 = *((_WORD *)v2 + 19);
  if ( v4 > 4 )
  {
def_80DE408:
    ++*((_WORD *)v2 + 19);
  }
  else
  {
    switch ( v4 )
    {
      case 0u:
        v5 = (unsigned __int8)AllocSpritePalette(10097);
        *((_WORD *)v2 + 18) = v5;
        if ( v5 == 255 )
          goto _080DE456;
        v6 = duplicate_obj_of_side_rel2move_in_transparent_mode(1u);
        *((_WORD *)v2 + 4) = v6;
        if ( !(v6 & 0x8000) )
        {
          v7 = &gSprites[68 * *((_WORD *)v2 + 4)];
          v7[5] = v7[5] & 0xF | 16 * *((_WORD *)v2 + 18);
          v8 = &gSprites[68 * *((_WORD *)v2 + 4)];
          v8[1] &= 0xF3u;
          v9 = &gSprites[68 * *((_WORD *)v2 + 4)];
          v9[5] |= 0xCu;
          *((_WORD *)v2 + 5) = 0;
          *((_WORD *)v2 + 6) = 0;
          *((_WORD *)v2 + 7) = 16;
          *((_WORD *)v2 + 17) = (unsigned __int8)obj_id_for_side_relative_to_move(1);
          *((_WORD *)v2 + 8) = 16 * (((unsigned int)(unsigned __int8)gSprites[68 * *((_WORD *)v2 + 17) + 5] >> 4) + 16);
          if ( v3 == 1 )
          {
            v10 = v4000000;
            v11 = -513;
          }
          else
          {
            v10 = v4000000;
            v11 = -1025;
          }
          v4000000 = v11 & v10;
          goto def_80DE408;
        }
        FreeSpritePaletteByTag(0x2771u);
_080DE456:
        move_anim_task_del(v1);
        break;
      case 1u:
        *((_WORD *)v2 + 18) = 16 * (*((_WORD *)v2 + 18) + 16);
        CpuSet(2 * *((_WORD *)v2 + 8) + 33745608, 2 * *((_WORD *)v2 + 18) + 33746632, 67108872);
        BlendPalette(*((_WORD *)v2 + 8), 0x10u, 0xAu, 15373);
        goto def_80DE408;
      case 2u:
        v12 = &gSprites[68 * *((_WORD *)v2 + 17)];
        v13 = (*((_WORD *)v12 + 19) + *((_WORD *)v12 + 17) - 32) & 0xFFFF;
        if ( (*((_WORD *)v12 + 19) + *((_WORD *)v12 + 17) - 32) & 0x8000 )
          LOBYTE(v13) = 0;
        if ( v3 == 1 )
          v14 = sub_8089944(v13, v13 + 64, 2u, 6u, 0, 4u, 1u);
        else
          v14 = sub_8089944(v13, v13 + 64, 2u, 6u, 0, 8u, 1u);
        *((_WORD *)v2 + 14) = v14;
        goto def_80DE408;
      case 3u:
        if ( v3 == 1 )
          v15 = 16194;
        else
          v15 = 16196;
        v4000050 = v15;
        v4000052 = 4096;
        goto def_80DE408;
      case 4u:
        if ( v3 == 1 )
        {
          v16 = v4000000;
          v17 = 512;
        }
        else
        {
          v16 = v4000000;
          v17 = 1024;
        }
        v4000000 = v16 | v17;
        *v2 = (int)sub_80DE61C;
        goto def_80DE408;
      default:
        goto def_80DE408;
    }
  }
  return v19;
}
