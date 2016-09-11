int __fastcall get_map_light_level_from_warp(int a1)
{
  return (unsigned __int8)get_map_light_level_by_bank_and_number(*(_BYTE *)a1, *(_BYTE *)(a1 + 1));
}
