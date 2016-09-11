int __fastcall sub_80DC1FC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r5@1
  int v3; // r1@1
  __int16 v4; // r0@4
  int v5; // r1@5
  char *v6; // r4@6
  __int16 v7; // r0@7
  __int16 v8; // r0@9
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( *((_WORD *)v2 + 4) )
  {
    if ( v3 == 1 )
    {
      v8 = *((_WORD *)v2 + 5) + 1;
      *((_WORD *)v2 + 5) = v8;
      if ( v8 > 17 )
        move_anim_task_del(v1);
    }
  }
  else
  {
    v4 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v4;
    if ( v4 > 6 )
    {
      *((_WORD *)v2 + 5) = v3;
      v5 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83DA9AC, *((_WORD *)v2 + 15), *((_WORD *)v2 + 16));
      if ( v5 != 64 )
      {
        v6 = &gSprites[68 * v5];
        *((_WORD *)v6 + 23) = 16;
        *((_WORD *)v6 + 25) = *((_WORD *)v2 + 17);
        *((_WORD *)v6 + 27) = *((_WORD *)v2 + 18);
        *((_WORD *)v6 + 28) = *((_WORD *)v2 + 14);
        sub_80786EC((int)v6);
        StartSpriteAffineAnim((int)v6, *((_BYTE *)v2 + 12) & 3);
      }
      v7 = *((_WORD *)v2 + 6) + 1;
      *((_WORD *)v2 + 6) = v7;
      if ( v7 == 12 )
        ++*((_WORD *)v2 + 4);
    }
  }
  return v10;
}
