int __fastcall sub_805FF20(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r5@1
  __int16 v5; // [sp+0h] [bp-14h]@1
  __int16 v6; // [sp+2h] [bp-12h]@1

  v2 = a1;
  v3 = a2;
  v5 = *(_WORD *)(a1 + 16);
  v6 = *(_WORD *)(a1 + 18);
  MoveCoords(a2, &v5, &v6);
  return (unsigned __int8)npc_block_way(v2, v5, v6, v3);
}
