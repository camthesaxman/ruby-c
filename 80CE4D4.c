int __fastcall sub_80CE4D4(unsigned __int8 a1)
{
  int *v1; // r4@1
  signed int v2; // r1@1
  int v3; // r0@8
  __int16 v4; // r0@9
  int v5; // r0@10
  int v6; // r2@10
  int v7; // r1@10
  int v8; // r12@10
  int v9; // r2@12
  int v10; // r3@12
  unsigned __int16 v11; // r1@12
  unsigned __int16 v12; // r8@13
  unsigned int v13; // r1@14
  unsigned int v14; // r2@19
  void *v15; // r0@20
  __int16 v16; // r0@25
  int v17; // r0@26
  int v19; // [sp+18h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 1 )
  {
    if ( v202F38F & 0x80 )
      return v19;
    v14 = 0;
    do
    {
      v15 = (void *)dword_2020018[17 * v14];
      if ( v15 == &gBattleAnimSpriteTemplate_83D6FC8 || v15 == &gBattleAnimSpriteTemplate_83D6FF8 )
        *(_WORD *)&gSprites[68 * v14 + 46] = 1;
      v14 = (v14 + 1) & 0xFF;
    }
    while ( v14 <= 0x3F );
    *((_WORD *)v1 + 5) = 0;
_080CE640:
    ++*((_WORD *)v1 + 4);
    return v19;
  }
  if ( v2 <= 1 )
  {
    if ( !*((_WORD *)v1 + 4) )
    {
      v3 = *((_WORD *)v1 + 5) + 1;
      *((_WORD *)v1 + 5) = v3;
      if ( v3 << 16 > 0 )
      {
        *((_WORD *)v1 + 5) = 0;
        v4 = *((_WORD *)v1 + 6) + 1;
        *((_WORD *)v1 + 6) = v4;
        if ( v4 > 15 )
        {
          LOWORD(v8) = 32699;
          ++*((_WORD *)v1 + 4);
        }
        else
        {
          v5 = *((_WORD *)v1 + 11) + *((_WORD *)v1 + 8);
          *((_WORD *)v1 + 8) = v5;
          v6 = *((_WORD *)v1 + 12) + *((_WORD *)v1 + 9);
          *((_WORD *)v1 + 9) = v6;
          v7 = *((_WORD *)v1 + 13) + *((_WORD *)v1 + 10);
          *((_WORD *)v1 + 10) = v7;
          v8 = ((v5 << 16 >> 19) & 0xFFFF | 32 * (v6 << 16 >> 19) & 0x1FFFFF | (v7 << 16 >> 19 << 10) & 0x3FFFFFF) & 0xFFFF;
        }
        v9 = 1;
        v10 = 0;
        v11 = 0;
        do
        {
          v12 = v11 + 1;
          if ( *((_WORD *)v1 + 7) & v9 )
          {
            v13 = 1;
            do
            {
              *(_WORD *)(2 * (v10 + v13) + 0x202EEC8) = v8;
              v13 = (v13 + 1) & 0xFFFF;
            }
            while ( v13 <= 0xF );
          }
          v9 = 2 * v9 & 0xFFFF;
          v10 = (unsigned __int16)(v10 + 16);
          v11 = v12;
        }
        while ( v12 <= 0xFu );
      }
    }
    return v19;
  }
  if ( v2 == 2 )
  {
    v16 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v16;
    if ( v16 <= 30 )
      return v19;
    v17 = sub_8079BFC(*((_WORD *)v1 + 18), *((_WORD *)v1 + 19));
    BeginNormalPaletteFade(v17, 0, 0x10u, 0, 32699);
    goto _080CE640;
  }
  if ( v2 == 3 && !(v202F38F & 0x80) )
    move_anim_task_del(a1);
  return v19;
}
