int __fastcall sub_8132528(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  signed __int16 v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  word_3004B0E = 0;
  if ( v202F7C0 & 0x60 )
  {
    v2 = 1;
_0813256E:
    word_3004B0E = v2;
    goto _08132570;
  }
  if ( v202F7C0 & 7 )
  {
    v2 = 2;
    goto _0813256E;
  }
  if ( v202F7C0 & 0x18 )
  {
    v2 = 3;
    goto _0813256E;
  }
  if ( v202F7C0 & 0x80 )
  {
    v2 = 4;
    goto _0813256E;
  }
_08132570:
  move_anim_task_del(v1);
  return v4;
}
