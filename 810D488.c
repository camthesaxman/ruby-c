char *__fastcall sub_810D488(unsigned int a1)
{
  unsigned __int16 v2; // r0@40
  unsigned __int16 v3; // r0@41
  unsigned __int16 v4; // r0@44
  unsigned __int16 v5; // r0@45

  a1 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 <= 9u )
    return (char *)&gUnknown_081C4520;
  if ( a1 <= 0x13 )
    return (char *)&gUnknown_081C456A;
  if ( a1 <= 0x1D )
    return gUnknown_081C45B0;
  if ( a1 <= 0x27 )
    return gUnknown_081C45F9;
  if ( a1 <= 0x31 )
    return gUnknown_081C4648;
  if ( a1 <= 0x3B )
    return (char *)&gUnknown_081C467E;
  if ( a1 <= 0x45 )
    return gUnknown_081C46B9;
  if ( a1 <= 0x4F )
    return gUnknown_081C46FE;
  if ( a1 <= 0x59 )
    return gUnknown_081C4747;
  if ( a1 <= 0x63 )
    return gUnknown_081C4780;
  if ( a1 <= 0x6D )
    return gUnknown_081C47DF;
  if ( a1 <= 0x77 )
    return gUnknown_081C4828;
  if ( a1 <= 0x81 )
    return (char *)&gUnknown_081C4863;
  if ( a1 <= 0x8B )
    return gUnknown_081C489C;
  if ( a1 <= 0x95 )
    return (char *)&gUnknown_081C48EB;
  if ( a1 <= 0x9F )
    return (char *)&gUnknown_081C4936;
  if ( a1 <= 0xA9 )
    return (char *)&gUnknown_081C49A2;
  if ( a1 <= 0xB3 )
    return (char *)&gUnknown_081C4A06;
  if ( a1 <= 0xBD )
    return gUnknown_081C4A4F;
  if ( a1 <= 0xC7 )
    return gUnknown_081C4A91;
  if ( a1 == 200 )
  {
    v2 = SpeciesToNationalPokedexNum(0x199u);
    if ( !(sub_8090D90(v2, 1u) << 24) )
    {
      v3 = SpeciesToNationalPokedexNum(0x19Au);
      if ( !(sub_8090D90(v3, 1u) << 24) )
        return (char *)&gUnknown_081C4ADA;
    }
    return gUnknown_081C4A91;
  }
  if ( a1 == 201 )
  {
    v4 = SpeciesToNationalPokedexNum(0x199u);
    if ( !(sub_8090D90(v4, 1u) << 24) )
      return (char *)&gUnknown_081C4ADA;
    v5 = SpeciesToNationalPokedexNum(0x19Au);
    if ( !(sub_8090D90(v5, 1u) << 24) )
      return (char *)&gUnknown_081C4ADA;
    return gUnknown_081C4A91;
  }
  if ( a1 != 202 )
    return (char *)&gUnknown_081C4520;
  return (char *)&gUnknown_081C4ADA;
}
