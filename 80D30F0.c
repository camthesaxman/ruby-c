int __fastcall sub_80D30F0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r5@1
  __int16 v3; // r4@4
  __int16 v4; // r0@4
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
  {
    *((_WORD *)v2 + 5) = word_3004B00[0];
    *((_WORD *)v2 + 6) = word_3004B02;
    *((_WORD *)v2 + 7) = word_3004B04;
  }
  if ( ++*((_WORD *)v2 + 4) % (signed int)*((_WORD *)v2 + 6) == 1 )
  {
    v3 = (unsigned __int16)Random() % 0xF0u & 0xFF;
    v4 = (unsigned __int16)Random() % 0x50u;
    CreateSprite((int)"É'É'tﬂ7\b,ë=\b", v3, (unsigned __int8)v4);
  }
  if ( *((_WORD *)v2 + 4) == *((_WORD *)v2 + 7) )
    move_anim_task_del(v1);
  return v6;
}
