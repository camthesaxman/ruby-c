int __fastcall sub_80DA0DC(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r3@1
  __int16 v3; // r0@1
  int v4; // r0@2
  _WORD *v5; // r1@2
  __int16 v6; // r6@2
  signed int v7; // r4@2
  int v8; // r12@2
  _WORD *v9; // r3@2
  int *v10; // r0@5
  int v11; // r1@5
  int v13; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 14);
  *((_WORD *)v2 + 14) = v3 + 1;
  if ( v3 == *((_WORD *)v2 + 5) )
  {
    *((_WORD *)v2 + 14) = 0;
    v4 = 16 * *((_BYTE *)v2 + 12);
    v5 = (_WORD *)(2 * (v4 + 264) + 33746632);
    v6 = *(_WORD *)(2 * (v4 + 264) + 0x202EEC8);
    v7 = 7;
    v8 = 16 * *((_BYTE *)v2 + 12);
    v9 = (_WORD *)(2 * (v8 + 263) + 33746632);
    do
    {
      *v5 = *v9;
      --v9;
      --v5;
      --v7;
    }
    while ( v7 > 0 );
    *(_WORD *)(2 * (v8 + 257) + 0x202EEC8) = v6;
  }
  v10 = &dword_3004B20[10 * v1];
  v11 = *((_WORD *)v10 + 4) - 1;
  *((_WORD *)v10 + 4) = v11;
  if ( !(v11 << 16) )
    move_anim_task_del(v1);
  return v13;
}
