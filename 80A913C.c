int __fastcall sub_80A913C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r3@1
  __int16 v3; // r0@1
  int v4; // r1@2
  char *v5; // r0@4
  __int16 v6; // r1@4
  __int16 v7; // r0@11
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 > (signed int)*((_WORD *)v2 + 5) )
  {
    *((_WORD *)v2 + 4) = 0;
    v4 = (*((_WORD *)v2 + 16) + 1) & 1;
    *((_WORD *)v2 + 16) = v4;
    if ( *((_WORD *)v2 + 14) )
    {
      if ( v4 )
      {
        v5 = &gSprites[68 * *((_WORD *)v2 + 11)];
        v6 = *((_WORD *)v2 + 17) + *((_WORD *)v2 + 12);
      }
      else
      {
        v5 = &gSprites[68 * *((_WORD *)v2 + 11)];
        v6 = *((_WORD *)v2 + 12) - *((_WORD *)v2 + 18);
      }
      *((_WORD *)v5 + 18) = v6;
    }
    if ( *((_WORD *)v2 + 15) )
    {
      if ( *((_WORD *)v2 + 16) )
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 11) + 38] = *((_WORD *)v2 + 19);
      else
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 11) + 38] = 0;
    }
    v7 = *((_WORD *)v2 + 6) - 1;
    *((_WORD *)v2 + 6) = v7;
    if ( !v7 )
    {
      *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 11) + 36] = 0;
      *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 11) + 38] = 0;
      move_anim_task_del(v1);
    }
  }
  return v9;
}
