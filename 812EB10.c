int __fastcall sub_812EB10(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r2@1
  _BYTE *v3; // r0@3
  unsigned __int8 v4; // r0@5
  int v5; // r5@5
  int *v6; // r6@5
  int v7; // r2@8
  unsigned __int16 v8; // r3@12
  int v9; // r0@15
  int v10; // r5@18
  __int16 v11; // r0@18
  __int16 v12; // r0@20
  char *v13; // r0@21
  int v15; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
  {
    if ( word_3004B00[0] )
      v3 = (_BYTE *)33748937;
    else
      v3 = (_BYTE *)33748936;
    *((_WORD *)v2 + 15) = *v3;
    v4 = obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
    v5 = v4;
    v6 = &dword_3004B20[10 * v1];
    *((_WORD *)v6 + 14) = v4;
    sub_8078E70(v4, 0);
    if ( word_3004B02 == 1 )
    {
      v8 = 3840;
    }
    else
    {
      if ( word_3004B02 <= 1 )
      {
        if ( word_3004B02 )
        {
          v7 = 16 * v5;
        }
        else
        {
          obj_id_set_rotscale(v5, 0xE0u, 320, 0);
          sub_8079A64(v5);
          v7 = 16 * v5;
        }
        goto _0812EBF8;
      }
      if ( word_3004B02 != 2 )
      {
        v7 = 16 * v5;
_0812EBF8:
        *(_WORD *)&gSprites[4 * (v7 + v5) + 36] = 2;
        ++LOWORD(dword_3004B20[10 * v1 + 2]);
        return v15;
      }
      v8 = -3840;
    }
    obj_id_set_rotscale(v5, 0xD0u, 304, v8);
    sub_8079A64(v5);
    if ( sub_8076BE0() << 24 || (v9 = battle_side_get_owner(*((_BYTE *)v6 + 30)), v7 = 16 * v5, !(v9 << 24)) )
    {
      v7 = 16 * v5;
      *(_WORD *)&gSprites[68 * v5 + 38] += 16;
    }
    goto _0812EBF8;
  }
  v10 = *((_BYTE *)v2 + 28);
  v11 = *((_WORD *)v2 + 6) + 1;
  *((_WORD *)v2 + 6) = v11;
  if ( v11 == 3 )
  {
    *((_WORD *)v2 + 6) = 0;
    *(_WORD *)&gSprites[68 * v10 + 36] = -*(_WORD *)&gSprites[68 * v10 + 36];
  }
  v12 = *((_WORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 5) = v12;
  if ( v12 == 13 )
  {
    sub_8078F40(v10);
    v13 = &gSprites[68 * v10];
    *((_WORD *)v13 + 18) = 0;
    *((_WORD *)v13 + 19) = 0;
    move_anim_task_del(v1);
  }
  return v15;
}
