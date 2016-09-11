int sav1_map_get_battletype()
{
  return *(_BYTE *)(get_mapheader_by_bank_and_number(v2025738 & 0xFFFF, v2025739 & 0xFFFF) + 27);
}
