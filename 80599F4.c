int __fastcall SetPlayerAvatarStateMask(unsigned __int8 a1)
{
  int result; // r0@1

  result = a1 | (unsigned __int8)(v202E858 & 0xE0);
  v202E858 = result;
  return result;
}
