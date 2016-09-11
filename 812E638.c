int __fastcall sub_812E638(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r6@1
  char *v4; // r0@9
  __int16 v5; // r0@9
  char *v6; // r0@11
  __int16 v7; // r1@11
  char *v8; // r0@13
  __int16 v9; // r0@13
  int v11; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    v6 = &gSprites[68 * *((_WORD *)v2 + 19)];
    *((_WORD *)v6 + 18) -= *((_WORD *)v2 + 9);
    *((_WORD *)v2 + 6) += *((_WORD *)v2 + 8);
    obj_id_set_rotscale(*((_BYTE *)v2 + 38), 0x100u, 256, *((_WORD *)v2 + 6));
    sub_8078F9C(*((_BYTE *)v2 + 38));
    v7 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v7;
    if ( v7 >= 2 * *((_WORD *)v2 + 7) )
    {
      *((_WORD *)v2 + 5) = 0;
      goto _0812E780;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      v8 = &gSprites[68 * *((_WORD *)v2 + 19)];
      *((_WORD *)v8 + 18) += *((_WORD *)v2 + 9);
      *((_WORD *)v2 + 6) -= *((_WORD *)v2 + 8);
      obj_id_set_rotscale(*((_BYTE *)v2 + 38), 0x100u, 256, *((_WORD *)v2 + 6));
      sub_8078F9C(*((_BYTE *)v2 + 38));
      v9 = *((_WORD *)v2 + 5) + 1;
      *((_WORD *)v2 + 5) = v9;
      if ( v9 >= (signed int)*((_WORD *)v2 + 7) )
      {
        if ( !*((_WORD *)v2 + 10) )
          goto _0812E780;
        --*((_WORD *)v2 + 10);
        *((_WORD *)v2 + 5) = 0;
        *((_WORD *)v2 + 4) = 0;
      }
    }
    else if ( v3 == 3 )
    {
      sub_8078F40(*((_BYTE *)v2 + 38));
      move_anim_task_del(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 4) )
  {
    v4 = &gSprites[68 * *((_WORD *)v2 + 19)];
    *((_WORD *)v4 + 18) += *((_WORD *)v2 + 9);
    *((_WORD *)v2 + 6) -= *((_WORD *)v2 + 8);
    obj_id_set_rotscale(*((_BYTE *)v2 + 38), 0x100u, 256, *((_WORD *)v2 + 6));
    sub_8078F9C(*((_BYTE *)v2 + 38));
    v5 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v5;
    if ( v5 >= (signed int)*((_WORD *)v2 + 7) )
    {
      *((_WORD *)v2 + 5) = 0;
_0812E780:
      ++*((_WORD *)v2 + 4);
      return v11;
    }
  }
  return v11;
}
