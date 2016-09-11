int __fastcall SetPlayerAvatarTransitionFlags(unsigned __int16 a1)
{
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = a1 | v202E859;
  v202E859 = v1;
  DoPlayerAvatarTransition(v1);
  return v3;
}
