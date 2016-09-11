int __fastcall sub_80D07AC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r4@1
  signed int v3; // r5@1
  __int16 v4; // r2@8
  char *v5; // r0@8
  char *v6; // r0@10
  char *v7; // r0@13
  int v8; // r0@16
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5);
  if ( v3 == 1 )
  {
    sub_807992C((int)v2);
    v6 = &gSprites[68 * *((_WORD *)v2 + 4)];
    *((_WORD *)v6 + 19) += *((_WORD *)v2 + 8);
    LOWORD(v6) = *((_WORD *)v2 + 7) + 1;
    *((_WORD *)v2 + 7) = (_WORD)v6;
    if ( (signed __int16)v6 > 7 )
    {
      *((_WORD *)v2 + 7) = 0;
      goto _080D0870;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      if ( !*((_WORD *)v2 + 8) )
        goto _080D0870;
      v7 = &gSprites[68 * *((_WORD *)v2 + 4)];
      *((_WORD *)v7 + 19) -= 2;
      *((_WORD *)v2 + 8) -= 2;
    }
    else if ( v3 == 3 && !(unsigned __int8)sub_807992C((int)v2) )
    {
      v8 = *((_WORD *)v2 + 6) - 1;
      *((_WORD *)v2 + 6) = v8;
      if ( v8 << 16 )
      {
        sub_80798F4((int)v2, *((_BYTE *)v2 + 8));
        *((_WORD *)v2 + 5) = 0;
      }
      else
      {
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 38] = 0;
        move_anim_task_del(v1);
      }
    }
  }
  else if ( !*((_WORD *)v2 + 5) )
  {
    sub_807992C((int)v2);
    v4 = *((_WORD *)v2 + 8) + 3;
    *((_WORD *)v2 + 8) = v4;
    v5 = &gSprites[68 * *((_WORD *)v2 + 4)];
    *((_WORD *)v5 + 19) += v4;
    LOWORD(v5) = *((_WORD *)v2 + 7) + 1;
    *((_WORD *)v2 + 7) = (_WORD)v5;
    if ( (signed __int16)v5 > 7 )
    {
      *((_WORD *)v2 + 7) = 0;
_080D0870:
      ++*((_WORD *)v2 + 5);
      return v10;
    }
  }
  return v10;
}
