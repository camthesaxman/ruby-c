int __fastcall sub_80DBD58(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@4
  char *v4; // r0@7
  char *v5; // r0@8
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 5) )
  {
    if ( *((_WORD *)v2 + 5) == 1 )
    {
      if ( *((_WORD *)v2 + 7) )
      {
        v4 = &gSprites[68 * *((_WORD *)v2 + 4)];
        *((_WORD *)v4 + 19) -= 8;
        --*((_WORD *)v2 + 7);
      }
      else
      {
        v5 = &gSprites[68 * *((_WORD *)v2 + 4) + 62];
        *v5 |= 4u;
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 32] = 272;
        sub_8078F40(*((_BYTE *)v2 + 8));
        move_anim_task_del(v1);
      }
    }
  }
  else
  {
    sub_807992C((int)v2);
    v3 = *((_WORD *)v2 + 6) + 1;
    *((_WORD *)v2 + 6) = v3;
    if ( v3 > 19 )
      ++*((_WORD *)v2 + 5);
  }
  return v7;
}
