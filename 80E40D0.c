int __fastcall sub_80E40D0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int v2; // r4@1
  unsigned int i; // r1@2
  _BYTE *v4; // r0@6
  int v5; // r5@10
  int v6; // r4@10
  signed int v7; // r0@11
  int v9; // [sp+18h] [bp-4h]@0

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
        goto _080E412C;
      v4 = (_BYTE *)33748937;
    }
    v2 = *v4 + 16;
  }
  else
  {
    for ( i = sub_80791A8(1, 0, 0, 0, 0, 0, 0); !(i & 1); ++v2 )
      i >>= 1;
  }
_080E412C:
  v5 = 32 * v2 + 33745608;
  v6 = 32 * word_3004B02;
  if ( sub_8076BE0() << 24 )
    v7 = 33638400;
  else
    v7 = 33652736;
  memcpy(v5, (const char *)(v6 + v7), 32);
  move_anim_task_del(v1);
  return v9;
}
