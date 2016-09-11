signed int __fastcall sub_80EADC0(unsigned __int8 a1, int a2)
{
  unsigned int v2; // r1@1
  unsigned int v3; // r3@1
  signed int result; // r0@4
  unsigned __int16 v5; // r0@5

  v2 = a2 << 16;
  v3 = v2 >> 16;
  if ( a1 > 0x15u )
  {
def_80EADD6:
    result = 1;
  }
  else
  {
    switch ( a1 )
    {
      case 0x14u:
        if ( !*(_BYTE *)(a1 + 0x2001067) )
          goto _080EAE70;
        LOBYTE(result) = sub_80EB868((unsigned __int8)v3);
        goto _080EAE7C;
      case 0u:
        v5 = SpeciesToNationalPokedexNum(HIWORD(v2));
        LOBYTE(result) = sub_8090D90(v5, 0);
        goto _080EAE7C;
      case 0x11u:
      case 0x12u:
      case 0x13u:
        if ( *(_BYTE *)(a1 + 0x2001067) )
          goto def_80EADD6;
_080EAE70:
        result = 0;
        break;
      case 0x15u:
        LOBYTE(result) = sub_80EB9C8();
_080EAE7C:
        result = (unsigned __int8)result;
        break;
      default:
        goto def_80EADD6;
    }
  }
  return result;
}
