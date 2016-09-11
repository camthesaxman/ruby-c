int __fastcall sub_812B2B8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  char v2; // r4@1
  _WORD *v3; // r0@2
  int v4; // r0@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = sub_8076F98(0xC0u);
  if ( sub_8076BE0() << 24 )
    v3 = (_WORD *)33657672;
  else
    v3 = (_WORD *)(2 * v202F7C8 + 33748938);
  v4 = *v3;
  if ( v4 )
    sub_80750B4(v4, v2, 4);
  move_anim_task_del(v1);
  return v6;
}
