int __fastcall sub_8093130(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80932E4(a1);
  SetMainCallback2((int)sub_8093174);
  v200009C = *((_WORD *)&gLinkPlayers + 14 * *(_BYTE *)(4 * v1 + 0x2029819) + 13);
  return v3;
}
