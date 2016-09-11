int __fastcall SetPlayerAvatarExtraStateTransition(unsigned __int8 a1, char a2)
{
  int v3; // [sp+8h] [bp-4h]@0

  v202E859 |= (unsigned __int8)GetPlayerAvatarStateTransitionByGraphicsId(a1, v202E85F) | a2;
  DoPlayerAvatarTransition();
  return v3;
}
