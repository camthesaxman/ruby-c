int __fastcall sub_80D9C80(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r4@1
  signed int v3; // r0@1
  __int16 v4; // r0@5
  __int16 *v5; // r7@9
  int v6; // r2@11
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    v4 = *((_WORD *)v2 + 12) - 1;
    *((_WORD *)v2 + 12) = v4;
    if ( v4 != -1 )
      goto _080D9CDE;
    goto _080D9CCA;
  }
  if ( v3 <= 1 && !*((_WORD *)v2 + 4) )
  {
    sub_80789D4(0);
    *((_WORD *)v2 + 12) = word_3004B00[0];
_080D9CCA:
    ++*((_WORD *)v2 + 4);
    goto _080D9CDE;
  }
  *((_WORD *)v2 + 13) += 1280;
_080D9CDE:
  *((_WORD *)v2 + 14) += 2816;
  if ( battle_side_get_owner(v202F7C9) << 24 )
  {
    word_30041B0 -= *((_WORD *)v2 + 13) << 16 >> 24;
    v5 = &word_30041B0;
  }
  else
  {
    word_30041B0 += *((_WORD *)v2 + 13) << 16 >> 24;
    v5 = &word_30041B0;
  }
  v6 = *((_WORD *)v2 + 14);
  word_30041B8 += v6 << 16 >> 24;
  *((_WORD *)v2 + 13) = *((_BYTE *)v2 + 26);
  *((_WORD *)v2 + 14) = (unsigned __int8)v6;
  if ( word_3004B0E == -1 )
  {
    *v5 = 0;
    word_30041B8 = 0;
    sub_80789D4(1);
    move_anim_task_del(v1);
  }
  return v8;
}
