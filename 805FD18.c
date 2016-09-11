int __fastcall npc_reset(int a1, int a2)
{
  int result; // r0@1

  *(_BYTE *)a1 &= 0x3Du;
  *(_BYTE *)(a1 + 28) = -1;
  result = 0;
  *(_WORD *)(a2 + 48) = 0;
  return result;
}
