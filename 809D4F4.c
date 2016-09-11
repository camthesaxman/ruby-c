int __fastcall sub_809D4F4(unsigned __int16 a1, int a2)
{
  return *(int *)((char *)&gMonIconTable + (4 * mon_icon_convert_unown_species_id(a1, a2) & 0x3FFFF));
}
