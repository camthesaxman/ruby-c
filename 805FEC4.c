int __fastcall npc_set_running_behaviour_etc(int a1, unsigned __int8 a2)
{
  int v2; // r12@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a1;
  *(_BYTE *)(a1 + 6) = a2;
  v3 = a1 + 33;
  *(_BYTE *)v3 = 0;
  *(_BYTE *)(v3 + 1) = 0;
  dword_2020020[17 * *(_BYTE *)(v2 + 4)] = (int)*(&gUnknown_0836DA88 + a2);
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2 + 4) + 48] = 0;
  return v5;
}
