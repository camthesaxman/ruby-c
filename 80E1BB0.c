int __fastcall sub_80E1BB0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  unsigned __int8 *v2; // r0@2
  unsigned __int8 v3; // r5@4
  int *v4; // r4@6
  __int16 v5; // r0@6
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] & 1 )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  if ( word_3004B00[0] > 1 )
    v3 ^= 2u;
  v4 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80E1C58, word_3004B02)];
  *((_WORD *)v4 + 5) = (32 - (unsigned __int8)sub_8077ABC(v3, 2u)) & 0x1FF;
  v5 = (unsigned __int8)sub_8077ABC(v3, 3u);
  *((_WORD *)v4 + 6) = (64 - v5) & 0xFF;
  word_30041B0 = *((_WORD *)v4 + 5);
  word_30041B8 = (64 - v5) & 0xFF;
  *((_WORD *)v4 + 7) = word_3004B04;
  move_anim_task_del(v1);
  return v7;
}
