int __fastcall sub_80E4178(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r4@1
  unsigned int i; // r1@2
  _BYTE *v4; // r0@6
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( word_3004B00[0] )
  {
    if ( word_3004B00[0] == 1 )
    {
      v4 = (_BYTE *)33748936;
    }
    else
    {
      if ( word_3004B00[0] != 2 )
        goto _080E41D4;
      v4 = (_BYTE *)33748937;
    }
    v2 = *v4 + 16;
    goto _080E41D4;
  }
  for ( i = sub_80791A8(1, 0, 0, 0, 0, 0, 0); !(i & 1); ++v2 )
    i >>= 1;
_080E41D4:
  memcpy(32 * v2 + 33745608, (const char *)(32 * v2 + 33746632), 32);
  move_anim_task_del(v1);
  return v6;
}
