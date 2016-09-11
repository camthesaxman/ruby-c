int __fastcall sub_812E8B4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r7@1
  signed int v3; // r0@1
  __int16 v4; // r2@7
  __int16 v5; // r8@7
  signed int v6; // r1@7
  char v7; // r4@8
  int v8; // r0@8
  signed __int16 v9; // r1@8
  __int16 v10; // r0@9
  __int16 v11; // r1@11
  int v12; // r6@11
  __int16 v13; // r9@13
  signed int v14; // r4@13
  signed int v15; // r6@13
  __int16 v16; // r2@13
  __int16 v17; // r0@18
  __int16 v18; // r0@20
  int v20; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    v11 = *((_WORD *)v2 + 6) - 512;
    *((_WORD *)v2 + 6) = v11;
    v12 = *((_WORD *)v2 + 18);
    if ( (unsigned __int8)((*((_WORD *)v2 + 6) + v12 < 0) ^ __OFADD__(*((_WORD *)v2 + 6), v12)) | (*((_WORD *)v2 + 6)
                                                                                                 + v12 == 0) )
    {
      v13 = *((_WORD *)v2 + 18);
      v14 = (signed __int16)(*((_WORD *)v2 + 18) - v11);
      v15 = 2 * v12;
      v16 = v14 % v15;
      v9 = v3 & (unsigned int)(v14 / v15);
      if ( !v9 )
      {
        v10 = v16 - v13;
_0812E9A2:
        *((_WORD *)v2 + 6) = v10;
        *((_WORD *)v2 + 4) = v9;
        goto _0812E9CA;
      }
      *((_WORD *)v2 + 6) = v13 - v16;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      sub_8078F40(*((_BYTE *)v2 + 38));
      move_anim_task_del(v1);
      return v20;
    }
  }
  else if ( !*((_WORD *)v2 + 4) )
  {
    v4 = *((_WORD *)v2 + 6) + 512;
    *((_WORD *)v2 + 6) = v4;
    v5 = *((_WORD *)v2 + 18);
    v6 = *((_WORD *)v2 + 18);
    if ( v4 >= v6 )
    {
      v7 = (signed __int16)(v5 - v4) / (2 * v6);
      v8 = (signed __int16)(v5 - v4) % (2 * v6);
      v9 = 1;
      if ( v7 & 1 )
      {
        *((_WORD *)v2 + 6) = v8 - v5;
        goto _0812E9CA;
      }
      v10 = v5 - v8;
      goto _0812E9A2;
    }
  }
_0812E9CA:
  obj_id_set_rotscale(*((_BYTE *)v2 + 38), 0x100u, 256, *((_WORD *)v2 + 6));
  sub_8078F9C(*((_BYTE *)v2 + 38));
  *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = *((_WORD *)v2 + 6) / -64;
  v17 = *((_WORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 5) = v17;
  if ( v17 > 8 )
  {
    if ( *((_WORD *)v2 + 16) )
    {
      --*((_WORD *)v2 + 16);
      v18 = *((_WORD *)v2 + 18) - *((_WORD *)v2 + 17);
      *((_WORD *)v2 + 18) = v18;
      if ( v18 <= 15 )
        *((_WORD *)v2 + 18) = 16;
    }
    else
    {
      *((_WORD *)v2 + 4) = 2;
    }
  }
  return v20;
}
