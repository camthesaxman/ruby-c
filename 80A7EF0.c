int __fastcall sub_80A7EF0(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r3@1
  char *v3; // r1@2
  int *v4; // r3@5
  char *v5; // r1@5
  __int16 v6; // r0@6
  int *v7; // r2@8
  __int16 v8; // r0@8
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 7) )
  {
    --*((_WORD *)v2 + 7);
  }
  else
  {
    v3 = &gSprites[68 * *((_WORD *)v2 + 4)];
    if ( *((_WORD *)v3 + 18) )
      *((_WORD *)v3 + 18) = 0;
    else
      *((_WORD *)v3 + 18) = *((_WORD *)v2 + 8);
    v4 = &dword_3004B20[10 * a1];
    v5 = &gSprites[68 * *((_WORD *)v4 + 4)];
    if ( *((_WORD *)v5 + 19) )
      v6 = 0;
    else
      v6 = *((_WORD *)v4 + 9);
    *((_WORD *)v5 + 19) = v6;
    v7 = &dword_3004B20[10 * v1];
    *((_WORD *)v7 + 7) = *((_WORD *)v7 + 6);
    v8 = *((_WORD *)v7 + 5) - 1;
    *((_WORD *)v7 + 5) = v8;
    if ( !v8 )
    {
      *(_WORD *)&gSprites[68 * *((_WORD *)v7 + 4) + 36] = 0;
      *(_WORD *)&gSprites[68 * *((_WORD *)v7 + 4) + 38] = 0;
      move_anim_task_del(v1);
    }
  }
  return v10;
}
