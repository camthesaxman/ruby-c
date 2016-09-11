int __fastcall sub_80A808C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r3@1
  char *v3; // r4@2
  __int16 v4; // r5@2
  int *v5; // r1@5
  char *v6; // r4@5
  __int16 v7; // r5@5
  int *v8; // r3@8
  __int16 v9; // r0@8
  int v11; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 7) )
  {
    --*((_WORD *)v2 + 7);
  }
  else
  {
    v3 = &gSprites[68 * *((_WORD *)v2 + 4)];
    v4 = *((_WORD *)v2 + 8);
    if ( *((_WORD *)v3 + 18) == *((_WORD *)v2 + 8) )
      *((_WORD *)v3 + 18) = -v4;
    else
      *((_WORD *)v3 + 18) = v4;
    v5 = &dword_3004B20[10 * a1];
    v6 = &gSprites[68 * *((_WORD *)v5 + 4)];
    v7 = *((_WORD *)v5 + 9);
    if ( *((_WORD *)v6 + 19) == *((_WORD *)v5 + 9) )
      *((_WORD *)v6 + 19) = -v7;
    else
      *((_WORD *)v6 + 19) = v7;
    v8 = &dword_3004B20[10 * a1];
    *((_WORD *)v8 + 7) = *((_WORD *)v8 + 6);
    v9 = *((_WORD *)v8 + 5) - 1;
    *((_WORD *)v8 + 5) = v9;
    if ( !v9 )
    {
      *(_WORD *)&gSprites[68 * *((_WORD *)v8 + 4) + 36] = 0;
      *(_WORD *)&gSprites[68 * *((_WORD *)v8 + 4) + 38] = 0;
      move_anim_task_del(v1);
    }
  }
  return v11;
}
