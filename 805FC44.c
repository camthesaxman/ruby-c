signed int __fastcall sub_805FC44(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned __int8 v4; // r0@1
  signed int result; // r0@1

  v2 = a1;
  v3 = a2;
  npc_reset();
  v4 = GetStepInPlaceDelay4AnimId(*(_BYTE *)(v2 + 24) & 0xF);
  FieldObjectSetRegularAnim(v2, v3, v4);
  result = 1;
  *(_WORD *)(v3 + 48) = 1;
  return result;
}
