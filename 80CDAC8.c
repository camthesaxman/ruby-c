int __fastcall sub_80CDAC8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r5@1
  int v3; // r2@1
  __int16 v4; // r1@1
  int (*v5)(); // r0@6
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 4) = *(_BYTE *)(v202F7C8 + 0x2024BE0);
  v3 = (unsigned __int8)battle_side_get_owner(v202F7C8);
  *((_WORD *)v2 + 5) = v3;
  *((_WORD *)v2 + 6) = 0;
  v4 = word_3004B00[0];
  if ( !word_3004B00[0] )
  {
    *((_WORD *)v2 + 6) = word_3004B00[0];
    *((_WORD *)v2 + 7) = 8;
    *((_WORD *)v2 + 8) = v4;
    *((_WORD *)v2 + 9) = 3;
    if ( !v3 )
      *((_WORD *)v2 + 9) = -3;
    v5 = sub_80CDB60;
    goto _080CDB54;
  }
  if ( word_3004B00[0] == 1 )
  {
    *((_WORD *)v2 + 7) = 8;
    *((_WORD *)v2 + 8) = 1536;
    *((_WORD *)v2 + 9) = 192;
    if ( !v3 )
    {
      *((_WORD *)v2 + 8) = -1536;
      *((_WORD *)v2 + 9) = -192;
    }
    v5 = sub_80CDD20;
_080CDB54:
    *v2 = (int)v5;
    return v7;
  }
  move_anim_task_del(v1);
  return v7;
}
