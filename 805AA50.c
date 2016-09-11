int __fastcall npc_clear_ids_and_state(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  memset(a1, 0, 36);
  *(_BYTE *)(v1 + 8) = -1;
  *(_BYTE *)(v1 + 9) = -1;
  *(_BYTE *)(v1 + 10) = -1;
  *(_BYTE *)(v1 + 28) = -1;
  return v3;
}
