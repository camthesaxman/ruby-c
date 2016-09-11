int __fastcall sub_80E2710(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r3@1
  int v3; // r0@3
  int *v4; // r4@5
  int v5; // r0@6
  int *v6; // r0@8
  __int16 v7; // r1@8
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 7) )
  {
    --*((_WORD *)v2 + 7);
  }
  else
  {
    if ( (unsigned __int16)word_30041B0 == *((_WORD *)v2 + 4) )
      v3 = -*((_WORD *)v2 + 4);
    else
      LOWORD(v3) = *((_WORD *)v2 + 4);
    word_30041B0 = v3;
    v4 = &dword_3004B20[10 * v1];
    if ( (unsigned __int16)word_30041B8 + *((_WORD *)v4 + 5) )
      v5 = -*((_WORD *)v4 + 5);
    else
      LOWORD(v5) = 0;
    word_30041B8 = v5;
    v6 = &dword_3004B20[10 * v1];
    *((_WORD *)v6 + 7) = *((_WORD *)v6 + 12);
    v7 = *((_WORD *)v6 + 6) - 1;
    *((_WORD *)v6 + 6) = v7;
    if ( !v7 )
    {
      word_30041B0 = 0;
      word_30041B8 = 0;
      move_anim_task_del(v1);
    }
  }
  return v9;
}
