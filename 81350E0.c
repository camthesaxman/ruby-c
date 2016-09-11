int __fastcall sub_81350E0(unsigned __int16 a1, unsigned __int8 a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  unsigned __int16 v6; // r0@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = SpeciesToNationalPokedexNum(a1);
  if ( sub_8090D90(v6, 1u) << 24 )
  {
    v5 = (v5 + 1) & 0xFF;
    if ( (unsigned int)(v5 - 1) > 0xA )
    {
def_8135116:
      if ( v5 == v3 )
        StringAppend(&gStringVar1, &gUnknown_08400E23);
      else
        StringAppend(&gStringVar1, &gUnknown_08400E29);
      StringAppend(&gStringVar1, &gUnknown_08400E2E);
    }
    else
    {
      switch ( v5 )
      {
        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
          if ( v3 == v5 )
          {
            StringAppend(&gStringVar1, &gUnknown_08400E23);
          }
          else if ( v3 > v5 )
          {
            StringAppend(&gStringVar1, &gUnknown_08400E29);
          }
          break;
        case 1:
          if ( v5 == v3 )
            StringAppend(&gStringVar1, &gUnknown_08400E23);
          else
            StringAppend(&gStringVar1, &gUnknown_08400E29);
          StringAppend(&gStringVar1, &gUnknown_08400E30);
          break;
        default:
          goto def_8135116;
      }
    }
    StringAppend(&gStringVar1, &gSpeciesNames[11 * v4]);
  }
  return v5;
}
