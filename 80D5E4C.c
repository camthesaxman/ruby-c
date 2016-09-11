int __fastcall sub_80D5E4C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r2@1
  signed int v3; // r3@1
  __int16 v4; // r0@8
  __int16 v5; // r0@9
  signed __int16 v6; // r0@10
  __int16 v7; // r0@14
  __int16 v8; // r0@15
  __int16 v9; // r0@17
  __int16 v10; // r0@18
  signed __int16 v11; // r0@19
  __int16 v12; // r0@23
  __int16 v13; // r0@24
  __int16 v14; // r0@26
  __int16 v15; // r0@27
  __int16 v16; // r0@31
  __int16 v17; // r0@32
  __int16 v18; // r0@35
  int v20; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    v9 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v9;
    if ( v9 > 4 )
    {
      *((_WORD *)v2 + 5) = 0;
      v10 = *((_WORD *)v2 + 6) + 1;
      *((_WORD *)v2 + 6) = v10;
      if ( (v10 & 1) << 16 )
        v11 = 2;
      else
        v11 = -2;
      *((_WORD *)v2 + 15) = v11;
    }
    *((_WORD *)v2 + 7) = 0;
    if ( (signed int)*((_WORD *)v2 + 17) > 0 )
    {
      do
      {
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + *((_WORD *)v2 + 7) + 14 + 4) + 36] = *((_WORD *)v2 + 15)
                                                                                    + *((_WORD *)v2 + 14);
        v12 = *((_WORD *)v2 + 7) + 1;
        *((_WORD *)v2 + 7) = v12;
      }
      while ( v12 < (signed int)*((_WORD *)v2 + 17) );
    }
    v13 = *((_WORD *)v2 + 13) + 1;
    *((_WORD *)v2 + 13) = v13;
    if ( v13 == 96 )
    {
      *((_WORD *)v2 + 13) = 0;
      goto _080D6020;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      *((_WORD *)v2 + 14) -= 2 * *((_WORD *)v2 + 16);
      v14 = *((_WORD *)v2 + 5) + 1;
      *((_WORD *)v2 + 5) = v14;
      if ( v14 > 1 )
      {
        *((_WORD *)v2 + 5) = 0;
        v15 = *((_WORD *)v2 + 6) + 1;
        *((_WORD *)v2 + 6) = v15;
        if ( v15 & 1 )
          *((_WORD *)v2 + 15) = 2;
        else
          *((_WORD *)v2 + 15) = -2;
      }
      *((_WORD *)v2 + 7) = 0;
      if ( (signed int)*((_WORD *)v2 + 17) > 0 )
      {
        do
        {
          *(_WORD *)&gSprites[68 * *((_WORD *)v2 + *((_WORD *)v2 + 7) + 14 + 4) + 36] = *((_WORD *)v2 + 15)
                                                                                      + *((_WORD *)v2 + 14);
          v16 = *((_WORD *)v2 + 7) + 1;
          *((_WORD *)v2 + 7) = v16;
        }
        while ( v16 < (signed int)*((_WORD *)v2 + 17) );
      }
      v17 = *((_WORD *)v2 + 13) + 1;
      *((_WORD *)v2 + 13) = v17;
      if ( v17 == 16 )
        goto _080D6020;
    }
    else if ( v3 == 3 )
    {
      *((_WORD *)v2 + 7) = 0;
      if ( (signed int)*((_WORD *)v2 + 17) > 0 )
      {
        do
        {
          *(_WORD *)&gSprites[68 * *((_WORD *)v2 + *((_WORD *)v2 + 7) + 14 + 4) + 36] = 0;
          v18 = *((_WORD *)v2 + 7) + 1;
          *((_WORD *)v2 + 7) = v18;
        }
        while ( v18 < (signed int)*((_WORD *)v2 + 17) );
      }
      move_anim_task_del(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 4) )
  {
    *((_WORD *)v2 + 14) += 2 * *((_WORD *)v2 + 16);
    v4 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v4;
    if ( v4 > 1 )
    {
      *((_WORD *)v2 + 5) = 0;
      v5 = *((_WORD *)v2 + 6) + 1;
      *((_WORD *)v2 + 6) = v5;
      if ( v5 & 1 )
        v6 = 2;
      else
        v6 = -2;
      *((_WORD *)v2 + 15) = v6;
    }
    *((_WORD *)v2 + 7) = 0;
    if ( (signed int)*((_WORD *)v2 + 17) > 0 )
    {
      do
      {
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + *((_WORD *)v2 + 7) + 14 + 4) + 36] = *((_WORD *)v2 + 15)
                                                                                    + *((_WORD *)v2 + 14);
        v7 = *((_WORD *)v2 + 7) + 1;
        *((_WORD *)v2 + 7) = v7;
      }
      while ( v7 < (signed int)*((_WORD *)v2 + 17) );
    }
    v8 = *((_WORD *)v2 + 13) + 1;
    *((_WORD *)v2 + 13) = v8;
    if ( v8 == 16 )
    {
      *((_WORD *)v2 + 13) = 0;
_080D6020:
      ++*((_WORD *)v2 + 4);
      return v20;
    }
  }
  return v20;
}
