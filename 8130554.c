int __fastcall sub_8130554(unsigned __int8 a1)
{
  unsigned __int8 v1; // r9@1
  int *v2; // r7@1
  __int16 v3; // r4@1
  signed int v4; // r0@1
  __int16 v5; // r5@3
  __int16 v6; // r6@3
  int v7; // r0@3
  int v9; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 15) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *((_WORD *)v2 + 16) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *((_WORD *)v2 + 17) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  v3 = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  v4 = (signed __int16)sub_807A100(v202F7C9, 0);
  if ( (signed __int16)v4 < 0 )
    v4 += 3;
  *((_WORD *)v2 + 18) = v3 + (v4 >> 2);
  v5 = *((_WORD *)v2 + 15);
  v6 = *((_WORD *)v2 + 16);
  sub_8079E90(v202F7C9);
  v7 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_84029AC, v5, v6);
  *((_WORD *)v2 + 19) = v7;
  if ( v7 == 64 )
  {
    move_anim_task_del(v1);
  }
  else
  {
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 46] = 16;
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 50] = *((_WORD *)v2 + 17);
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 54] = *((_WORD *)v2 + 18);
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 56] = -32;
    sub_80786EC((int)&gSprites[68 * *((_WORD *)v2 + 19)]);
    if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 )
      StartSpriteAffineAnim((int)&gSprites[68 * *((_WORD *)v2 + 19)], 1);
    *v2 = (int)sub_81306A4;
  }
  return v9;
}
