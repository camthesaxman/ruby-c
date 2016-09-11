int sub_8013998()
{
  void *v0; // r0@4
  int v2; // [sp+4h] [bp-4h]@0

  v2024A7F = 0;
  if ( v20239F8 & 2 )
  {
    byte_30041C0[0] = v2024D26;
    v2024C07 = battle_get_side_with_given_state(0);
    v2024C10 = &gUnknown_081D8E02;
    v2024D26 &= 0x7Fu;
    goto _08013B48;
  }
  if ( v20239F8 & 0x900 )
  {
    v0 = &gUnknown_081D8E0D;
_08013B46:
    v2024C10 = v0;
    goto _08013B48;
  }
  if ( (v20239F8 & 0xA) != 8 )
  {
    v0 = &gUnknown_081D8DCE;
    goto _08013B46;
  }
  sub_80325B8();
  v2024C10 = &gUnknown_081D8DBE;
  if ( (unsigned int)*((_BYTE *)&gTrainers + 40 * v202FF5E + 1) - 2 > 0x31 )
  {
def_8013A38:
    sub_8075474(412);
  }
  else
  {
    switch ( *((_BYTE *)&gTrainers + 40 * v202FF5E + 1) )
    {
      case 0x18:
      case 0x20:
        sub_8075474(355);
        break;
      case 2:
      case 3:
      case 4:
      case 0x31:
      case 0x32:
      case 0x33:
        sub_8075474(424);
        break;
      case 0x19:
        sub_8075474(354);
        break;
      default:
        goto def_8013A38;
    }
  }
_08013B48:
  dword_30042D4 = (int)sub_8013C9C;
  return v2;
}
