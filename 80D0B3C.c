int __fastcall sub_80D0B3C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r3@1
  __int16 v3; // r0@1
  __int16 v4; // r0@2
  char *v5; // r0@3
  __int16 v6; // r1@3
  signed int v7; // r0@6
  char *v8; // r0@12
  int v9; // r0@12
  char *v10; // r0@14
  int v11; // r0@14
  char *v12; // r0@16
  int v13; // r0@17
  char *v14; // r0@20
  int v16; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 11) + 1;
  *((_WORD *)v2 + 11) = v3;
  if ( v3 > 2 )
  {
    *((_WORD *)v2 + 11) = 0;
    v4 = *((_WORD *)v2 + 12) + 1;
    *((_WORD *)v2 + 12) = v4;
    if ( v4 & 1 )
    {
      v5 = &gSprites[68 * *((_WORD *)v2 + 4)];
      v6 = *((_WORD *)v2 + 13) + *((_WORD *)v5 + 17);
    }
    else
    {
      v5 = &gSprites[68 * *((_WORD *)v2 + 4)];
      v6 = *((_WORD *)v5 + 17) - *((_WORD *)v2 + 13);
    }
    *((_WORD *)v5 + 17) = v6;
  }
  v7 = *((_WORD *)v2 + 5);
  if ( v7 == 1 )
  {
    v10 = &gSprites[68 * *((_WORD *)v2 + 4)];
    *((_WORD *)v10 + 16) -= *((_WORD *)v2 + 6);
    v11 = *((_WORD *)v2 + 7) - 1;
    *((_WORD *)v2 + 7) = v11;
    if ( !(v11 << 16) )
    {
      *((_WORD *)v2 + 7) = 7;
      *((_WORD *)v2 + 5) = 2;
    }
  }
  else if ( v7 > 1 )
  {
    if ( v7 == 2 )
    {
      v12 = &gSprites[68 * *((_WORD *)v2 + 4)];
      *((_WORD *)v12 + 16) += *((_WORD *)v2 + 6);
      LOWORD(v12) = *((_WORD *)v2 + 7) - 1;
      *((_WORD *)v2 + 7) = (_WORD)v12;
      if ( !(_WORD)v12 )
      {
        v13 = *((_WORD *)v2 + 8) - 1;
        *((_WORD *)v2 + 8) = v13;
        if ( v13 << 16 )
        {
          *((_WORD *)v2 + 7) = 7;
          *((_WORD *)v2 + 5) = 0;
        }
        else
        {
          if ( *((_WORD *)v2 + 12) & 1 )
          {
            v14 = &gSprites[68 * *((_WORD *)v2 + 4)];
            *((_WORD *)v14 + 17) -= *((_WORD *)v2 + 13);
          }
          move_anim_task_del(v1);
        }
      }
    }
  }
  else if ( !*((_WORD *)v2 + 5) )
  {
    v8 = &gSprites[68 * *((_WORD *)v2 + 4)];
    *((_WORD *)v8 + 16) += *((_WORD *)v2 + 6);
    v9 = *((_WORD *)v2 + 7) - 1;
    *((_WORD *)v2 + 7) = v9;
    if ( !(v9 << 16) )
    {
      *((_WORD *)v2 + 7) = 14;
      *((_WORD *)v2 + 5) = 1;
    }
  }
  return v16;
}
