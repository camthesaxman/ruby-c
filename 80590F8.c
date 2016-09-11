int __fastcall PlayerAvatarTransition_MachBike(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = GetPlayerAvatarGraphicsIdByStateId(1);
  sub_805B980(v1, v2);
  FieldObjectTurn(v1, (unsigned int)*(_BYTE *)(v1 + 24) >> 4);
  SetPlayerAvatarStateMask(2);
  sub_80E5FCC(0, 0);
  return v4;
}
