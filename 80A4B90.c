void *__fastcall sub_80A4B90(unsigned __int16 a1)
{
  signed int v1; // r4@1
  void *result; // r0@4

  v1 = a1;
  if ( TestPlayerAvatarFlags(6u) << 24 && (v1 == 259 || v1 == 272) )
  {
    result = &gUnknown_0840E63B;
  }
  else if ( (unsigned __int8)itemid_is_mail(v1) == 1 )
  {
    result = &gUnknown_0840E669;
  }
  else
  {
    result = *(&gUnknown_083C1640 + 2 * *(_BYTE *)dword_3000704);
  }
  return result;
}
