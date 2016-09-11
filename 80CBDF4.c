int __fastcall sub_80CBDF4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r5@1
  char v3; // r0@1
  signed __int16 v4; // r1@1
  int v5; // r1@3
  int v6; // r3@3
  int v7; // r0@3
  int v9; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 8) = (unsigned __int8)sub_8079E90(v202F7C9) - 1;
  *((_WORD *)v2 + 10) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *((_WORD *)v2 + 11) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  *((_WORD *)v2 + 14) = sub_807A100(v202F7C9, 1u);
  *((_WORD *)v2 + 15) = sub_807A100(v202F7C9, 0);
  v3 = battle_side_get_owner(v202F7C9);
  v4 = -1;
  if ( v3 == 1 )
    v4 = 1;
  *((_WORD *)v2 + 9) = v4;
  v5 = 56 - (*((_WORD *)v2 + 9) << 6);
  *((_WORD *)v2 + 13) = v5;
  *((_WORD *)v2 + 12) = *((_WORD *)v2 + 11) - v5 + *((_WORD *)v2 + 10);
  v6 = *((_BYTE *)v2 + 16);
  v7 = (unsigned __int8)CreateSprite((int)"O'O',ß7\bhh=\b", *((_WORD *)v2 + 12), *((_WORD *)v2 + 13));
  *((_WORD *)v2 + 6) = v7;
  if ( v7 == 64 )
    move_anim_task_del(v1);
  *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 6) + 46] = 10;
  *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 6) + 48] = *((_WORD *)v2 + 12);
  *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 6) + 50] = *((_WORD *)v2 + 10)
                                                    - *((_WORD *)v2 + 9) * (*((_WORD *)v2 + 14) / 2 + 10);
  *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 6) + 52] = *((_WORD *)v2 + 13);
  *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 6) + 54] = (*((_WORD *)v2 + 15) / 2 + 10) * *((_WORD *)v2 + 9)
                                                    + *((_WORD *)v2 + 11);
  *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 6) + 56] = sub_80CC338(&gSprites[68 * *((_WORD *)v2 + 6)]);
  sub_80786EC((int)&gSprites[68 * *((_WORD *)v2 + 6)]);
  *v2 = (int)sub_80CBF5C;
  return v9;
}
