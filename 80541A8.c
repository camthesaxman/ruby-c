int __fastcall get_map_light_level_by_bank_and_number(int a1, int a2)
{
  return *(_BYTE *)(get_mapheader_by_bank_and_number(
                      (unsigned int)(a1 << 24 >> 8) >> 16,
                      (unsigned int)(a2 << 24 >> 8) >> 16)
                  + 23);
}
