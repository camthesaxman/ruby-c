signed int __fastcall sub_8084398(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  char v5; // r0@1

  v3 = a2;
  v4 = a3;
  FieldObjectGetLocalIdAndMap(a3, (_BYTE *)0x202FF84, (_BYTE *)0x202FF88, (_BYTE *)0x202FF8C);
  FieldEffectStart(0);
  v5 = GetFaceDirectionAnimId(*(_BYTE *)(v4 + 24) & 0xF);
  FieldObjectSetSpecialAnim((_BYTE *)v4, v5);
  ++*(_WORD *)(v3 + 8);
  return 1;
}
