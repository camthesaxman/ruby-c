int __fastcall PlayerAvatarTransition_AcroBike(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = GetPlayerAvatarGraphicsIdByStateId(2);
  sub_805B980(v1, v2);
  FieldObjectTurn(v1, (unsigned int)*(_BYTE *)(v1 + 24) >> 4);
  SetPlayerAvatarStateMask(4);
  v3 = sub_80E5FCC(0, 0);
  sub_80E6084(v3);
  return v5;
}
