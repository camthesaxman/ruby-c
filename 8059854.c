int __fastcall GetPlayerAvatarGraphicsIdByStateIdAndGender(int a1, unsigned __int8 a2)
{
  return *(&gUnknown_0830FC54[a2] + (2 * a1 & 0x1FF));
}
