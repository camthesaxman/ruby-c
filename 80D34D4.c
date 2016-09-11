int __fastcall sub_80D34D4(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r2@1
  __int16 v3; // r0@1
  int v4; // r5@2
  __int16 v5; // r6@2
  _WORD *v6; // r3@2
  signed int v7; // r1@2
  _WORD *v8; // r2@2
  int *v9; // r0@5
  __int16 v10; // r1@5
  int v12; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 14) + 1;
  *((_WORD *)v2 + 14) = v3;
  if ( v3 == 3 )
  {
    *((_WORD *)v2 + 14) = 0;
    v4 = (*((_WORD *)v2 + 6) + 1) & 0xFFFF;
    v5 = *(_WORD *)(2 * v4 + 0x202EEC8);
    v6 = (_WORD *)(2 * v4 + 33746634);
    v7 = 6;
    v8 = (_WORD *)(2 * v4 + 33746632);
    do
    {
      *v8 = *v6;
      ++v6;
      ++v8;
      --v7;
    }
    while ( v7 >= 0 );
    *(_WORD *)(2 * (v4 + 7) + 0x202EEC8) = v5;
  }
  v9 = &dword_3004B20[10 * v1];
  v10 = *((_WORD *)v9 + 15) + 1;
  *((_WORD *)v9 + 15) = v10;
  if ( v10 == *((_WORD *)v9 + 4) )
    move_anim_task_del(v1);
  return v12;
}
