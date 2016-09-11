int __fastcall CopyContestCategoryToStringVar(unsigned __int8 a1, int a2)
{
  unsigned int v2; // r1@1
  int v4; // [sp+0h] [bp-4h]@0

  v2 = a2 << 24;
  if ( v2 >> 24 <= 4 )
  {
    switch ( v2 >> 24 )
    {
      case 0u:
        StringCopy((_BYTE *)gUnknown_083D1464[a1], &OtherText_Cool2);
        break;
      case 1u:
        StringCopy((_BYTE *)gUnknown_083D1464[a1], &OtherText_Beauty3);
        break;
      case 2u:
        StringCopy((_BYTE *)gUnknown_083D1464[a1], &OtherText_Cute2);
        break;
      case 3u:
        StringCopy((_BYTE *)gUnknown_083D1464[a1], &OtherText_Smart2);
        break;
      case 4u:
        StringCopy((_BYTE *)gUnknown_083D1464[a1], &OtherText_Tough2);
        break;
      default:
        return v4;
    }
  }
  return v4;
}
