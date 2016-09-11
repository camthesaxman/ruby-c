int __fastcall sub_80DE1B0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  __int16 v3; // r0@1
  char *v4; // r0@4
  signed __int16 v5; // r1@4
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = duplicate_obj_of_side_rel2move_in_transparent_mode(1u);
  *((_WORD *)v2 + 4) = v3;
  if ( v3 & 0x8000 )
  {
    move_anim_task_del(v1);
  }
  else
  {
    *((_WORD *)v2 + 5) = 0;
    *((_WORD *)v2 + 6) = 15;
    *((_WORD *)v2 + 7) = 2;
    *((_WORD *)v2 + 8) = 0;
    v4000050 = 16192;
    v4000052 = (*((_WORD *)v2 + 7) << 8) | *((_WORD *)v2 + 6);
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 46] = 80;
    if ( battle_side_get_owner(v202F7C9) << 24 )
    {
      *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 48] = 144;
      v4 = &gSprites[68 * *((_WORD *)v2 + 4)];
      v5 = -112;
    }
    else
    {
      *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 48] = -144;
      v4 = &gSprites[68 * *((_WORD *)v2 + 4)];
      v5 = 112;
    }
    *((_WORD *)v4 + 25) = v5;
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 52] = 0;
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 54] = 0;
    oamt_set_x3A_32((int)&gSprites[68 * *((_WORD *)v2 + 4)], (int)SpriteCallbackDummy);
    dword_2020020[17 * *((_WORD *)v2 + 4)] = (int)sub_8078394;
    *v2 = (int)sub_80DE2DC;
  }
  return v7;
}
