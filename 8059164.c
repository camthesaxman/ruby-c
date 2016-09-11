int __fastcall PlayerAvatarTransition_Surfing(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = GetPlayerAvatarGraphicsIdByStateId(3);
  sub_805B980(v1, v2);
  FieldObjectTurn(v1, (unsigned int)*(_BYTE *)(v1 + 24) >> 4);
  SetPlayerAvatarStateMask(8);
  v202FF84 = *(_WORD *)(v1 + 16);
  v202FF88 = *(_WORD *)(v1 + 18);
  v202FF8C = v202E85D;
  *(_BYTE *)(v1 + 26) = FieldEffectStart(8);
  sub_8127ED0();
  return v4;
}
