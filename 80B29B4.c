int __fastcall sub_80B29B4(unsigned __int16 a1)
{
  unsigned int v1; // r0@1
  char v2; // r0@3
  int v4; // [sp+0h] [bp-4h]@0

  v1 = gBattleMoves[12 * a1 + 6];
  if ( v1 > 0x20 )
  {
def_80B29D2:
    v2 = 3;
  }
  else
  {
    switch ( v1 )
    {
      case 2u:
      case 0x10u:
        v2 = 2;
        break;
      default:
        goto def_80B29D2;
    }
  }
  v2024C08 = v2;
  return v4;
}
