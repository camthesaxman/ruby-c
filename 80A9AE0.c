int __fastcall itemid_get_battle_function(unsigned __int16 a1)
{
  return *(_DWORD *)&gItems[22 * (unsigned __int16)itemid_sanitize(a1) + 18];
}
