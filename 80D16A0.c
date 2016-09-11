int __fastcall sub_80D16A0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r3@1
  signed int v3; // r4@1
  char *v4; // r0@8
  __int16 v5; // r0@9
  __int16 v6; // r0@10
  char *v7; // r2@11
  char *v8; // r0@11
  __int16 v9; // r1@11
  __int16 v10; // r0@13
  int v11; // r1@15
  int v12; // r0@16
  char *v13; // r0@19
  int v15; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 != 1 )
  {
    if ( v3 <= 1 )
    {
      if ( *((_WORD *)v2 + 4) )
        return v15;
      v4 = &gSprites[68 * *((_WORD *)v2 + 19)];
      *((_WORD *)v4 + 18) += *((_WORD *)v2 + 18);
      *((_WORD *)v2 + 5) = 0;
      *((_WORD *)v2 + 6) = 0;
      *((_WORD *)v2 + 7) = 0;
      goto _080D1782;
    }
    if ( v3 != 2 )
    {
      if ( v3 == 3 )
      {
        v13 = &gSprites[68 * *((_WORD *)v2 + 19)];
        *((_WORD *)v13 + 18) += *((_WORD *)v2 + 17);
        if ( !*(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] )
          move_anim_task_del(v1);
      }
      return v15;
    }
    v12 = *((_WORD *)v2 + 16) - 1;
    *((_WORD *)v2 + 16) = v12;
    if ( v12 << 16 )
    {
      *((_WORD *)v2 + 4) = 0;
      return v15;
    }
_080D1782:
    ++*((_WORD *)v2 + 4);
    return v15;
  }
  v5 = *((_WORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 5) = v5;
  if ( v5 > 1 )
  {
    *((_WORD *)v2 + 5) = 0;
    v6 = *((_WORD *)v2 + 6) + 1;
    *((_WORD *)v2 + 6) = v6;
    if ( (v6 & 1) << 16 )
    {
      v7 = gSprites;
      v8 = &gSprites[68 * *((_WORD *)v2 + 19)];
      v9 = *((_WORD *)v8 + 18) + 6;
    }
    else
    {
      v7 = gSprites;
      v8 = &gSprites[68 * *((_WORD *)v2 + 19)];
      v9 = *((_WORD *)v8 + 18) - 6;
    }
    *((_WORD *)v8 + 18) = v9;
    v10 = *((_WORD *)v2 + 7) + 1;
    *((_WORD *)v2 + 7) = v10;
    if ( v10 > 4 )
    {
      if ( *((_WORD *)v2 + 6) & 1 )
      {
        v11 = (int)&v7[68 * *((_WORD *)v2 + 19)];
        *(_WORD *)(v11 + 36) -= 6;
      }
      goto _080D1782;
    }
  }
  return v15;
}
