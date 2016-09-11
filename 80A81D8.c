int __fastcall sub_80A81D8(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  char *v3; // r0@4
  char *v4; // r0@4
  char *v5; // r3@4
  char *v6; // r0@5
  char *v7; // r0@5
  int *v8; // r4@6
  __int16 v9; // r2@6
  int v10; // r1@8
  int v11; // r1@8
  int v12; // r2@9
  int v13; // r2@9
  int v15; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 7) )
  {
    --*((_WORD *)v2 + 7);
  }
  else
  {
    if ( *((_WORD *)v2 + 5) & 1 )
    {
      v3 = &gSprites[68 * *((_WORD *)v2 + 4)];
      *((_WORD *)v3 + 18) += *((_WORD *)v2 + 9);
      v4 = &gSprites[68 * *((_WORD *)v2 + 4)];
      *((_WORD *)v4 + 19) += *((_WORD *)v2 + 10);
      v5 = gSprites;
    }
    else
    {
      v5 = gSprites;
      v6 = &gSprites[68 * *((_WORD *)v2 + 4)];
      *((_WORD *)v6 + 18) -= *((_WORD *)v2 + 9);
      v7 = &gSprites[68 * *((_WORD *)v2 + 4)];
      *((_WORD *)v7 + 19) -= *((_WORD *)v2 + 10);
    }
    v8 = &dword_3004B20[10 * v1];
    *((_WORD *)v8 + 7) = *((_WORD *)v8 + 8);
    v9 = *((_WORD *)v8 + 5) + 1;
    *((_WORD *)v8 + 5) = v9;
    if ( v9 >= (signed int)*((_WORD *)v8 + 6) )
    {
      if ( v9 & 1 )
      {
        v10 = (int)&v5[68 * *((_WORD *)v8 + 4)];
        *(_WORD *)(v10 + 36) += *((_WORD *)v8 + 9) / 2;
        v11 = (int)&v5[68 * *((_WORD *)v8 + 4)];
        *(_WORD *)(v11 + 38) += *((_WORD *)v8 + 10) / 2;
      }
      else
      {
        v12 = (int)&v5[68 * *((_WORD *)v8 + 4)];
        *(_WORD *)(v12 + 36) -= *((_WORD *)v8 + 9) / 2;
        v13 = (int)&v5[68 * *((_WORD *)v8 + 4)];
        *(_WORD *)(v13 + 38) -= *((_WORD *)v8 + 10) / 2;
      }
      move_anim_task_del(v1);
    }
  }
  return v15;
}
