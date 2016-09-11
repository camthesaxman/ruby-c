int __fastcall SetPlayerAvatarFieldObjectIdAndObjectId(unsigned __int8 a1, char a2)
{
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v202E85D = a1;
  v202E85C = a2;
  v2 = &dword_30048A0[9 * a1];
  v202E85F = GetPlayerAvatarGenderByGraphicsId(*((_BYTE *)v2 + 5));
  SetPlayerAvatarExtraStateTransition(*((_BYTE *)v2 + 5), 32);
  return v4;
}
