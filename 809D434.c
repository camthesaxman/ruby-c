signed int __fastcall mon_icon_convert_unown_species_id(unsigned __int16 a1, int a2)
{
  int v2; // r0@2
  int v3; // r0@3
  signed int v4; // r1@5

  if ( a1 == 201 )
  {
    v2 = (unsigned __int16)sub_809D474(a2);
    if ( v2 )
      v3 = (v2 + 412) & 0xFFFF;
    else
      v3 = 201;
    v4 = v3;
  }
  else
  {
    v4 = a1;
    if ( a1 > 0x19Cu )
      v4 = 260;
  }
  return v4;
}
