int __fastcall PlayerAvatarTransition_Underwater(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = GetPlayerAvatarGraphicsIdByStateId(4);
  sub_805B980(v1, v2);
  FieldObjectTurn(v1, (unsigned int)*(_BYTE *)(v1 + 24) >> 4);
  SetPlayerAvatarStateMask(16);
  *(_BYTE *)(v1 + 26) = sub_8128124(*(_BYTE *)(v1 + 4));
  return v4;
}
