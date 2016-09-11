int __fastcall sub_80D1930(unsigned __int8 a1)
{
  __int16 v1; // r6@1
  int *v2; // r4@1
  signed int v3; // r2@1
  __int16 v4; // r0@7
  __int16 v5; // r0@8
  __int16 v6; // r0@12
  int v7; // r5@15
  __int16 v8; // r0@18
  unsigned __int8 v9; // r0@19
  char *v10; // r1@20
  __int16 v11; // r0@20
  __int16 v12; // r0@21
  int v14; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 12);
  if ( v3 == 1 )
  {
    *((_WORD *)v2 + 9) = 0;
    v6 = *((_WORD *)v2 + 8) + 1;
    *((_WORD *)v2 + 8) = v6;
    if ( v6 > 20 )
    {
      *((_WORD *)v2 + 11) = 1;
      *((_WORD *)v2 + 12) = 0;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
      *((_WORD *)v2 + 9) = 1;
  }
  else if ( !*((_WORD *)v2 + 12) )
  {
    v4 = *((_WORD *)v2 + 8) + 1;
    *((_WORD *)v2 + 8) = v4;
    if ( v4 > 1 )
    {
      *((_WORD *)v2 + 8) = 0;
      *((_WORD *)v2 + 9) = (*((_WORD *)v2 + 9) + 1) & 1;
      v5 = *((_WORD *)v2 + 10) + 1;
      *((_WORD *)v2 + 10) = v5;
      if ( v5 > 20 )
      {
        if ( *((_WORD *)v2 + 11) )
        {
          *((_WORD *)v2 + 12) = 2;
        }
        else
        {
          *((_WORD *)v2 + 10) = 0;
          *((_WORD *)v2 + 12) = 1;
        }
      }
    }
  }
  v7 = *((_WORD *)v2 + 4);
  if ( *((_WORD *)v2 + 4) )
  {
    if ( v7 == 1 && !*((_WORD *)v2 + 17) )
      move_anim_task_del(v1);
  }
  else
  {
    v8 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v8;
    if ( v8 > 4 )
    {
      *((_WORD *)v2 + 5) = v7;
      v9 = CreateSprite((int)"ß'ß',ß7\bäy=\b", *((_WORD *)v2 + 18), *((_WORD *)v2 + 19));
      if ( v9 != 64 )
      {
        v10 = &gSprites[68 * v9];
        *((_WORD *)v10 + 23) = v1;
        *((_WORD *)v10 + 24) = 13;
        *((_WORD *)v10 + 18) = gUnknown_083D7A00[2 * *((_WORD *)v2 + 6)];
        *((_WORD *)v10 + 19) = gUnknown_083D7A00[2 * *((_WORD *)v2 + 6) + 1];
        ++*((_WORD *)v2 + 17);
        v11 = *((_WORD *)v2 + 6) + 1;
        *((_WORD *)v2 + 6) = v11;
        if ( v11 > 3 )
        {
          *((_WORD *)v2 + 6) = v7;
          v12 = *((_WORD *)v2 + 7) + 1;
          *((_WORD *)v2 + 7) = v12;
          if ( v12 > 5 )
            ++*((_WORD *)v2 + 4);
        }
      }
    }
  }
  return v14;
}
