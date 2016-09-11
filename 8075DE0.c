int sub_8075DE0()
{
  unsigned int v0; // r6@1
  _BYTE *v1; // r0@7
  int v2; // r5@9
  unsigned int v3; // r0@10
  int v4; // r7@12
  int v5; // r4@14
  int v6; // r3@14
  int *v7; // r2@14
  char *v8; // r0@14
  __int16 *v9; // r0@15
  int *v10; // r1@17
  int v11; // r5@18
  unsigned int v12; // r0@20
  int v13; // r7@22
  int v14; // r4@24
  int v15; // r3@24
  int *v16; // r2@24
  char *v17; // r0@24
  __int16 *v18; // r0@25
  int *v19; // r1@27
  int v21; // [sp+10h] [bp-4h]@0

  ++v202F7A4;
  v0 = *v202F7A4;
  if ( *v202F7A4 )
  {
    if ( v0 == 1 )
      v0 = 3;
    if ( !v0 )
      goto _08075E06;
  }
  else
  {
    v0 = 2;
  }
  if ( v0 == 2 )
  {
_08075E06:
    v1 = (_BYTE *)33748936;
    goto _08075E12;
  }
  v1 = (_BYTE *)33748937;
_08075E12:
  v2 = *v1;
  if ( b_side_obj__get_some_boolean(v2) << 24 )
  {
    v3 = (unsigned int)((battle_get_per_side_status(v2) << 24) - 0x1000000) >> 24;
    v4 = v3 > 1 && !(sub_8076BE0(v3) << 24);
    sub_8076034(v2, v4);
    v5 = *(_BYTE *)(v2 + 33704928);
    v6 = (unsigned __int8)CreateTask(task_pA_ma0A_obj_to_bg_pal, 10);
    v7 = &dword_3004B20[10 * v6];
    *((_WORD *)v7 + 4) = v5;
    v8 = &gSprites[68 * v5];
    *((_WORD *)v7 + 5) = *((_WORD *)v8 + 18) + *((_WORD *)v8 + 16);
    *((_WORD *)v7 + 6) = *((_WORD *)v8 + 19) + *((_WORD *)v8 + 17);
    if ( v4 )
    {
      *((_WORD *)v7 + 7) = word_3004288;
      v9 = &word_3004280;
    }
    else
    {
      *((_WORD *)v7 + 7) = word_30042C0;
      v9 = &word_30041B4;
    }
    *((_WORD *)v7 + 8) = *v9;
    v10 = &dword_3004B20[10 * v6];
    *((_WORD *)v10 + 9) = v4;
    *((_WORD *)v10 + 10) = v2;
    v202F7C2 = v6;
  }
  v11 = v2 ^ 2;
  if ( v0 > 1 && b_side_obj__get_some_boolean(v11) << 24 )
  {
    v12 = (unsigned int)((battle_get_per_side_status(v11) << 24) - 0x1000000) >> 24;
    v13 = v12 > 1 && !(sub_8076BE0(v12) << 24);
    sub_8076034(v11, v13);
    v14 = *(_BYTE *)(v11 + 33704928);
    v15 = (unsigned __int8)CreateTask(task_pA_ma0A_obj_to_bg_pal, 10);
    v16 = &dword_3004B20[10 * v15];
    *((_WORD *)v16 + 4) = v14;
    v17 = &gSprites[68 * v14];
    *((_WORD *)v16 + 5) = *((_WORD *)v17 + 18) + *((_WORD *)v17 + 16);
    *((_WORD *)v16 + 6) = *((_WORD *)v17 + 19) + *((_WORD *)v17 + 17);
    if ( v13 )
    {
      *((_WORD *)v16 + 7) = word_3004288;
      v18 = &word_3004280;
    }
    else
    {
      *((_WORD *)v16 + 7) = word_30042C0;
      v18 = &word_30041B4;
    }
    *((_WORD *)v16 + 8) = *v18;
    v19 = &dword_3004B20[10 * v15];
    *((_WORD *)v19 + 9) = v13;
    *((_WORD *)v19 + 10) = v11;
    v202F7C3 = v15;
  }
  ++v202F7A4;
  return v21;
}
