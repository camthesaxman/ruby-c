int __fastcall ItemUseOutOfBattle_EnigmaBerry(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r2@1
  int *v4; // r1@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_8070E48(v203855E) - 1;
  if ( v2 > 0x14 )
  {
def_80CA542:
    HIWORD(dword_3004B20[10 * v1 + 9]) = 4;
    ItemUseOutOfBattle_CannotUse(v1);
  }
  else
  {
    switch ( v2 )
    {
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
        HIWORD(dword_3004B20[10 * v1 + 9]) = 1;
        ItemUseOutOfBattle_Medicine(v1);
        break;
      case 9u:
        v4 = &dword_3004B20[10 * v1];
        *((_WORD *)v4 + 19) = 1;
        ItemUseOutOfBattle_SacredAsh(v1, (int)v4, v3);
        break;
      case 0u:
        HIWORD(dword_3004B20[10 * v1 + 9]) = 1;
        ItemUseOutOfBattle_RareCandy(v1);
        break;
      case 0x12u:
      case 0x13u:
        HIWORD(dword_3004B20[10 * v1 + 9]) = 1;
        ItemUseOutOfBattle_PPUp(v1);
        break;
      case 0x14u:
        HIWORD(dword_3004B20[10 * v1 + 9]) = 1;
        ItemUseOutOfBattle_PPRecovery(v1);
        break;
      default:
        goto def_80CA542;
    }
  }
  return v6;
}
