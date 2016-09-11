int __fastcall sub_80DEB38(unsigned __int8 a1)
{
  int *v1; // r4@1
  signed int v2; // r1@1
  __int16 v3; // r0@10
  __int16 v4; // r0@11
  __int16 v5; // r0@22
  __int16 v6; // r0@23
  int i; // r5@29
  int v8; // r0@33
  int v10; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 1 )
  {
    v5 = *((_WORD *)v1 + 9) + 1;
    *((_WORD *)v1 + 9) = v5;
    if ( v5 > 1 )
    {
      *((_WORD *)v1 + 9) = 0;
      v6 = *((_WORD *)v1 + 11) + 1;
      *((_WORD *)v1 + 11) = v6;
      if ( (v6 & 1) << 16 )
      {
        if ( *((_WORD *)v1 + 12) )
          --*((_WORD *)v1 + 12);
      }
      else if ( (signed int)*((_WORD *)v1 + 13) <= 15 )
      {
        ++*((_WORD *)v1 + 13);
      }
      v4000052 = (*((_WORD *)v1 + 13) << 8) | *((_WORD *)v1 + 12);
      if ( v1[6] == 0x100000 )
      {
        for ( i = 0; i < *((_WORD *)v1 + 16); i = (i + 1) & 0xFFFF )
          DestroySprite((int)&gSprites[68 * *((_WORD *)v1 + i + 13 + 4)]);
        goto _080DEC8C;
      }
    }
  }
  else
  {
    if ( v2 <= 1 )
    {
      if ( *((_WORD *)v1 + 4) )
        return v10;
      if ( !*((_WORD *)v1 + 10) )
      {
        v3 = *((_WORD *)v1 + 9) + 1;
        *((_WORD *)v1 + 9) = v3;
        if ( v3 > 1 )
        {
          *((_WORD *)v1 + 9) = 0;
          v4 = *((_WORD *)v1 + 11) + 1;
          *((_WORD *)v1 + 11) = v4;
          if ( v4 & 1 )
          {
            if ( (signed int)*((_WORD *)v1 + 12) <= 15 )
              ++*((_WORD *)v1 + 12);
          }
          else if ( *((_WORD *)v1 + 13) )
          {
            --*((_WORD *)v1 + 13);
          }
          v4000052 = (*((_WORD *)v1 + 13) << 8) | *((_WORD *)v1 + 12);
          if ( (signed int)*((_WORD *)v1 + 11) > 23 )
          {
            *((_WORD *)v1 + 11) = 0;
            *((_WORD *)v1 + 10) = 1;
          }
        }
      }
      if ( *((_WORD *)v1 + 14) )
      {
        --*((_WORD *)v1 + 14);
        return v10;
      }
      if ( !*((_WORD *)v1 + 10) )
        return v10;
_080DEC8C:
      ++*((_WORD *)v1 + 4);
      return v10;
    }
    if ( v2 == 2 )
    {
      v8 = *((_WORD *)v1 + 9) + 1;
      *((_WORD *)v1 + 9) = v8;
      if ( v8 << 16 <= 0 )
        return v10;
      goto _080DEC8C;
    }
    if ( v2 == 3 )
    {
      v4000050 = 0;
      v4000052 = 0;
      move_anim_task_del(a1);
    }
  }
  return v10;
}
