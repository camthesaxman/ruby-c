int __fastcall sub_80AEB68(int a1, unsigned __int8 a2)
{
  unsigned int v2; // r0@1
  signed __int16 v3; // r0@3

  v2 = gContestEffects[4 * gContestMoves[8 * a1 & 0x7FFFF]];
  if ( v2 > 8 )
  {
def_80AEB8C:
    v3 = -28538;
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
      case 1u:
      case 8u:
        v3 = -28542;
        break;
      case 2u:
      case 3u:
        v3 = -28536;
        break;
      default:
        goto def_80AEB8C;
    }
  }
  return (v3 + (a2 << 12) + 36864) & 0xFFFF;
}
