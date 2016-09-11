signed int __fastcall do_heart_bubble(int a1, int a2)
{
  int v2; // r4@1
  signed int result; // r0@1

  v2 = a2;
  FieldObjectGetLocalIdAndMap(a1, (_BYTE *)0x202FF84, (_BYTE *)0x202FF88, (_BYTE *)0x202FF8C);
  FieldEffectStart(46);
  result = 1;
  *(_WORD *)(v2 + 50) = 1;
  return result;
}
