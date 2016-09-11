int __fastcall ItemUseInBattle_EnigmaBerry(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_8070E48(v203855E);
  if ( v2 > 0x15 )
  {
def_80CA66A:
    ItemUseOutOfBattle_CannotUse(v1);
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
        ItemUseInBattle_StatIncrease(v1);
        break;
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xBu:
        ItemUseInBattle_Medicine(v1);
        break;
      case 0x15u:
        ItemUseInBattle_PPRecovery(v1);
        break;
      default:
        goto def_80CA66A;
    }
  }
  return v4;
}
