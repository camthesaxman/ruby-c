int __fastcall sub_80D6E9C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  int *v2; // r5@1
  signed int v3; // r0@1
  signed __int16 v4; // r0@10
  __int16 v5; // r0@13
  char *v6; // r2@14
  __int16 v7; // r2@15
  __int16 v8; // r0@16
  char *v9; // r2@17
  __int16 v10; // r0@17
  char *v11; // r0@7
  int v13; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    v5 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v5;
    if ( v5 <= 1 )
      return v13;
    *((_WORD *)v2 + 5) = 0;
    v6 = &gSprites[68 * *((_WORD *)v2 + 19) + 62];
    *v6 = *v6 & 0xFB | 4 * (((unsigned int)(unsigned __int8)*v6 << 29 >> 31) ^ 1);
    if ( *((_WORD *)v2 + 18) )
    {
      v7 = *((_WORD *)v2 + 18) + *((_WORD *)v2 + 17);
      *((_WORD *)v2 + 18) = v7;
      *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = v7;
      return v13;
    }
    goto _080D6FD2;
  }
  if ( v3 <= 1 )
  {
    if ( *((_WORD *)v2 + 4) )
      return v13;
    *((_WORD *)v2 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
    *((_WORD *)v2 + 18) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
    if ( battle_side_get_owner(v202F7C8) << 24 )
    {
      *((_WORD *)v2 + 18) = 32;
      v4 = -2;
    }
    else
    {
      *((_WORD *)v2 + 18) = -32;
      v4 = 2;
    }
    *((_WORD *)v2 + 17) = v4;
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = *((_WORD *)v2 + 18);
    goto _080D6FD2;
  }
  if ( v3 == 2 )
  {
    v8 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v8;
    if ( v8 <= 1 )
      return v13;
    *((_WORD *)v2 + 5) = 0;
    v9 = &gSprites[68 * *((_WORD *)v2 + 19) + 62];
    *v9 = *v9 & 0xFB | 4 * (((unsigned int)(unsigned __int8)*v9 << 29 >> 31) ^ 1);
    v10 = *((_WORD *)v2 + 6) + 1;
    *((_WORD *)v2 + 6) = v10;
    if ( v10 != 8 )
      return v13;
_080D6FD2:
    ++*((_WORD *)v2 + 4);
    return v13;
  }
  if ( v3 == 3 )
  {
    v11 = &gSprites[68 * *((_WORD *)v2 + 19) + 62];
    *v11 &= 0xFBu;
    move_anim_task_del(v1);
  }
  return v13;
}
