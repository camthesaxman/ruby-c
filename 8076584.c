int __fastcall task_pA_ma0A_obj_to_bg_pal(unsigned __int8 a1)
{
  int *v1; // r5@1
  int v2; // r4@1
  int v3; // r6@1
  char *v4; // r1@1
  int v5; // r2@1
  int v6; // r2@2
  int v7; // r0@2
  int v9; // [sp+0h] [bp-1Ch]@1
  unsigned __int8 v10; // [sp+8h] [bp-14h]@2
  int v11; // [sp+18h] [bp-4h]@4

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_BYTE *)v1 + 8);
  v3 = *((_BYTE *)v1 + 20);
  sub_8078914(&v9);
  v4 = &gSprites[68 * v2];
  v5 = (*((_WORD *)v1 + 6) - (*((_WORD *)v4 + 19) + *((_WORD *)v4 + 17))) & 0xFFFF;
  if ( *((_WORD *)v1 + 9) )
  {
    word_3004288 = *((_WORD *)v1 + 5) - (*((_WORD *)v4 + 18) + *((_WORD *)v4 + 16)) + *((_WORD *)v1 + 7);
    word_3004280 = v5 + *((_WORD *)v1 + 8);
    v6 = 32 * v3 + 33747144;
    v7 = 33746920;
  }
  else
  {
    word_30042C0 = *((_WORD *)v1 + 5) - (*((_WORD *)v4 + 18) + *((_WORD *)v4 + 16)) + *((_WORD *)v1 + 7);
    word_30041B4 = v5 + *((_WORD *)v1 + 8);
    v6 = 32 * v3 + 33747144;
    v7 = 32 * v10 + 33746632;
  }
  v40000D4 = v6;
  v40000D8 = v7;
  v40000DC = -2080374776;
  return v11;
}
