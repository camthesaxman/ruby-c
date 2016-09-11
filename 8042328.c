int sub_8042328()
{
  _BYTE *v0; // r2@1

  pokemon_get_nick_(&dword_3004360[25 * (unsigned __int8)byte_3005CE0], (int)&gStringVar1);
  return (unsigned __int16)GetBoxMonData(&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 11, v0);
}
