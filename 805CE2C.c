signed int __fastcall sub_805CE2C(int a1, int a2)
{
  int v2; // r4@1
  signed int result; // r0@1

  v2 = a2;
  npc_reset();
  result = 1;
  *(_WORD *)(v2 + 48) = 1;
  return result;
}
